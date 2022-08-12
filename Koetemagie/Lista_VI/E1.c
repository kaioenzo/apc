#include <stdio.h>

int main () {

  char string[101];
  int contador = 0;

  while (scanf("%s", string) != EOF) {

    for (int i = 0; string[i] != '\0'; i++) {

      if (string[i] == 'o') contador++;

    }

  }

  printf("%d\n", contador);

  return 0;

}
