/*
	The C library function:
		void *realloc(void *ptr, size_t size)
	@ptr: This is the pointer to a memory block previously allocated with malloc, calloc or realloc to be reallocated. 
	If this is NULL, a new block is allocated and a pointer to it is returned by the function.
	@size: This is the new size for the memory block, in bytes. If it is 0 and ptr points to an existing block of memory,
	 the memory block pointed by ptr is deallocated and a NULL pointer is returned.

	@return value:  This function returns a pointer to the newly allocated memory, 
	or NULL if the request fails. */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *storage;
    int x;

    storage = (int *)malloc(sizeof(int) * 5);
    if( storage== NULL )
	{
		fprintf(stderr,"Allocation failed\n");
		exit(1);
	}
	puts("Memory allocated");
    /* initialize and output the values */
	for( x=0; x<5; x++ )
	{
		*(storage+x) = (x+1) * 11;
		printf("%d\n",*(storage+x) );
	}

    /* now increasing the buffer size by two integer values */
    storage = (int *)realloc(storage, sizeof(int) * 7);
    if( storage== NULL )
	{
		fprintf(stderr,"Reallocation failed\n");
		exit(1);
	}
    puts("Buffer re-sized");
    *(storage+5) = 66; 
	*(storage+6) = 77; 
    for( x=0; x<7; x++ )
	{
		printf("%d\n",*(storage+x) );
	}
	
    return 0;
}