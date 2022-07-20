#include <stdio.h>
int main(){
    int soma_pares = 0;
    int soma_impares = 0;
    int numeros[50000];
    for (int i = 0; i < 50000; i++)
    {
        scanf("%d",&numeros[i]);

        if (numeros[i] % 2 == 0)
        {
           soma_pares += numeros[i];
        }else{
            soma_impares += numeros[i];
            }

        if (numeros[i]==0)
        {
            break;
        }
        
    }
    printf("%d %d\n",soma_pares,soma_impares);
    
    
}