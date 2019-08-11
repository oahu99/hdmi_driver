module hdmi_driver (
	input clk_50, reset_al,
	output wire H_sync, V_sync,
	output reg [9:0] CountX, CountY,
	output wire [7:0] RED, GREEN, BLUE,
	output reg Draw_enable,
	output wire sda, scl, // signals from i2c driver
	output wire fail, // flag for failed transmission
	output reg rst, // test reset for ah/al
	output reg clk_25
);

// blanking signals
assign H_sync = (CountX>=656) && (CountX<752);
assign V_sync = (CountY>=490) && (CountY<492);

reg [6:0] slave_address; // address for i2c transmission
wire [7:0] data; // data to send over i2c bus
reg [2:0] byte_num = 2; // number of data bytes per transmission
reg [7:0] byte_lut, byte_lut_next; // LUT for bytes to send to i2c driver
reg [9:0] clk_divide; // clock divider to generate i2c clock
wire read_write = 0; // always write to i2c bus
reg start; // starts i2c tx state machine
reg clk_50k; // i2c clock
wire reset;
	
i2c_master_top I2C_0 (
	.clk_50k			(clk_50k),
	.reset			(reset),
	.start			(start),
	.sda				(sda),
	.scl				(scl),
	.slave_address	(slave_address),
	.read_write		(read_write),
	.data				(data),
	.byte_num		(byte_num),
	.fail				(fail),
	.done				(done)
	);
	
reg_lut LUT0 (
	.byte_lut		(byte_lut),
	.data_byte		(data)
);

assign GREEN = CountX;
assign BLUE = CountY;
assign reset = ~reset_al;


always @ (*) begin

	start = (byte_lut >= 25) ? 0 : 1;
	slave_address = 7'h7A; // address for main register map
	
end

always @ (posedge clk_50) begin
	clk_25 <= (rst) ? 0 : ~clk_25;
end

always @ (posedge done) begin
byte_lut_next <= byte_lut + 1;
end
	
always @ (posedge clk_25) begin // state machine for ADV7513 initialization

	rst <= reset;
	
	if (reset) begin // initialize signals to 0
		clk_50k <= 0;
		clk_divide <= 0;
	end

	if (clk_divide == 500) begin // clock divider logic
		clk_50k <= ~clk_50k;
		clk_divide <= 0;
	end
	else
		clk_divide <= clk_divide + 1;
	
	byte_lut <= (reset) ? 0 : byte_lut_next; // state machine for LUT
end

always @ (posedge clk_25) begin // counter loop
	
	if (reset) begin
		CountX <= 0;
		CountY <= 0;
	end
	else begin
		CountX <= (CountX == 799) ? 0 : CountX + 1;
		if (CountX == 799) CountY <= (CountY == 524) ? 0 : CountY + 1;
	end
end

always @ (*) begin
	if (CountX <= 640 && CountY <= 480)
		Draw_enable = 1;
	else
		Draw_enable = 0;
end

endmodule
