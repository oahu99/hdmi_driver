module hdmi_driver (
	input clk_50, reset_al,
	output wire H_sync, V_sync,
	output reg [9:0] CountX, CountY,
	output wire [7:0] RED, GREEN, BLUE,
	output reg Draw_enable,
	output wire scl, // signals from i2c driver
	output wire sda,
	output wire fail, // flag for failed transmission
	output reg rst, // test reset for ah/al
	output reg clk_25,
	input wire HDMI_INT,
	output reg mI2C_CTRL_CLK
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
wire done;
	
i2c_master_top I2C_0 (
	.clk_50k			(mI2C_CTRL_CLK),
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

//	Clock Setting
reg	[15:0]	mI2C_CLK_DIV;
// reg			mI2C_CTRL_CLK;
parameter	CLK_Freq	=	50000000;	//	50	MHz
parameter	I2C_Freq	=	20000;		//	20	KHz

always@(posedge clk_50) // i2c clock gen
begin
	if(reset)
	begin
		mI2C_CTRL_CLK	<=	0;
		mI2C_CLK_DIV	<=	0;
	end
	else
	begin
		if( mI2C_CLK_DIV	< (CLK_Freq/I2C_Freq) )
			mI2C_CLK_DIV	<=	mI2C_CLK_DIV+1'b1;
		else
		begin
			mI2C_CLK_DIV	<=	0;
			mI2C_CTRL_CLK	<=	~mI2C_CTRL_CLK;
		end
	end
end

assign GREEN = CountX[7:0];
assign BLUE = CountY[7:0];
assign RED = CountY[7:0]/2;
assign reset = ~reset_al;


always @ (*) begin

	start = 1;//(byte_lut >= 64) ? 0 : 1;
	slave_address = 7'h72; // address for main register map
	
end

always @ (posedge clk_50) begin // vga clock divider
	clk_25 <= (rst) ? 0 : ~clk_25;
end

always @ (posedge done) begin // increment through config options
byte_lut_next <= byte_lut + 1;
end
	
always @ (posedge clk_50) begin // state machine for ADV7513 initialization

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

		byte_lut <= (byte_lut == 62) ? 0 : byte_lut_next; // state machine for LUT
		
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
