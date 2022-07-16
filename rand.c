/* 
    The C library function:
        int rand(void)
        it returns a pseudo-random number 
        in the range of 0 to RAND_MAX
        @RAND_MAX is to be atleast 32767 */

/* The C library function:
    void srand(unsigned int seed)
    @seed: This is an integer value to be used as seed by 
            the pseudo-random number generator algorithm. */



#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main () {
    int i, n;
    time_t t;

    n = 5;

    /* Initializes random number generator */
    srand((unsigned) time(&t));

    /* Print 5 random numbers from 0 to 49 */
    for( i = 0 ; i < n ; i++ ) {
        printf("%d\n", rand() % 50);
    } 


   return 0;
}