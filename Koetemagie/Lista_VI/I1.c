#include <stdio.h>

void substituir (char antiga[]) {

    for (int i = 0; antiga[i] != '\0'; i++) {

        int letra = (int) antiga[i];

        // Verificar se é alfabético.
        if (letra >= 65 && letra <= 90) {

          if      (letra + 13 > 90) antiga[i] = (char) (letra - 13);
          else if (letra - 13 < 65) antiga[i] = (char) (letra + 13);

        }

    }

    printf("%s", antiga);

}

#define MAX 1001

int main()
{

    int quant;

    char frase[MAX];

    scanf("%d\n", &quant);

    // Pegar cada string.
    for (int a = 0; a < quant; a++) {

      fgets(frase, MAX, stdin);

      substituir(frase);

    }

    return 0;
}
