/*
    The C library function:
    char *strcpy(char *dest, const char *src)
    @dest: This is the pointer to the destination array, 
          where the content is to be copied. 
    @src: This is the string to be copied
    @return value: This returns a pointer to the destination string dest. */


#include<stdio.h>
#include<string.h>

int main() {

    char src [50];
    char dest [200];

    memset(dest, '\0', sizeof(dest));
    strcpy(src, "This is Golam Rabby");
    strcpy(dest, src);

    printf("Final copied string : %s\n", dest);


    return 0;
}
