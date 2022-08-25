#include <stdio.h>

int main () {

  int tamanho;

  int verificador_soum = 1;

  scanf("%d\n", &tamanho);

  int matriz[tamanho][tamanho];
  int valor;

  for (int i = 0; i < tamanho; i++) for (int j = 0; j < tamanho; j++) {

    scanf("%d", &valor);

    matriz[i][j] = valor;

  }

  while (verificador_soum) {

    // 1. Identifique as linhas da matriz que contém apenas 1’s e substitua os 1’s por 0’s;
    for (int i = 0; i < tamanho; i++) {

      verificador_soum = 1;

      for (int j = 0; j < tamanho; j++) if (!matriz[i][j]) {
        verificador_soum = 0;
        break;
      }

      // If they are all one, then change to zero.
      if (verificador_soum) for (int j = 0; j < tamanho; j++) matriz[i][j] = 0;

    }

    // 2. Imprima a matriz resultante da operação acima.
    for (int i = 0; i < tamanho; i++) {

      for (int j = 0; j < tamanho; j++) {
        printf("%d", matriz[i][j]);
        if (j != tamanho - 1) printf(" ");
      }

      puts("");

    }

    puts("");

    // 3. Elimine as linhas que contém apenas 0’s da seguinte maneira.
    for (int i = tamanho - 1; i >= 0; i--) {

      // I. Iniciando da linha mais abaixo até a mais acima, garanta que nenhuma coluna tenha alguma 1 acima de algum.
      for (int j = 0; j < tamanho; j++) {

        // A. Mover para o maix baixo possível caso encontrar.
        if (i - 1 >= 0 && matriz[i-1][j]) {

          // I. Até encontrar o primeiro 1 abaixo dele.
          int primeiro_um = i;

          // II. Encontrar a posição do novo 1.
          for (; primeiro_um < tamanho; primeiro_um++)
            if (matriz[primeiro_um][j] == 1) break;

          // III. Definir a posição do novo 1.
          if (primeiro_um != i) {

            matriz[primeiro_um - 1][j] = 1;
            matriz[i-1][j] = 0;

          }

        }

      }

    }

    // 2. Imprima a matriz resultante da operação acima.
    for (int i = 0; i < tamanho; i++) {

      for (int j = 0; j < tamanho; j++) {
        printf("%d", matriz[i][j]);
        if (j != tamanho - 1) printf(" ");
      }

      puts("");

    }

    // 1. Identifique as linhas da matriz que contém apenas 1’s e substitua os 1’s por 0’s;
    //    Repetindo apenas para descobrir se continuamos com o loop.
    for (int i = 0; i < tamanho; i++) {

      verificador_soum = 1;

      for (int j = 0; j < tamanho; j++) if (!matriz[i][j]) {
        verificador_soum = 0;
        break;
      }

      if (verificador_soum) puts("");

    }

  }

}
