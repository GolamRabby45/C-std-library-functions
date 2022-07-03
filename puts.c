/*
    The C library function:
        int puts(const char *str)
        @str: This is the C string to be written.

        @return value: If successful, non-negative (positive) value is returned. 
        On error, the function returns EOF (End of File) */



#include<stdio.h>
#include<string.h>

int main() {

    char str1 [20];
    char str2 [20];

    strcpy(str1, "GolamRabby");
    strcpy(str2, "TaukirRabby");

    puts(str1);
    puts(str2);

    return 0;
}

