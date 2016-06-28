/*
- test to see how many cycles printf need to execute

compile:
g++ -o test test.c /home/malfatti/Documents/git/gem5-stable/util/m5/m5op_x86.S -static

execute:
 ./build/X86/gem5.fast configs/example/se.py  --cpu-type=detailed --caches --l2cache --l1d_size='32kB' --l1i_size='32kB' --l2_size='1MB' --cmd /home/malfatti/Documents/git/testApagar/test


M5ops:http://www.m5sim.org/M5ops
*/
#include<stdlib.h>
#include</home/malfatti/Documents/git/gem5-stable/util/m5/m5op.h>


#include<stdio.h>

int main()
{
	// Reset simulation statistics
    m5_reset_stats(1,0);
    printf("hello world\n");
    return 0;
    //Save simulation statistics to a file
    m5_dump_stats(1,0);
}
