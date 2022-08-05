#include <stdio.h>
#include <math.h>

int main () {

  unsigned long long golpes, t, linha_kronica = 0;

  scanf("%llu %llu", &t, &golpes);

  //if (t < 5 || t > 2e33) return 1;
  //if (golpes < 1 || golpes > 100) return 1;

  for (int n = 1; n <= golpes; n++) {

    // Linha que iremos: 5 do 25, 10 do 100.
    linha_kronica = sqrt(t);

    // Vamos agora verificar se é par.
    // Para linha_kronica = 10, por exemplo.
    //if (t % 2 ==  0) {

    //  // Já que encontramos o quadrado, não fazemos nada.
    //  linha_kronica = linha_kronica;

    //}

    // Ímpar, para t = 5, por exemplo.
    if (t % 2 != 0) {

      // Multiplicamos por dois para ser o mesmo e diminuimos por um.
      linha_kronica = linha_kronica * 2;

    }

    // Diminuimos um da formula.
    linha_kronica = linha_kronica - 1;

    // Achamos o quadrado.
    linha_kronica *= linha_kronica;

    // Agora vamos para a mesma linha.
    t = linha_kronica;

    printf("%llu\n", linha_kronica);

  }

  return 0;

}
