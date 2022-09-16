//#include <stdio.h>

void swap ( int *a, int *b ) {

    // creating a auxiliar variable to make he changes easier
    int c;

    // c recives the *b
    c = *a;

    // *a recives *b
    *a = *b;

    // *b recives c, that's = *a
    *b = c;

}

/*int main () {

    int num1 = 100;
    int num2 = 150;

    swap(&num1, &num2);

    printf("%d %d\n", num1, num2);

}
*/