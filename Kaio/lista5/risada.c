#include <stdio.h>
#include <string.h>
int main(){
    char palavra[61];
    int i, contador = 0, resultado = 0 ;
    scanf("%s",palavra);
    char vogais[61];
    for (i =0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            vogais[contador] = palavra[i];
            contador++;
        }

    }
    vogais[contador++] = '\0';
    char vogais_invertidas[61];
    int k = 0;

    for ( i = strlen(vogais) - 1; i > -1; i--,k++)
    {
        vogais_invertidas[k] = vogais[i];
    }

    for ( i = 0; i < strlen(vogais); i++)
    {
        //printf("%c%c ",vogais_invertidas[i],vogais[i]);
            if (vogais_invertidas[i] != vogais[i])
            {
                resultado = 1;
                break;
            }
    }

    if (strlen(vogais) > 0 )
    {
        if (resultado == 0)
        {
            printf("S");
        }else{
            printf("N");
        }

    }else{
        printf("Valor invalido!");
    }


}