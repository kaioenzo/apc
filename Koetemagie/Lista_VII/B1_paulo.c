#include <stdio.h>

int main()
{   
    int linha, posicaocaracter, quantidade;
    int i, j;
    char caracter;

    scanf("%d\n", &quantidade);
    char string[quantidade][1000];

    for (i = 0; i < quantidade; i++)
    {
        fgets(string[i], 1000, stdin);
    }

    scanf("%d %d", &linha, &posicaocaracter);

    caracter = string[linha][posicaocaracter];

    printf("%c\n", caracter);
    
    
    
    return 0;
}