#include <stdio.h>
int main(){
    int casos_de_teste,numero_atual=1,divisor = 0;
    scanf("%d",&casos_de_teste);
    int numeros[casos_de_teste];
    int resultado[casos_de_teste];
    for ( int i = 0; i < casos_de_teste; i++)
    {
        scanf("%d",&numeros[i]);
    }  

    for ( int i = 0; i < casos_de_teste; i++)
    {
        divisor = 0;
        numero_atual = numeros[i];
        while (numero_atual > 0)
        {
            for (int k = 1; k <= numero_atual; k++)
            {
                if (numero_atual % k == 0) {
                    divisor++;
                     }
                
               
            }
            if (divisor==2) {
                resultado[i] = 1;
            }
            else {
                resultado [i] = 0;
                break;
            }
            divisor = 0;
            numero_atual = numero_atual / 10;
            
        }
        
    }
    for ( int i = 0; i < casos_de_teste; i++)
    {
        if (resultado[i]==1) printf("S\n");
        else printf("N\n");
        
    }
    
}