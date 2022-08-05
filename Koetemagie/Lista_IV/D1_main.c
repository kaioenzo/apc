#include <stdio.h>

extern double calculaVelocidadeMedia(int tA, int tB, double distancia);
extern int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima);

int main ()
{

  // Retorno: 120.0
  printf("%lf\n", calculaVelocidadeMedia(61200, 63000, 60.0) );
  // Retorno: 192.634561
  printf("%lf\n", calculaVelocidadeMedia(54169, 57346, 170.0) );

  // Retorno: 0.
  printf("%d\n", levouMulta(61200,63000,60.0,120.0));

  // Retorno: 1.
  printf("%d\n", levouMulta(54169,57346,170.0,120.0));

  return 0;

}

