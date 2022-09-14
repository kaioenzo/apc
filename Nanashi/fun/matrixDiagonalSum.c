#include <stdio.h>

int main () {

    // declaring the matrix ( just accepts integers values)
    int matrix[3][3];
    int input;
    int diagonalSum = 0;


    // loop for collect the matrix elements
    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            scanf("%d", &input);
            matrix[i][j] = input;

    // summing the main diagonal
            if ( i == j ) diagonalSum += input;

        }
    }

    // printing the final sum
    printf("The diagonal sum is: %d\n", diagonalSum);

    return 0;
}