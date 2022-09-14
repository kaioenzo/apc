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

void pesquisarNomeMusica ( char pesquisa[80], struct tipoBanda bandas[50], int n) {

    int verificador = 0;

    for ( int i = 0; i < n; i++ ) {
  
        for (int a = 0; a < bandas[i].qtd; i++ ) {

            if (strcmp(pesquisa, bandas[i].musicas[a].nome) == 0) {

                printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[a].ano);
                
                verificador = 1;

            }

        }
       
    }

    if ( verificador == 0 ) printf("Musica nao cadastrada\n");


}
