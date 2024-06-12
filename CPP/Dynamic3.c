#include <stdio.h>
#include <stdlib.h>// for malloc,calloc,realloc &free


int main()
{
    int *ptr = NULL;
    ptr = (int*)malloc(5 * sizeof(int)); // allocate memory for 5 integers

    // use the memory allocator
    ptr = (int*)realloc(ptr,10 * sizeof(int)); // increase size of allocated block to 10 elements

    free(ptr); // free memory allocated
    return 0;
}
