#include <stdio.h>

int main () {

  int linhas, colunas;

  scanf("%d %d", &linhas, &colunas);

  // Restrição
  if (linhas < 1 || linhas > 100) return 1;
  if (colunas < 1 || colunas > 100) return 1;

  // I. Primeira piramide: Linha.
  for (int i = 0; i < linhas; i++) {

    for (int j = 0; j < colunas; j++) {

      printf("[%03d,%03d]", i, j);

    }

    printf("\n");

  }

  return 0;

}
