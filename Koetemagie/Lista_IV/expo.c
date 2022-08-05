// #include <math.h>
#include <stdio.h>

double exponencial ( double n, double expo) {

    int j;
    double resp = n;

    for ( j = 1; j < expo; j++) {

        resp *= n;

    }

    return resp;

}


int factorial(int n) {

    int c;
    int result = 1;

    for ( c = 1; c <= n; c++ ) {
        result = result * c;

    }

    return result;
}

double exp_natural ( int x, int n) {

    int i;
    double euler = 1 + x;

    for ( i = 2; i <= n; i++) {

        euler += ( exponencial( x, i  ) / factorial( i ) ); 

    }

    return euler; 

}


int main () {

    printf("%lf\n", exp_natural(15,50));

    return 0;

}

