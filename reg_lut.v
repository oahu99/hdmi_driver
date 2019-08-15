module reg_lut
(
input wire [7:0] byte_lut,
output reg [7:0] data_byte
);

always @ (*) begin
	case(byte_lut)
	
	//	Video Config Data
	0:	data_byte	=	8'h98; 
	1:	data_byte	=	8'h03;
	2:	data_byte	=	8'h01;
	3:	data_byte	=	8'h00;
	4:	data_byte	=	8'h02;
	5:	data_byte	=	8'h18;
	6:	data_byte	=	8'h03;
	7:	data_byte	=	8'h00;
	8:	data_byte	=	8'h14;
	9:	data_byte	=	8'h70;
	10:	data_byte	=	8'h15;
	11:	data_byte	=	8'h20;
	12:	data_byte	=	8'h16;
	13:	data_byte	=	8'h30;
	14:	data_byte	=	8'h18;
	15:	data_byte	=	8'h46;
	16:	data_byte	=	8'h40;
	17:	data_byte	=	8'h80;
	18:	data_byte	=	8'h41;
	19:	data_byte	=	8'h10;
	20:	data_byte	=	8'h49;
	21:	data_byte	=	8'hA8;
	22:	data_byte	=	8'h55;
	23:	data_byte	=	8'h10;
	24:	data_byte	=	8'h56;
	25:	data_byte	=	8'h08;
	26:	data_byte	=	8'h96;
	27:	data_byte	=	8'hF6;
	28:	data_byte	=	8'h73;
	29:	data_byte	=	8'h07;
	30:	data_byte	=	8'h76;
	31:	data_byte	=	8'h1F;
	32:	data_byte	=	8'h98;
	33:	data_byte	=	8'h03;
	34:	data_byte	=	8'h99;
	35:	data_byte	=	8'h02;
	36:	data_byte	=	8'h9A;
	37:	data_byte	=	8'hE0;
	38:	data_byte	=	8'h9C;
	39:	data_byte	=	8'h30;
	40:	data_byte	=	8'h9D;
	41:	data_byte	=	8'h61;
	42:	data_byte	=	8'hA2;
	43:	data_byte	=	8'hA4;
	44:	data_byte	=	8'hA3;
	45:	data_byte	=	8'hA4;
	46:	data_byte	=	8'hA5;
	47:	data_byte	=	8'h04;
	48:	data_byte	=	8'hAB;
	49:	data_byte	=	8'h40;
	50:	data_byte	=	8'hAF;
	51:	data_byte	=	8'h16;
	52:	data_byte	=	8'hBA;
	53:	data_byte	=	8'h60;
	54:	data_byte	=	8'hD1;
	55:	data_byte	=	8'hFF;
	56:	data_byte	=	8'hDE;
	57:	data_byte	=	8'h10;
	58:	data_byte	=	8'hE4;
	59:	data_byte	=	8'h60;
	60:	data_byte	=	8'hFA;
	61: data_byte	=	8'h7D;


	default:		data_byte	=	8'h00;
	endcase
end
/*
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
*/

endmodule