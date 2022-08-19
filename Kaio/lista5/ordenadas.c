#include <stdio.h>
#include <ctype.h>
int main(){
    int n;
    char palavra[43];
    char minuscula[43];
    int atual,anterior,resultado = 0;

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s",palavra);
        for ( int k = 0; palavra[k] != '\0'; k++)
        {
            minuscula[k] = toupper(palavra[k]);
            atual = (int) minuscula[k];
            if (atual <= anterior && k > 0)
            {
                resultado = 1;
                break;
            }
            anterior = atual;
        }

    if (resultado == 0)
    {
        printf("%s: O\n",palavra);
    }else{
        printf("%s: N\n",palavra);
    }
    resultado = 0;
    }

}