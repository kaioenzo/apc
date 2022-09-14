#include <stdio.h>

int main () {

    // declaring our variables
    // our matrixes just recives integers values
    int table1[3][3];
    int table2[3][3];
    int input;
    int a = 0;

    // loop to put input matrices values (table1)
    for ( int a = 0; a < 3; a++) {
        for ( int b = 0; b < 3; b++ ) {
            scanf("%d", &input);
            table1[a][b] = input;
        }
    }

    puts("\n");

    // loop to put input matrices values (table1)
    for ( int c = 0; c < 3; c++ ) {
        for ( int d = 0; d < 3; d++ ) {
            scanf("%d", &input);
            table2[c][d] = input;
        }
    }

    // Loop to compare both matrices
    for ( int e = 0; e < 3; e++) {
        for ( int f = 0; f < 3; f++) {
            if ( table1[e][f] == table2[e][f] ) a++;
        }
    }

    if ( a == 9 ) printf("Both matrices are equal\n");
    else printf("Both matrices are different\n");

    return 0;
}