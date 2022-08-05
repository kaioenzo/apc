#include <stdio.h>

int main () {

  int tamanho, atual;

  scanf("%d", &tamanho);

  int vetor[tamanho];
  int menores[3] = {1000001, 1000001, 1000001};

  for (int i = 0; i < tamanho; i++) {

    scanf("%d", &atual);

    if (atual < menores[0]) {

      menores[2] = menores[1];
      menores[1] = menores[0];
      menores[0] = atual;

    } else if (atual < menores[1]) {

      menores[2] = menores[1];
      menores[1] = atual;

    } else if (atual < menores[2]) {

      menores[2] = atual;

    }

  }

  printf("%d\n%d\n", menores[1], menores[2]);

}
