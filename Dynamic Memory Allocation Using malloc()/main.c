/*
Dynamic Memory Allocation is the process of allocating memory at runtime. Library fnx known as "memory management fnx" are used for allocating and freeing memory during execution of a program. These fnx are defined in stdlib.h.
This process for allocating memory which will permit you to implement a program in which the array or variable size is undecided until you run your program (runtime).
The memory is allocated to a variable or program at the run time. The only way to access this dynamically allocated memeory is through pointer.
Dynamic memory is managed and served with pointers that point to the newly allocated memory space in an area which we call the heap.
-malloc() funx; It is a function which is used to allocate a block of memory dynamically. The C library function void *malloc(size_t size) allocates the requested memory and returns a pointer to it.
This function returns a pointer to the allocated memory, or NULL if the request fails.
The malloc() fnx allocates a block of size bytes from the memory heap. It allows a program to allocates as it's needed and in the exact amount needed.
Malloc function can also be used with the character data type as well as complex data types such as structures.

Functions for Dynamic memory mgt:
Function	Purpose
malloc(Memory Allocation)	:   Allocates the memory of requested size and returns the pointer to the first byte of allocated space.
calloc(contiguous allocation) :   Allocates the space for elements of an array. Initializes the elements to zero and returns a pointer to the memory.
realloc	:   It is used to modify the size of previously allocated memory space.
Free()	:   Frees or empties the previously allocated memory space.

Syntax for malloc()
ptr = (cast_type *) malloc (byte_size);
-ptr is a pointer of cast_type.
-The malloc function returns a pointer to the allocated memory of byte_size.
Example: ptr = (int *) malloc (50)
*/
#include <stdio.h>
#include <stdlib.h>

//Program to allocate memeory for array of 5 integers using malloc();
int main()
{
    // Demo 1
    int *arr;

    //malloc() allocates the memory for 5 integers containing garbage values
    arr = (int*)malloc(5 * sizeof(int)); //5 * 4 bytes = 20 bytes since each integer has 4 bytes
    //printf("Hello world!\n");


    // Demo 2
    int *ptr;
    ptr = malloc(15 * sizeof(*ptr)); // a block of 15 integers
    // or
    //ptr = (int*)malloc(15*sizeof(int));
    /*
    Notice that sizeof(*ptr) was used instead of sizeof(int) in order to make the code more robust
    when *ptr declaration is typecasted to a different data type later.
    The allocation may fail if the memory is not sufficient. In this case, it returns a NULL pointer.
    So, you should include code to check for a NULL pointer.
    */
    if(ptr!=NULL)
    {
        *(ptr+5)=480; // assigning 480 to sixth integer
        printf("Value of the 6th integer is %d\n",*(ptr + 5));
    }
    return 0;
}
