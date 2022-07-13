#include <stdio.h>

int main () {

  char ganhadores[3], perdedores[3];

  int time_ganhador;

  int escolha[3], primeiro[3], segundo[3];

  scanf("%d %d %d", &escolha[0], &primeiro[0], &segundo[0]);
  scanf("%d %d %d", &escolha[1], &primeiro[1], &segundo[1]);
  scanf("%d %d %d", &escolha[2], &primeiro[2], &segundo[2]);

  // 1. Partida.
  if ((primeiro[0] + segundo[0]) % 2 == 0) {
    ganhadores[0] = 'A';
    perdedores[0] = 'B';
  }
  else {
    ganhadores[0] = 'B';
    perdedores[0] = 'A';
  }

  // 1.1. Se era ímpar, reverter.
  if (escolha[0] == 1) ganhadores[0] = perdedores[0];

  // 2. Partida.
  if ((primeiro[1] + segundo[1]) % 2 == 0) {
    ganhadores[1] = 'C';
    perdedores[1] = 'D';
  }
  else {
    ganhadores[1] = 'D';
    perdedores[1] = 'C';
  }

  // 1.1. Se era ímpar, reverter.
  if (escolha[1] == 1) ganhadores[1] = perdedores[1];

  // 3. Partida.
  if ((primeiro[2] + segundo[2]) % 2 == 0) {
    ganhadores[2] = ganhadores[0];
    perdedores[2] = ganhadores[1];
  }
  else {
    ganhadores[2] = ganhadores[1];
    perdedores[2] = ganhadores[0];
  }

  // 1.1. Se era ímpar, reverter.
  if (escolha[2] == 1) ganhadores[2] = perdedores[2];

  printf("%c\n", ganhadores[2]);

  return 0;

}
