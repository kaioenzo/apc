#include <stdio.h>

int main ()
{

  int t;

  scanf("%d", &t);

  for (int i = 1; i <= t; ++i) {

    printf("%*s", t-i, "");

    for (int j = 1; j < i*2; j++) printf("%.*s", i, "*");

    puts("");

  }


}
