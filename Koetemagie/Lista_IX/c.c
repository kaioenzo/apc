#include <stdio.h>

#define MAX 1000

int main ()
{

  char letra;
  char palavra[MAX];
  int possui = 0, palavras = 0;

  scanf("%c\n", &letra);

  // Note: possible to change to fgets to accept a single line.
  while (scanf("%s", palavra) != EOF) {

    for (int i = 0; palavra[i] != '\0'; ++i) {

      if (palavra[i] == letra) {
        ++possui;
        break;
      }

    }

    ++palavras;

  }

  double porcentagem = (double) possui / (double) palavras * 100.0;

  printf("%.1lf\n", porcentagem);


}
