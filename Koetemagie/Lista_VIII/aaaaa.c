#include <stdio.h>

int main () {

    int tamanho, coluna_desmatamento = 0, mais_desmatada = -1;

    scanf("%d", &tamanho);

    int mais_desmatada_index = tamanho + 1;

    int matriz[tamanho][tamanho];
    int tem_desmatamento = 0;

    for (int i = 0; i < tamanho; i++) {

        coluna_desmatamento = 0;

        for (int j = 0; j < tamanho; j++) {

            scanf("%d", &matriz[i][j]);

        }

    }

    for (int i = 0; i < tamanho; i++) {

        int j = 0;

        coluna_desmatamento = 0;

        for (; j < tamanho; j++)  {
            if (matriz[j][i]) {
                coluna_desmatamento++;
                tem_desmatamento = 1;
            }
            
        }

        if (coluna_desmatamento > mais_desmatada) {
            mais_desmatada_index = i;
            mais_desmatada = coluna_desmatamento;

        }



    }

    if (!tem_desmatamento) printf("0\n");

    else printf("%d\n", mais_desmatada_index + 1);

}