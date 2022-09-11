#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int quantidade, linha, posicaocaracter, resultado, i, j;
    char string[1000], linhadesejda[1000];
    char caracter;
    char comandos;

    scanf("%d\n", &quantidade);
    char matriz[quantidade][1000];

    // scanf("%d %d", &linha, &posicaocaracter); NOTE: <-- movemos para baixo.

    for (int i = 0; i < quantidade; i++)
    {
        fgets(matriz[i], 1000, stdin);
        //linha = matriz[linha]; // NOTE: Aqui você não pode passar uma string para um inteiro.
    }

    // NOTE: Aqui pegamos as posições -->
    scanf("%d %d", &linha, &posicaocaracter);

    // NOTE: Você não pode printar um caracter sem inicializar ele.
    // NOTE:                       \/
    //printf(" %d %c\n", linha, caracter);

    return 0;

}

    /*
    for (int j = 0; string[j] != '\0'; j++)
    {
        printf("%s", string[j]);
    }


    fgets(string, 1000, stdin);
    scanf("%d", &posicaocaracter);

    for (int i = 0; string[i] != '\0'; i++)
    {
        caracter = string[posicaocaracter];
    }

    printf("%c\n", caracter);
    */
