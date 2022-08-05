#include <stdio.h>

// @param qtd Quantidade de estrelas a serem estudadas
// @param abertura Que indica a area de lente do telescopio com a area da pupila dilatada em mm.
// @return A quantidade de estrelas.
int contarEstrelas(int qtd, int abertura) {

  unsigned int contador = 0, estrela_fotons;

  for (int i = 0; i < qtd; i++) {

    scanf("%d", &estrela_fotons);

    estrela_fotons *= abertura;

    if (estrela_fotons >= 40000000) contador++;

  }

  return contador;

}
