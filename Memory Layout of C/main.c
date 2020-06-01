#include <stdio.h>
#include <stdlib.h>
/*
Memory Layout of C Programs
A typical memory representation of C program consists of following sections.
1. Text segment
2. Initialized data segment(simply the Data Segment).
3. Uninitialized data segment(“bss” or “block started by symbol” segment)
4. Stack
5. Heap.It is the segment where dynamic memory allocation usually takes place.
*/
int global; /* Uninitialized variable stored in bss*/
int global = 10; /* initialized global variable stored in DS*/
int main(void)
{
    static int i; /* Uninitialized static variable stored in bss */
    static int i = 100; /* Initialized static variable stored in DS*/
    return 0;
}
