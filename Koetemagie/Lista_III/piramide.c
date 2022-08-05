#include <stdio.h>

int main () {

  int digit;

  scanf("%d", &digit);

  // Restrição
  if (digit < 1 || digit > 99) return 1;

  // I. Primeira piramide: Linha.
  for (int i = 1; i <= digit; i++) {

    // Coluna.
    for (int j = 1; j <= i; j++) {

      // Para o ultimo
      if (j == i) {

        // Menor que 10.
        if (i < 10) printf("0%d", i);
        // Resto.
        else printf("%d", i);

      }

      // Menor que 10.
      else if (i < 10) printf("0%d ", i);
      // Resto.
      else printf("%d ", i);

    }

    printf("\n");

  }

  printf("\n");

  // II. Segunda piramide: Linha.
  for (int i = 1; i <= digit; i++) {

    // Coluna.
    for (int j = 1; j <= i; j++) {

      // Para o ultimo
      if (j == i) {

        // Menor que 10.
        if (j < 10) printf("0%d", j);
        // Resto.
        else printf("%d", j);

      }

      // Menor que 10.
      else if (j < 10) printf("0%d ", j);
      // Resto.
      else printf("%d ", j);

    }

    printf("\n");

  }

  return 0;

}
