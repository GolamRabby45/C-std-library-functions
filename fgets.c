/*
    The C library function:
        char *fgets(char *str, int n, FILE *stream)
        @str: This is the pointer to an array of chars where the string read is stored
        @n:This is the maximum number of characters to be read (including the final null-character). 
            Usually, the length of the array passed as str is used.
        @stream: This is the pointer to a FILE object that identifies 
            the stream where characters are read from. */

#include <stdio.h>
#include <string.h>


int main () {
   FILE *fp;
   char str[60];

   /* opening file for reading */
   fp = fopen("file.txt" , "r");
   if(fp == NULL) {
      perror("Error opening file");
      return(-1);
   }
   if(fgets (str, 60, fp)!= NULL) {
      /* writing content to stdout */
      puts(str);
   }
   
   fclose(fp);
   
   return(0);
}