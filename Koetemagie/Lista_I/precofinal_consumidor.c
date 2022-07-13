#include <stdio.h>

int main () {

  // Flaot or double?...
  double custo_fabrica;

  int porcentagem_lucro;
  int porcentagem_impostos;

  scanf("%lf", &custo_fabrica);

  // Restrição
  if (custo_fabrica < 0 || custo_fabrica > 10e9) return 1;

  scanf("%d %d", &porcentagem_lucro, &porcentagem_impostos);

  // Restrição
  if (porcentagem_lucro < 0 || porcentagem_lucro > 100) return 1;
  if (porcentagem_impostos < 0 || porcentagem_impostos > 100) return 1;

  double resposta_final = custo_fabrica + custo_fabrica * (porcentagem_lucro + porcentagem_impostos) / 100;

  printf("%.2lf\n", resposta_final);

  return 0;

}
