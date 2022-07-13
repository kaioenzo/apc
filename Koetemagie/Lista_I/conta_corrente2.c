#include <stdio.h>

int main () {

  int input;
  int numbers[6];

  // Pegar 6 digitos como char.
  scanf("%d", &input);

  // Restrição.
  if (input < 1 || // Tem que ser maior que 000001.
      input > 999998 ) // Tem que ser menor que 999998.
    return 1;

  // Converter cada numero.
  numbers[0] = input / 1e5;
  numbers[1] = input / 1e4 - (numbers[0] * 1e1);
  numbers[2] = input / 1e3 - (numbers[1] * 1e1 + numbers[0] * 1e2);
  numbers[3] = input / 1e2 - (numbers[2] * 1e1 + numbers[1] * 1e2 + numbers[0] * 1e3);
  numbers[4] = input / 1e1 - (numbers[3] * 1e1 + numbers[2] * 1e2 + numbers[1] * 1e3 + numbers[0] * 1e4);
  numbers[5] = input / 1e0 - (numbers[4] * 1e1 + numbers[3] * 1e2 + numbers[2] * 1e3 + numbers[1] * 1e4 + numbers[0] * 1e5);

  // 1º e 2º passos.
  int verificador = numbers[5] * 2 + numbers[4] * 3 + numbers[3] * 4 + numbers[2] * 5 + numbers[1] * 6 + numbers[0] * 7;

  // 3. Passo.
  int resto = verificador % 11;

  // 4. Passo.
  int resposta = 11 - resto;

  printf("%d\n", resposta);

}
