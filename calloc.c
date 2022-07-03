/*
	The C library function:
		void *calloc(size_t nitems, size_t size)
		@nitems: This is the number of elements to be allocated.
		@size: This is the size of elements */

#include <stdio.h>
#include <stdlib.h>


int main() {

    int *storage;
    int x;

    /* The calloc() function allocates and
	   initializes storage to all zeros or
	   all null characters in a char buffer*/

    storage = (int *) calloc(5, sizeof(int));
    if( storage== NULL )
	{
		fprintf(stderr,"Allocation failed\n");
		exit(1);
	} 

    puts("Memory allocated");
    /* the pointer is allocated, and the storage
	   locations are initialized to zero */
	   
	for( x=0; x<5; x++ )
		printf("%d\n",*(storage+x));

        
    return 0;
}