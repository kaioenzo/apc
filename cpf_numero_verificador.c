#include <stdio.h>
int main(){
    int cpf,n1,n2,n3,n4,n5,n6,n7,n8,n9,digito,resultado,resultado_2,dv_1,dv_2;
    scanf("%d",&cpf);
    n9 = ((cpf /100000000)) *10;
    n8 = ((cpf /10000000) %10 )*9;
    n7 = ((cpf /1000000) %100 %10) *8;
    n6 = ((cpf /100000) %1000 %100 %10) *7;
    n5 = ((cpf /10000) %10000 %1000 %100 %10) *6;
    n4 =( (cpf /1000 ) %100000 %10000 %1000 %100 %10) *5;
    n3 = ((cpf /100) %1000000 %100000 %10000 %1000 %100 %10) *4;
    n2 = ((cpf /10) %10000000 %1000000 %10000 %10000 %1000 %100 %10) *3;
    n1 = ((cpf) % 100000000 %10000000 %1000000 %100000 %10000 %1000 %100 %10) *2;

    resultado = (n1+n2+n3+n4+n5+n6+n7+n8+n9) %11 ;
    dv_1 = 11 - resultado;
    if(dv_1>=10){
        dv_1=0;
    }
    n9 = ((cpf /100000000)) *11;
    n8 = ((cpf /10000000) %10 )*10;
    n7 = ((cpf /1000000) %100 %10) *9;
    n6 = ((cpf /100000) %1000 %100 %10) *8;
    n5 = ((cpf /10000) %10000 %1000 %100 %10) *7;
    n4 =( (cpf /1000 ) %100000 %10000 %1000 %100 %10) *6;
    n3 = ((cpf /100) %1000000 %100000 %10000 %1000 %100 %10) *5;
    n2 = ((cpf /10) %10000000 %1000000 %10000 %10000 %1000 %100 %10) *4;
    n1 = ((cpf) % 100000000 %10000000 %1000000 %100000 %10000 %1000 %100 %10) *3;
    resultado_2 = (n1+n2+n3+n4+n5+n6+n7+n8+n9+dv_1*2) %11;
    dv_2 = 11 - resultado_2;
    if (dv_2>=10)
    {
        dv_2=0;
    }

    printf("%d%d\n", dv_1, dv_2);
}