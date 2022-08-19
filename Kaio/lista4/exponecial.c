#include <math.h>
int fatorial(int num){
    int fatorial = 1;
    for(int i = 1; i <= num; i++) fatorial *=i;
    return fatorial;
}
double exp_natural ( int x , int n ){
double resultado = 1;
for(int a = 1; a <= n; a++) resultado+=pow(x,a)/ fatorial(a);
return resultado;
}
