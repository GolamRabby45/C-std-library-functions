/*
    The C library function:
    size_t strlen(const char *str)
    @str: This is the string whose length is to be found */


#include <stdio.h>
#include <string.h>

int main() {

    char str [50];
    int length;

    strcpy(str, "This is Golam Rabby");
    length = strlen(str);

    printf("Length of %s is %d", str, length);
    return 0;
}