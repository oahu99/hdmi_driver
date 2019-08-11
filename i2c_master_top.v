module i2c_master_top
(
	input clk_50k, // 50khz clock source to stay within i2c standard speed
	input wire reset, // synchronous reset
	input wire start, // start communication
	output reg sda, // data line
	output reg scl, // clock line
	input wire [6:0] slave_address, // address for slave from higher level core
	input wire read_write, // read is high, write is low
	input wire [7:0] data, // data to write
	input wire [2:0] byte_num, // number of bytes to send in transmission
	output reg done, // marks the end of a successful byte transmission
	output reg fail // flag for failed transmission 
);

reg [3:0] counter; // counter for address/data transmission state machines
reg [7:0] message; // message to send on sda
reg [4:0] state, next_state; // states
reg ack; // does slave ack or not
reg [2:0] byte_num_local; // local register for byte transmission number
reg address; // selects between transmitting address and data

localparam // states for FSM
	IDLE = 0, 
	SEND_1 = 1,
	ACK_NACK_1 = 2,
	FAIL = 3,
	START_1 = 4,
	START_2 = 5,
	STOP = 6,
	SEND_2 = 7,
	SEND_3 = 8,
	DONE_1 = 9,
	DONE_2 = 10,
	ACK_NACK_2 = 11,
	ACK_NACK_3 = 12,
	STOP_2 = 13;

always @ (posedge clk_50k) begin

	if (reset) begin // synchronours hardware reset
		state <= IDLE;	
	end
	else
		state <= next_state;

	case (state)
		IDLE : begin
			address <= 1;
			counter <= 8;
			scl <= 1;
			sda <= 1;
			byte_num_local <= byte_num;
			done <= 0;
		end
		START_1 : begin
			fail <= 0;
			sda <= 0;
		end
		START_2 : begin
			scl <= 0;
		end
		SEND_1 : begin
			sda <= (counter != 0) ? message[counter - 1] : 0;
		end
		SEND_2 : begin
			scl <= 1;
			counter <= counter - 1;
		end
		SEND_3 : begin
			scl <= 0;
		end
		ACK_NACK_1 : begin
			scl <= 1;
		end
		ACK_NACK_2 : begin
			ack <= !sda;
		end
		ACK_NACK_3 : begin
			scl <= 0;
		end
		STOP : begin
			scl <= 1;
		end
		STOP_2 : begin
			sda <= 1;
		end
		DONE_1 : begin
			done <= (address) ? done : 1;
			address <= 0;
		end
		DONE_2 : begin
			byte_num_local <= (address) ? byte_num_local : byte_num_local - 1;
			counter <= 8;
			address <= 0;
			done <= 0;
		end
		FAIL : begin
			fail <= 1;
		end

	endcase
end

always @ (*) begin

	message = (address) ? {read_write, slave_address} : data;

	case (state)
		IDLE : next_state = (start) ? START_1 : IDLE; // wait for start signal
		START_1 : next_state = START_2;
		START_2 : next_state = SEND_1;
		SEND_1 : next_state = (counter == 0) ? ACK_NACK_1 : SEND_2; // if 8 bits have been sent, check for ACK
		SEND_2 : next_state = SEND_3;
		SEND_3 : next_state = SEND_1;
		ACK_NACK_1 : next_state = ACK_NACK_2; // pulse scl and wait for ACK/NACK
		ACK_NACK_2 : next_state = ACK_NACK_3;
		ACK_NACK_3 : next_state = (ack) ? DONE_1 : FAIL; // next state depending on ACK
		DONE_1 : next_state = DONE_2;
		DONE_2 : next_state = (byte_num_local == 0) ? STOP : SEND_1;
		STOP : next_state = STOP_2;
		STOP_2 : next_state = IDLE;
		FAIL : next_state = FAIL; // wait in FAIL until a reset occurs
		default : next_state = IDLE;
	endcase

end

endmodule
