#include <stdio.h>
#include <math.h>


// firt try doing this exercise

/*int encaixa (int a, int b) {

    int lastValue;
    int penValue;
    int antValue;

    lastValue = a % 10;
    penValue = a % 100;
    antValue = a % 1000;

    if ( b % 10 == lastValue && b % 100 == penValue && b % 1000 == antValue) return 1;
    else return 0;

}
*/

int segmento ( int a, int b ) {

    // lest transform these numbers into arrays

    int x = 0;
    int y = 0;
    int arrayA[10];
    int arrayB[10];
    int sizeA = sizeof(a) - 1;
    int sizeB = sizeof(b) - 1; 
    int contador = 0;

    printf("%d\n", sizeA);
    // tranforming int a into a Array
    for ( int i = 0; i < sizeA; i++) {

        arrayA[i] = (a / (int)pow(10,sizeA - i));
        a = a % (int)pow(10,sizeA - i);
        x = i;
        printf("%d\n", arrayA[i]);

    }

    arrayA[x] = arrayA[x-1];
    printf("%d\n", arrayA[x]);

    // transforming b into a array
    for ( int j = 0; j < sizeA; j++) {

        arrayB[j] = (b / (int)pow(10,sizeB - j));
        b = b % (int)pow(10,sizeA - j);
        y = j;
        printf("%d\n", arrayB[j]);

    }

    arrayB[y] = arrayB[y-1];
    printf("%d\n", arrayA[y]);

    // lest compare these two arrays now

    if ( sizeB > sizeA ) {

        for ( int k = 0; k < sizeB; k++) {

            if (arrayB[k] == arrayA[k]) contador++;

        }

    } else if ( sizeA > sizeB ) {

        for ( int k = 0; k < sizeB; k++) {

            if (arrayB[k] == arrayA[k]) contador++;

        }

    }
    
    if ( contador >= 3) return 1;
    else return 0;
    

}


int main () {

 int x = segmento(567890,678);

 printf("%d\n", x);

}