#include <stdlib.h>
#include "Vhdmi_driver.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(){

	Vhdmi_driver* tb = new Vhdmi_driver;
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC();
	tb->trace(tfp, 99);
	tfp->open("out.vcd");
	int counter = 0;

	while (counter < 5000000){
		tb->reset_al = (counter < 5) ? 0 : 1;

		counter++;
		tb->clk_25 = tb->clk_25 ? 0 : 1;
		tb->eval();
		tfp->dump(counter);
	}
	tfp->close();
	return(1);
}
