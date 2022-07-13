#include <stdio.h>

int main () {

  double x_first;

  // For scanf.
  double average;
  double x_second;
  int peso[2];

  scanf("%lf", &average);
  scanf("%lf", &x_second);
  scanf("%d %d", &peso[0], &peso[1]);

  // Restrições.
  if (average < 0 || average > (1e9)) return 1;
  if (x_second < 0 || x_second > (1e9)) return 1;

  if (peso[0] < 0 || peso[0] > 100) return 1;
  if (peso[1] < 0 || peso[1] > 100) return 1;

  // The average.
  x_first = ( average * (peso[0] + peso[1]) - x_second * peso[1] ) / peso[0];

  printf("%lf\n", x_first);

  return 0;

}
