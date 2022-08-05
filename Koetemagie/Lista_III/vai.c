#include <stdio.h>

int main () {

  int batidas;

  scanf("%d", &batidas);

  for (int i = 1; i <= batidas; i++) {

    // Pares
    if (i % 2 == 0) printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");

    // Impares
    else printf("THUMS THUMS THUMS\n");

  }

  return 0;

}
