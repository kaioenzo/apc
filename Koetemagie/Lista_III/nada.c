#include <stdio.h>
#include <math.h>

int main () {

  int vezes, prime;

  unsigned long atual;

  scanf("%d", &vezes);

  // Restrição.
  //if (vezes < 1 || vezes > 100) return 1;

  char limit[vezes];

  for (int i = 0; i < vezes; i++) {

    // 1. Só continuar se conseguirmos pegar o número.
    if (scanf("%lu", &atual) != 1) return 1;

    // Restrição.
    //if (atual < 1 || atual > 1e7) return 1;

    // Verificar se numero é realmente primo arranjado.
    while (atual != 0) {

      // Se atual for igual a 1, ou não for 2 (primo) e par ao mesmo tempo; significa que não é primo.
      if ( (atual == 1) || (atual != 2 && atual % 2 == 0) ) {
        limit[i] = 'N';
        atual = 0;
      }

      else {

        // Assumir que é primo.
        prime = 1;

        // Verificar se é primo.
        for (int a = 2; a <= sqrt(atual); a++) {

          // Um divisor maior que 2 e menor que a raiz quadrada do número signfiica que não é primo.
          if (atual % a == 0) {
            prime = 0;
            break;
          }

        }

        // Continuar sabendo que o numero atual é primo.
        if (prime == 1) {

          // Remover um digito para verificar novamente.
          atual /= 10;
          limit[i] = 'S';

        }

        // Parar de rodar o while já que não é um numero primo.
        else {

          atual = 0;
          limit[i] = 'N';

        }

      }

    }

  }

  // Printar o resultado.
  for (int i = 0; i < vezes; i++) printf("%c\n", limit[i]);

  return 0;

}
