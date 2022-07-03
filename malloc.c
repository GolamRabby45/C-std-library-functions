/*
    The C library function:
        void *malloc(size_t size) 
        @size: This is the size of the memory block, in bytes
        @return value: This function returns a pointer to the allocated memory, 
        or NULL if the request fails. */


#include <stdio.h>
#include <stdlib.h>

int main() {

    int *storage;
    int size = 5;

    storage = (int*)malloc(sizeof(int) * size);
    if( storage == NULL )
	{
		fprintf(stderr,"Allocation failed\n");
		exit(1);
	}
	else
	{
		printf("Memory allocated for %d integers\n",size);
	}
    return 0;
}