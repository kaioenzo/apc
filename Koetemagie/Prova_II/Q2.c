#include <stdio.h>

int main () {

  // 1. Pegar a quantidade de strings.
  int quantidade;
  scanf("%d", &quantidade);

  // 2. Criar uma string com limite 100.
  char frase[100];

  // 3. Fazer um loop para pegar cada string.
  for (int i = 0; i < quantidade; i++) {

    // I. Ler cada string e colocar na varíavel de `frase`.
    scanf("%s", frase);

    // II. Começamos com 0.
    int soma_algarismos = 0;

    // III. Ler cada caracter da string para procurar por algarismos.
    //    1. `j` para index do caracter.
    //    2. Paramos quando a string terminar em '\0'.
    for (int j = 0; frase[j] != '\0'; j++) {

      // 3. Podemos verificar com um monte de `if` e `élse if` se o caracter é um algarismo:
      //    `frase[j]` é a letra que verificamos.
      //    Pode ser utilizado `switch` também.
           if (frase[j] == '1') soma_algarismos += 1;
      else if (frase[j] == '2') soma_algarismos += 2;
      else if (frase[j] == '3') soma_algarismos += 3;
      else if (frase[j] == '4') soma_algarismos += 4;
      else if (frase[j] == '5') soma_algarismos += 5;
      else if (frase[j] == '6') soma_algarismos += 6;
      else if (frase[j] == '7') soma_algarismos += 7;
      else if (frase[j] == '8') soma_algarismos += 8;
      else if (frase[j] == '9') soma_algarismos += 9;

    }

    // IV. Imprimos a soma dessa string do calculoa acima.
    printf("%d\n", soma_algarismos);

  }

  return 0;

}
