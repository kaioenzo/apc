#include <stdio.h>

extern double exp_natural (int x, int n);

int main () {

  // 1. Valor esperado: 7.380952.
  //printf("%lf\n", exp_natural(2, 1) );

  //// 2. Valor esperado: 16.375000.
  printf("%lf\n", exp_natural(15, 15) );

  // 3. Valor esperado: 3269017.37247.
  //                    38336898.721070
  //                    243184053.854536
  //printf("%lf\n", exp_natural(15, 90) );

  // 4. Valor esperado: 0.0.
  //printf("%lf\n", exp_natural(0, 0) );

  return 0;

}
