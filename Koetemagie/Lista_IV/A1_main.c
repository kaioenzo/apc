#include <stdio.h>

extern int faz_conta_direito(int parcelas, char op);

int main () {

  printf("%d\n", faz_conta_direito(4, '-'));
  printf("%d\n", faz_conta_direito(4, '+'));

  return 0;

}
