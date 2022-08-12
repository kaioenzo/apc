#include <stdio.h>

int main () {

  int strings, maior = -1;

  scanf("%d", &strings);

  for (int i = 0; i < strings; i++) {

    char string[1001];
    int tamanho = 0;

    scanf("%s", string);

    for (; string[tamanho] != '\0'; tamanho++);

    if (tamanho > maior) maior = tamanho;

  }

  printf("%d\n", maior);

  return 0;
}
