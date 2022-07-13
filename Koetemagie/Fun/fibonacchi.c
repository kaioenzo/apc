#include <stdio.h>

int main () {

  int terms;

  printf("Please, how many terms do you want of fibonachhi: ");
  scanf("%d", &terms);

  // 1.
  long long term_penultime = 0, term_last = 0, term_current = 0;

  for (int i = 0; i < terms; i++) {

    term_current = term_penultime + term_last;

    printf("%lld ", term_current);

    term_penultime = term_last;
    term_last = term_current;

    if (i == 0) term_penultime = 1;

  }

  printf("\n");

  return 0;

}
