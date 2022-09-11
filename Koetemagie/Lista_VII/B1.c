#include <stdio.h>
#include <string.h>

int main () {

    int linhas;
    char some;

    int pos[2];

    scanf("%d\n", &linhas);
    char strings[linhas][1001];

    for (int i = 0; i < linhas; i++)
        fgets(strings[i], 1001, stdin);

    scanf("%d %d\n", &pos[0], &pos[1]);

    pos[0] = pos[0] - 1;
    pos[1] = pos[1] - 1;

    char proxima_pos;
    int max_anterior = -1;

    while (scanf("%c\n", &proxima_pos) != EOF)
    {

        if (proxima_pos == 'j' && pos[0] + 1 < linhas)
            pos[0]++;
        else if (proxima_pos == 'k' && pos[0] - 1 >= 0)
            pos[0]--;

        // 1. Tamanho da linha.
        int tamanho = strlen( strings[pos[0]] );

        // 1: Calcular na mão.
        //int tamanho = 0;
        //for (; strings[pos[0]][tamanho] != '\n'; tamanho++);

        if (pos[1] < max_anterior)
        {
            pos[1] = max_anterior;
            max_anterior = -1;
        }

        if (pos[1] >= tamanho)
        {
            max_anterior = pos[1];
            pos[1] = tamanho - 1;
        }

        printf("%d %d %c\n", pos[0] + 1, pos[1] + 1, strings[pos[0]][pos[1]]);
    }

    return 0;
}
