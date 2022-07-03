/* 
The C library function:
    void *memset(void *str, int c, size_t n)
     
    @str: This is a pointer to the block of memory to fill.

    @c: This is the value to be set. The value is passed as an int, 
    but the function fills the block of memory using the unsigned char 
    conversion of this value.

    @n: This is the number of bytes to be set to the value.

    @return value: This function returns a pointer to the memory area str.*/


#include<stdio.h>
#include<string.h>

int main() {

    char str [50];

    strcpy(str, "This is string.h library function\n");
    puts(str);

    memset(str, '$', 7);
    puts(str);
    
    memset(str, '&', 8);
    puts(str);

    return 0;
}