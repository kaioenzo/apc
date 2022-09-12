#include <stdio.h>
#include <string.h>


struct tipoMusicas {
    char nome[80];
    int ano;
}

typedef tipoMusicas;

struct tipoBanda {
    char nome[80];
    int qtd;
    tipoMusicas musicas[100];
}

typedef tipoBanda;

void pesquisarNomeMusica ( char pesquisa[80], tipoBanda bandas[50], int n) {

    tipoBanda banda;

    for ( int i = 0; i < n; ++i ) {

        for (int a = 0; a < bandas[i].qtd; ++i) {

            if (strcmp(bandas[i].musicas[a].nome, pesquisa) == 0) {

                printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[a].ano);
                return;

            }

        }
       
    }

    printf("Musica nao cadastrada\n");


}
