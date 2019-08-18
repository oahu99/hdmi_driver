#include <stdlib.h>
#include "Vhdmi_driver.h"
#include <testbench_template.h>

int main() {
	TESTBENCH<Vhdmi_driver> *tb = new TESTBENCH<Vhdmi_driver>;

	while (tb->tickCount < 1000) {
		tb->tick();
	}
}
