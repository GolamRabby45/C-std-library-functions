/*
    const size_t var_name;
    @var_name: the name of the variable
    @size_t: is an unsigned integral data type, it represents the size of any object
    in bytes and returned by sizeof operator */


#include <stdio.h>
#include <stddef.h>
#include <stdint.h>


int main() {

    const size_t x = 150;
    int a[x];

    for(size_t i = 0; i< x; i++)
    a[i] = i;

    printf("Max Size: %lu\n", SIZE_MAX);
    size_t size = sizeof(a);

    printf("size = %zu\n", size);

    return 0;
}