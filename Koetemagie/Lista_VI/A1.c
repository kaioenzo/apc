#include <stdio.h>

int main () {

  char string[1001];
  int tamanho = 0;

  scanf("%s", string);

  for (; string[tamanho] != '\0'; tamanho++);


  printf("%d\n", tamanho);

}
