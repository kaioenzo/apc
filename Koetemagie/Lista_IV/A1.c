#include <stdio.h>

int faz_conta_direito( int parcelas, char op ) {

  int conta, atual;

  for (int i = 0; i < parcelas; i++) {

    scanf("%d", &atual);

    // 1. Para o primeiro index, assumir o valor atual.
    if (i == 0) conta = atual;

    // 2. Para o resto, calcular.
    else {

      switch (op) {
        case '+': conta += atual; break;
        case '-': conta -= atual; break;
      }

    }

  }

  return conta;

}
