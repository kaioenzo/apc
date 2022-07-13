#include <stdio.h>

int main () {

  int terms = 10000;

  int a;
  int b;
  //int c;

  for (int i = 1; i <= terms; i++) {

    a = i;
    b = a + 1;
    //c = b + 1;

    if (a + b == a * b) {

      printf("%d + %d = %d * %d\n", a, b, a, b);
      break;

    }

  }

  return 0;

}
