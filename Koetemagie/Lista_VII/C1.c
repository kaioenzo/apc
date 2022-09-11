#include <stdio.h>

//#define MAX 81

int main()
{

    int igual;
    int quantidades[2];

    scanf("%d %d\n", &quantidades[0], &quantidades[1]);

    char S[quantidades[0]][81];
    char P[quantidades[1]][81];

    for (int i = 0; i < quantidades[0]; i++)
        scanf("%s", S[i]);
    for (int i = 0; i < quantidades[1]; i++)
        scanf("%s", P[i]);

    for (int i = 0; i < quantidades[0]; i++)
    {

        for (int j = 0; j < quantidades[1]; j++)
        {

          //////////////////////////////////////////////////////
          ///
          /// Lógica de comparação.

            igual = 1;

            // Verificar se palavra, P[j] é igual a P[i].
            for (int s = 0, p = 0; S[i][s] != '\0' || P[j][p] != '\0'; s++, p++)
            {

                if (S[i][s] != P[j][p])
                {
                    igual = 0;
                    break;
                }
            }

            if (igual)
            {
                printf("1\n");
                return 0;
            }

            ////////////////////////////////////////////////////    
        }
    }

    printf("0\n");

    return 0;
}
