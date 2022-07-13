#include <stdio.h>
int main(){
    double preco_final, impostos,custo;
    int n1,n2;
    scanf("%lf%i%i",&preco_final,&n1,&n2);
    impostos = n1 + n2 + 100;
    custo = (preco_final / impostos) *100 ;
    printf("%lf\n",custo);
}