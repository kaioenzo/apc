#include <stdio.h>

struct tipoLogradouro {
    char tipo[80];
    char nome[80];
    char complemento[80];
}

typedef tipoLogradouro;


void criaLinhaCSV ( tipoLogradouro info, char linha[240]) {

    // tipoLogradouro info;

    int i = -1;

  for (int a = 0; info.tipo[a] != '\0'; ++a) linha[++i] = info.tipo[a];
  linha[++i] = ';';

  for (int a = 0; info.nome[a] != '\0'; ++a) linha[++i] = info.nome[a];
  linha[++i] = ';';

  for (int a = 0; info.complemento[a] != '\0'; ++a) linha[++i] = info.complemento[a];
  linha[++i] = '\0';


}
