#include <stdio.h>

int validaPeso (double pesoKg) {

  // 1. Retorna 1 se for válido.
  if (pesoKg > 0) return 1;

  // 2. validaPeso retorna 0 se o peso for inválido.
  else return 0;

}

void fazGrama (double pesoKg) {

  // 0. Verificar se o peso é valido.
  if (!validaPeso(pesoKg) ) return;

  // 1. Transformar em gramas.
  pesoKg *= 1000;

  // 2. Exibe o pesoKg em gramas, com 4 casas decimais de precisão.
  printf("%.4lf\n", pesoKg);

}

void fazTonelada (double pesoKg) {

  // 0. Verificar se o peso é valido.
  if (!validaPeso(pesoKg) ) return;

  // 1. Transformar em tonelada.
  pesoKg /= 1000;

  // 2. Exibe o pesoKg em toneladas, com 4 casas decimais de precisão.
  printf("%.4lf\n", pesoKg);

}
