#include <stdio.h>

int main () {

  int hour;

  scanf("%d", &hour);

  // Restrições.
  if (hour < 0 || hour > (2e32 - 1) ) return 1;

  unsigned long int hour_long = hour;

  unsigned long int minutes = hour_long * 60;
  unsigned long int seconds = hour_long * 60 * 60;

  printf("%lu\n%lu\n", minutes, seconds);

  return 0;

}
