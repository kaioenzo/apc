#include <stdio.h>

int main () {

  int p, v, value_to_minify;

  int coins_five_hundred = 0,
      coins_one_hundred = 0,
      coins_fifty = 0,
      coins_ten = 0,
      coins_five = 0,
      coins_one = 0;

  scanf("%d", &p);
  scanf("%d", &v);

  // Restrições.
  if (p < 0 || p > 1e6) return 1;
  if (p > v) return 1;

  value_to_minify = v - p;

  while (value_to_minify >= 500) {

    value_to_minify -= 500;
    coins_five_hundred++;

  }

  while (value_to_minify >= 100) {

    value_to_minify -= 100;
    coins_one_hundred++;

  }

  while (value_to_minify >= 50) {

    value_to_minify -= 50;
    coins_fifty++;

  }

  while (value_to_minify >= 10) {

    value_to_minify -= 10;
    coins_ten++;

  }

  while (value_to_minify >= 5) {

    value_to_minify -= 5;
    coins_five++;

  }

  while (value_to_minify >= 1) {

    value_to_minify -= 1;
    coins_one++;

  }

  printf("%d\n%d\n%d\n%d\n%d\n%d\n", coins_five_hundred, coins_one_hundred, coins_fifty, coins_ten, coins_five, coins_one);

  return 0;

}
