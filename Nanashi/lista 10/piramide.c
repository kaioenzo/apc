#include <stdio.h>


int main () {

    // delcaring the variables
    int rows, k = 0;

    scanf("%d", &rows);

    // conditions
    /*
    if ( n < 1 || n > 1000000) return 1;
    */

    // for loop to print the spaces
    for ( int i = 1; i <= rows; i++) {
        for ( int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // using for loop when k is les than or equal to ( 2*i-1)
        for ( k = 1; k <= (2*i-1); k++) {
            printf("* ");
        }
        printf("\n");
    }

}