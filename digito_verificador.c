#include <stdio.h>
int main(){
    int input,n1,n2,n3,n4,n5,n6,digito,resultado;
    scanf("%i",&input);
    n1 = (input/100000) *7;
    n2 = ((input / 10000) % 10) * 6;
    n3 = ((input / 1000) % 10) * 5;
    n4 = ((input / 100) % 10) * 4;
    n5 = ((input / 10) % 10) * 3;
    n6 = ((input / 1) % 10) * 2;
    resultado = (n1+n2+n3+n4+n5+n6) % 11;
    digito = 11 - resultado;
    printf("%i\n",digito);
}
