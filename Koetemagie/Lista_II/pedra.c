#include <stdio.h>

int main () {

  char times[2] = { 'A', 'B' };
  int ganhador;
  int jogo[2];

  scanf("%d", &jogo[0]);
  scanf("%d", &jogo[1]);

  // 1. Restrição.
  for (int i = 0; i < 2; i++) {

    if (jogo[i] < 0 || jogo[i] > 4) return 1;

  }

  // 2. Decidir o ganhador.
  switch (jogo[0]) {

    // Pedra.
    case 0:

      switch (jogo[1]) {

        case 0: ganhador = -1; break;
        case 3: ganhador = 0; break; // Lagarto.
        case 2: ganhador = 0; break; // Tesoura.
        case 4: ganhador = 1; break; // Spock.
        case 1: ganhador = 1; break; // Papel.

      }
      break;

    // Papel
    case 1:
      switch (jogo[1]) {

        case 1: ganhador = -1; break;
        case 4: ganhador = 0; break; // Spock.
        case 0: ganhador = 0; break; // Pedra.
        case 3: ganhador = 1; break; // Lagarto.
        case 2: ganhador = 1; break; // Tesoura.

      }
      break;

    // Tesourea
    case 2:
      switch (jogo[1]) {

        case 2: ganhador = -1; break;
        case 3: ganhador = 0; break; // Lagarto.
        case 1: ganhador = 0; break; // Papel.
        case 4: ganhador = 1; break; // Spcok.
        case 0: ganhador = 1; break; // Pedra.

      }
      break;

    // Lagarto.
    case 3:
      switch (jogo[1]) {

        case 3: ganhador = -1; break;
        case 1: ganhador = 0; break; // Papel
        case 4: ganhador = 0; break; // Spock
        case 0: ganhador = 1; break;
        case 2: ganhador = 1; break;

      }
      break;

    // Spock.
    case 4:
      switch (jogo[1]) {

        case 4: ganhador = -1; break;
        case 2: ganhador = 0; break; // Tesoura
        case 0: ganhador = 0; break; // Pedra
        case 1: ganhador = 1; break; // Papel ganha.
        case 3: ganhador = 1; break; // Lagarto ganha.

      }
      break;

  }

  // 3. Print do ganhador.
  if (ganhador == -1) printf("empate");
  else printf("%c", times[ganhador]);

  printf("\n");

  return 0;

}
