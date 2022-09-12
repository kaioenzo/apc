#include <stdio.h>

//
struct tipoData {
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

//


//
tipoPessoa separaInfo (char nome[80], int dt_nascimento) {

    tipoPessoa pessoa;
    
    int i = 0;
    for (; nome[i] != '\0'; i++ ) pessoa.nome[i] = nome[i];
    pessoa.nome[i] = '\0';
    
    pessoa.dtNascimento.ano = dt_nascimento / 10000;
    pessoa.dtNascimento.mes = ( dt_nascimento % 10000 ) / 100;
    pessoa.dtNascimento.dia = dt_nascimento % 100;


    return pessoa;

}

