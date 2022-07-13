#include <stdio.h>

int main () {

  unsigned long long int input;
  int digitos[11], verificador[2];

  scanf("%llud", &input);

  // 1. Restrição.
  if (input > 99999999999) return 1;

  digitos[0] = input / 1e10;
  digitos[1] = input / 1e9 - digitos[0] * 1e1;
  digitos[2] = input / 1e8 - digitos[1] * 1e1 - digitos[0] * 1e2;
  digitos[3] = input / 1e7 - digitos[2] * 1e1 - digitos[1] * 1e2 - digitos[0] * 1e3;
  digitos[4] = input / 1e6 - digitos[3] * 1e1 - digitos[2] * 1e2 - digitos[1] * 1e3 - digitos[0] * 1e4;
  digitos[5] = input / 1e5 - digitos[4] * 1e1 - digitos[3] * 1e2 - digitos[2] * 1e3 - digitos[1] * 1e4 - digitos[0] * 1e5;
  digitos[6] = input / 1e4 - digitos[5] * 1e1 - digitos[4] * 1e2 - digitos[3] * 1e3 - digitos[2] * 1e4 - digitos[1] * 1e5 - digitos[0] * 1e6;
  digitos[7] = input / 1e3 - digitos[6] * 1e1 - digitos[5] * 1e2 - digitos[4] * 1e3 - digitos[3] * 1e4 - digitos[2] * 1e5 - digitos[1] * 1e6 - digitos[0] * 1e7;
  digitos[8] = input / 1e2 - digitos[7] * 1e1 - digitos[6] * 1e2 - digitos[5] * 1e3 - digitos[4] * 1e4 - digitos[3] * 1e5 - digitos[2] * 1e6 - digitos[1] * 1e7 - digitos[0] * 1e8;
  digitos[9] = input / 1e1 - digitos[8] * 1e1 - digitos[7] * 1e2 - digitos[6] * 1e3 - digitos[5] * 1e4 - digitos[4] * 1e5 - digitos[3] * 1e6 - digitos[2] * 1e7 - digitos[1] * 1e8 - digitos[0] * 1e9;
  digitos[10] = input / 1e0 - digitos[9] * 1e1 - digitos[8] * 1e2 - digitos[7] * 1e3 - digitos[6] * 1e4 - digitos[5] * 1e5 - digitos[4] * 1e6 - digitos[3] * 1e7 - digitos[2] * 1e8 - digitos[1] * 1e9 - digitos[0] * 1e10;

  verificador[0] = 
    digitos[0] * 10 +
    digitos[1] * 9 +
    digitos[2] * 8 +
    digitos[3] * 7 +
    digitos[4] * 6 +
    digitos[5] * 5 +
    digitos[6] * 4 +
    digitos[7] * 3 +
    digitos[8] * 2;

  verificador[0] = verificador[0] % 11;

  if (verificador[0] == 0 || verificador[0] == 1) verificador[0] = 0;
  else verificador[0] = 11 - verificador[0];

  verificador[1] = 
    digitos[0] * 11 +
    digitos[1] * 10 +
    digitos[2] * 9 +
    digitos[3] * 8 +
    digitos[4] * 7 +
    digitos[5] * 6 +
    digitos[6] * 5 +
    digitos[7] * 4 +
    digitos[8] * 3 +
    verificador[0] * 2;

  verificador[1] = verificador[1] % 11;

  if (verificador[1] == 0 || verificador[1] == 1) verificador[1] = 0;
  else verificador[1] = 11 - verificador[1];

  if (verificador[0] == digitos[9] && verificador[1] == digitos[10]) printf("valido\n");
  else printf("invalido\n");

  return 0;

}
