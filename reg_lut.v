module reg_lut
(
input wire [7:0] byte_lut,
output reg [7:0] data_byte
);

always @ (*) begin
	case (byte_lut)
		0			:	data_byte = 8'h98;
		1			:	data_byte = 8'h03;
		2			:	data_byte = 8'h9A;
		3			:	data_byte = 8'hE0;
		4			:	data_byte = 8'h9C;
		5			:	data_byte = 8'h30;
		6			:	data_byte = 8'h9D;
		7			:	data_byte = 8'h01;
		8			:	data_byte = 8'hA2;
		9			:	data_byte = 8'hA4;
		10			:	data_byte = 8'hA3;
		11			:	data_byte = 8'hA4;			
		12			:	data_byte = 8'hE0;
		13			:	data_byte = 8'hD0;
		14			:	data_byte = 8'hF9;
		15			:	data_byte = 8'h00;
		16			:	data_byte = 8'h15; // 24-bit RGB with separate sync
		17			:	data_byte = 8'h00;
		18			:	data_byte = 8'h16; // 4:4:4 RGB, 8-bit depth, rising edge input
		19			:	data_byte = 8'h30;
		20			:	data_byte = 8'h17; // select 4:3 aspect ratio
		21			:	data_byte = 8'h00;
		22			:	data_byte = 8'h18; // CSC disable
		23			:	data_byte = 8'h46;
		24			:	data_byte = 8'hAF; // set hdmi mode (HDCP?)
		25			:	data_byte = 8'h16;
		default	:	data_byte = 8'h00;
	endcase
end

endmodule