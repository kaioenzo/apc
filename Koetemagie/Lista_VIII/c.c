#include <stdio.h>

struct Data {

  int dia;
  int mes;
  int ano;

}

typedef tipoData;

struct tipoPessoa {

  char nome[80];
  tipoData dtNascimento;

}

typedef tipoPessoa;

tipoPessoa separaInfo (char nome[80], int dt_nascimento) {

  tipoPessoa data;

  int a = 0;
  for (; nome[a] != '\0'; ++a) data.nome[a] = nome[a];
  data.nome[a] = '\0';

  data.dtNascimento.ano = dt_nascimento / 10000;
  data.dtNascimento.mes = dt_nascimento % 10000 / 100;
  data.dtNascimento.dia = dt_nascimento % 100;

  return data;

}

//int main () {
//
//
//  tipoPessoa a = separaInfo("Abigail Moreira da Silva", 19970412);
//
//  printf("%s | %02d %02d %04d\n", a.nome, a.dtNascimento.dia, a.dtNascimento.mes, a.dtNascimento.ano);
//
//  tipoPessoa b = separaInfo("Fernando", 20001201);
//
//  printf("%s | %02d %02d %04d\n", b.nome, b.dtNascimento.dia, b.dtNascimento.mes, b.dtNascimento.ano);
//
//}
