#include <stdio.h>
#include <string.h>


int main () {

  char palavra[3];
  int triagems = 0, sims = 0, palavras = 0;

  while (scanf("%s\n", palavra) != EOF) {

    if (strcmp(palavra, "sim") == 0) ++sims;

    ++palavras;

    if (palavras == 10) {

      palavras = 0;
      if (sims >= 2) ++triagems;

      sims = 0;
    }

  }

  printf("%d\n", triagems);

}
