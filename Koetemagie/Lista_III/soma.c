#include <stdio.h>

int main () {

  int digit = -1, soma_pares = 0, soma_impares = 0;

  while (digit != 0) {

    scanf("%d", &digit);

    // Restrição
    if (digit < 0 || digit > 5 * 2e20) return 1;

    // Se par.
    if (digit % 2 == 0) soma_pares += digit;

    // Se impar.
    else soma_impares += digit;

  }

  printf("%d %d\n", soma_pares, soma_impares);

  return 0;

}
