//#include <stdio.h>
#include <math.h>

int encaixa (int a, int b) {

  int b_s = b;

  unsigned int b_c = 0;

  while (b_s != 0) {

    b_s /= 10;
    ++b_c;

  }

  a %= (int) pow(10, b_c);

  if (a == b) return 1;
  else return 0;

}

int segmento (int a, int b) {

  int min, max;

  if (a > b) {
    min = b;
    max = a;
  }
  else {
    min = a;
    max = b;
  }

  while (max != 0) {

    if (encaixa(max, min) == 1) return 1;

    max /= 10;

  }

  return 0;

}

//int main ()
//{
//
//  printf("%d\n", encaixa(567890,890));
//  printf("%d\n", encaixa(1234, 1234));
//  printf("%d\n", encaixa(2457, 245));
//  printf("%d\n", encaixa(457, 2457));
//
//  printf("\n%d\n", segmento(567890,678));
//  printf("%d\n", segmento(1243,2212435));
//  printf("%d\n", segmento(235,236));
//
//
//}
