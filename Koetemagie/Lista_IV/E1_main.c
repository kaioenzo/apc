#include <stdio.h>

extern int contarEstrelas(int qtd, int abertura);

int main () {

  // Retorno: 2
  printf("%d\n", contarEstrelas(3, 1000) );

  // Retorno: 2
  printf("%d\n", contarEstrelas(3, 5869) );

  // Retorno: 6
  printf("%d\n", contarEstrelas(9, 2967) );


  return 0;

}
