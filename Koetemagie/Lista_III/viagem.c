#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

  int restaurantes;

  // #. Assumimos que começamos com 0 dias de viagem.
  long long int dia = 0;

  // #. Usamos para verificar a maior nota.
  int maior_nota, nota;

  // #. Salvaremos os códigos do restaurantes aqui.
  long long int menor_codigo, codigo;

  // 1. Pegar o dia de viagem (uma linha inteira).
  //    Entrada termina em EOF.
  while (scanf("%d", &restaurantes) != EOF) {

    // 1. Adicionamos mais um dia na nossa lista.
    dia++;

    // 2. Resetamos a maior nota do restaurante anterior e menor código do restaurante.
    maior_nota = 0, menor_codigo = 0;

    long long int codigos[restaurantes];
    int notas[restaurantes];

    // 4. Depois pegamos o código e o rating do restaurante.
    for (int i = 0, c = 0, n = 0; i < restaurantes * 2; i++) {

      // A. Para par, "atual" é é o código do restaurante.
      if (i % 2 == 0) {
        scanf("%lld", &codigo);

        codigos[c++] = codigo;
      }

      // B. Para impar, "atual" é a nota do restaurante.
      else {
        scanf("%d", &nota);

        // B.1. Se for maior que 5, redefinir para 5.
        if (nota > 5) nota = 5;
        // B.2. Se for menor que 0, redefinir para 0.
        if (nota < 0) nota = 0;

        notas[n++] = nota;
      }

    }

    // 5. Agora calculamos o restaurante com melhor nota e menor código.
    for (int i = 0; i < restaurantes; i++) {

      //printf("Restaurante '%lld' com nota '%d'.\n", codigos[i], notas[i]);

      // C.A. Se for maior que a nota atual, nós escolhemos esse restaurante
      //      No primeiro, assumir que ele é o menor código e menor nota.
      if (i == 0 || maior_nota < notas[i]) {

        // C.A.A. Salvamos a maior nota.
        maior_nota = notas[i];

        // C.A.B. Salvamos o ultimo restaurante restaurante escolhido.
        menor_codigo = codigos[i];

      }

      // C.B. Escolher o menor código se for a nota for a mesma.
      //      Se o código atual for menor que o código escolhido.
      else if (notas[i] == maior_nota && codigos[i] < menor_codigo) {

        // C.B.A.A. Salvar o escolhido como esse restaurante.
        menor_codigo = codigos[i];

      }

    }

    // 5. Printar o resultado.
    printf("Dia %lld\n%lld\n\n", dia, menor_codigo);

  }

  return 0;

}
