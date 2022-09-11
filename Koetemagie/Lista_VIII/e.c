#include <stdio.h>

struct tipoLogradouro {

  char tipo[80];
  char nome[80];
  char complemento[80];

}

typedef tipoLogradouro;

void criaLinhaCSV (struct tipoLogradouro info, char linha[240]) {

  int i = -1;

  for (int a = 0; info.tipo[a] != '\0'; ++a) linha[++i] = info.tipo[a];
  linha[++i] = ';';

  for (int a = 0; info.nome[a] != '\0'; ++a) linha[++i] = info.nome[a];
  linha[++i] = ';';

  for (int a = 0; info.complemento[a] != '\0'; ++a) linha[++i] = info.complemento[a];
  linha[++i] = '\0';

}

//int main () {
//
//  tipoLogradouro a = { "Rua", "Afonso Camargo", "Loja B" };
//  tipoLogradouro b = { "Avenida", "da Paz" };
//  char linha[240];
//
//  criaLinhaCSV(a, linha);
//  printf("%s\n", linha);
//
//  criaLinhaCSV(b, linha);
//  printf("%s\n", linha);
//
//}
