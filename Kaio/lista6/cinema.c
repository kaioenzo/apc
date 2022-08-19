#include <stdio.h>

int main()
{
    int colunas, linhas;
    scanf("%d %d\n", &colunas, &linhas);

    int posicoes[colunas][linhas];

    char fileira;
    int local, fileira_hex;

    while (scanf("%c%d\n", &fileira, &local) != EOF)
    {

        fileira_hex = ((int)fileira) - 65;
        posicoes[fileira_hex][--local] = 'X';
    }

    for (int i = colunas; i > -1; i--)
    {
        for (int j = 0; j < linhas; j++)
        {
            //se for a primeira linha, coloca o numero de fileiras
            if ( i == colunas &&  j == 0)
                printf("  ");

            if (i == colunas)
                printf("%02d ", j+1);
            else{
                if (j == 0)
                {
                    printf("%c ", (char) (i + 65));
                }

                if (posicoes[i][j] == 'X')
                    printf("XX");
                else
                printf("--");
                if( j != linhas -1)
                printf(" ");

            }
        }

    printf("\n");
    }


    return 0;
}