#include <stdio.h>
#include <string.h>

struct tipoMusica {

  char nome[80];
  int ano;

}

typedef tipoMusica;

struct tipoBanda {

  char nome[80];
  int qtd;
  tipoMusica musicas[100];

}

typedef tipoBanda;

void pesquisarNomeMusica (char pesquisa[80], struct tipoBanda bandas[50], int n) {

  for (int i = 0; i < n; ++i) {

    for (int m = 0; m < bandas->qtd; ++m)

      if (strcmp(pesquisa, bandas[i].musicas[m].nome) == 0) {

        printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[m].ano);

        return;

      }

  }

  printf("Musica nao cadastrada\n");

}

//int main () {
//
//  tipoBanda bandas_a[3] = {
//
//    // Black Sabbath
//    {
//
//      "Black Sabbath", 5,
//      {
//
//        { "Iron Man", 1970 },
//        { "Changes", 1972 },
//        { "Into the Void", 1971 },
//        { "I", 1992 },
//        { "End of the Beginning", 2013 }
//
//      }
//
//    },
//
//    // Yes
//    {
//
//      "Yes", 3,
//      {
//
//        { "Roundabout", 1971 },
//        { "Starship Trooper", 1971 },
//        { "Hand On", 1983 }
//
//      }
//
//    },
//
//    // The Bangles
//    {
//
//      "The Bangles", 4,
//      {
//
//        { "Eternal Flames", 1988 },
//        { "Hero Takes a Fall", 1984 },
//        { "Everything I wanted", 1990 },
//        { "Walk Like An Egyptian", 1986 }
//
//      }
//
//    }
//
//  };
//
//  pesquisarNomeMusica("Shine On You Crazy Diamondd", bandas_a, 3);
//
//  tipoBanda bandas_b[2] = {
//
//    {
//
//      "Tchakabum", 3,
//      {
//
//        { "Tesouro de Pirata", 2003 },
//        { "Explosao", 2003 },
//        { "Aviao", 2003 },
//
//      }
//
//    },
//
//    {
//
//      "E o Tchan", 1,
//      { { "Rebola", 1998 } }
//
//    }
//
//  };
//
//  pesquisarNomeMusica("Tesouro de Pirata", bandas_b, 2);
//
//}
