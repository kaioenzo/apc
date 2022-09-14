#include <stdio.h>

int main () {

    // declaring the matrix
    int matrix[3][3];

    int input;
    int mainDiagonal = 0;
    int secondDiagonal = 0;


    // loop for getting matrix values
    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            scanf("%d", &input);
            matrix[i][j] = input;

        // calculing the size of both diagonals
        if ( i == j ) mainDiagonal += input;
        if ( (i == 0 && j == 2) || (i == 1 && j == 1) || (i == 2 && j == 0) ) secondDiagonal += input;

        }
    }

    // conditions to output values
    if ( mainDiagonal > secondDiagonal ) printf("Main diagonal is bigger: %d\n", mainDiagonal);
    if ( secondDiagonal > mainDiagonal ) printf("Second diagonal is bigger: %d\n", secondDiagonal);
    else printf("Have the same value: %d\n", mainDiagonal);


    return 0;
}