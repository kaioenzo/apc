#include <stdio.h>

int main () {

  int input[4] = {0, 0, 0, 0};
  int maior;

  for (int i = 0; i < 4; i++) {

    scanf("%d", &input[i]);

    if (i == 0) maior = input[i];

    if (maior < input[i]) maior = input[i];

  }

  printf("%d\n", maior);

  return 0;

}
