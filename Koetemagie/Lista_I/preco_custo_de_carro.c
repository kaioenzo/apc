#include <stdio.h>

int main () {

  double preco_final, custo_da_fabrica;
  int porcentagem_lucro, porcentagem_imposto;

  scanf("%lf", &preco_final);
  scanf("%d %d", &porcentagem_lucro, &porcentagem_imposto);

  // Restrição....
  if (preco_final < 0 || preco_final > 10e9) return 1;
  if (porcentagem_lucro < 0 || porcentagem_lucro > 100) return 1;
  if (porcentagem_imposto < 0 || porcentagem_imposto > 100) return 1;

  double lucro = porcentagem_lucro;
  double imposto = porcentagem_imposto;

  custo_da_fabrica = preco_final / (1 + (lucro + imposto)/100 );

  printf("%lf\n", custo_da_fabrica);

  return 0;

}
