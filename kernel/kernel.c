#include "gdt.h"
#include "../common/types.h"

extern void kernel_smiley();

void kernel(){
	gdt_init();
	kernel_smiley();
	while(1);	
}

void printf(char* fmt, ...){

}
