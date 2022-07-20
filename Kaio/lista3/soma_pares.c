#include <stdio.h>
int main(){
    int soma = 0;
    int numeros[50000];
    for (int i = 0; i < 5242880; i++)
    {
        scanf("%d",&numeros[i]);

        if (numeros[i] % 2 == 0)
        {
           soma += numeros[i];
        }

        if (numeros[i]==0)
        {
            break;
        }
        
    }
    printf("%d\n",soma);
    
    
}