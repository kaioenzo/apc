#include <stdio.h>

int main () {

    //declaring the matrix
    int matrix[3][3];
    
    int input;
    int rowSum = 0;
    int columSum = 0;

    int factorRow = 0;
    int factorColumn = 0;

    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            scanf("%d", &input);
            matrix[i][j] = input;

        // summing rows

        rowSum += matrix[i][j];


        }

        printf("Row %d : %d\n", i+1, rowSum);
        rowSum = 0;
    }





    return 0;
}