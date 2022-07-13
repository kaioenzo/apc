#include <stdio.h>

// Não sei se é permitido usar alguma biblioteca além do stdio, como atoi do stlib,
// então escrevi algo simples que aceita caracters de numeros.
int convert_char_to_number (char letra) {

  int numero = 0;

  switch (letra) {
    default:
    case '0': numero = 0; break;
    case '1': numero = 1; break;
    case '2': numero = 2; break;
    case '3': numero = 3; break;
    case '4': numero = 4; break;
    case '5': numero = 5; break;
    case '6': numero = 6; break;
    case '7': numero = 7; break;
    case '8': numero = 8; break;
    case '9': numero = 9; break;
  }

  return numero;

}

int main () {

  char part[6];
  int numbers[6];

  // Pegar 6 digitos como char.
  scanf("%c%c%c%c%c%c", &part[0], &part[1], &part[2], &part[3], &part[4], &part[5]);

  // Converter cada numero.
  numbers[0] = convert_char_to_number(part[0]);
  numbers[1] = convert_char_to_number(part[1]);
  numbers[2] = convert_char_to_number(part[2]);
  numbers[3] = convert_char_to_number(part[3]);
  numbers[4] = convert_char_to_number(part[4]);
  numbers[5] = convert_char_to_number(part[5]);

  // Multiplicando por um multiplo de 10 para formar todo o número como int.
  int whole_number = 
    numbers[0] * 1e5 + // Last digit.
    numbers[1] * 1e4 +
    numbers[2] * 1e3 +
    numbers[3] * 1e2 +
    numbers[4] * 1e1 +
    numbers[5] * 1e0; // First digit.

  // Restrição.
  if (whole_number < 1 || // Tem que ser maior que 000001.
      whole_number > 999998 ) // Tem que ser menor que 999998.
    return 1;

  // 1º e 2º passos.
  int verificador = numbers[5] * 2 + numbers[4] * 3 + numbers[3] * 4 + numbers[2] * 5 + numbers[1] * 6 + numbers[0] * 7;

  // 3. Passo.
  int resto = verificador % 11;

  // 4. Passo.
  int resposta = 11 - resto;

  printf("%d\n", resposta);

}
