#include <stdio.h>

struct tipoFiliacao {

  char nome[80];    // Para n = 1.
  char nomeMae[80]; // Para n = 2.
  char nomePai[80]; // Para n = 3.

}

typedef tipoFiliacao;

struct tipoFiliacao separaLinhaCSV ( char * linha ) {

  tipoFiliacao filiacao;

  // Para escolher tal nome.
  int a = -1;

  // `i` para a linha toda.
  // `a` para tal nome.
  for (int i = 0, n = 1; linha[i] != '\0'; ++i) {

    // Para quando:
    //   1. A letra for ','.
    if (linha[i] == ',') {

      // Finalizar tal string.
      switch (n) {

        case 1: filiacao.nome[++a] = '\0'; break;
        case 2: filiacao.nomeMae[++a] = '\0'; break;
        // Não vamos chegar no 3 já que é o último

      }

      // Ir para a próxima string.
      ++n;

      if (n >= 4) break;

      // Resetar o tamanho desses caracteres.
      a = -1;

    // Não continuar se o char atual for ' ' e algum dos lados for ','.
    } else { //if (!(linha[i] == ' ' && (linha[i-1] == ',' || linha[i+1] == ','))) {

      // Guardar na string atual.
      switch (n) {

        case 1: filiacao.nome[++a] = linha[i]; break;
        case 2: filiacao.nomeMae[++a] = linha[i]; break;
        case 3: filiacao.nomePai[++a] = linha[i]; break;

      }

    }

  }

  // Definir a ulima linha.
  filiacao.nomePai[++a] = '\0';

  return filiacao;

}

//int main () {
//
//    tipoFiliacao a = separaLinhaCSV( "Ana , certo  lol  , nada " ) ;
//
//    printf("%s\n%s\n%s\n", a.nome, a.nomeMae, a.nomePai);
//
//    tipoFiliacao b = separaLinhaCSV( "Luiz Coelho,,Tomas Coelho" );
//
//    printf("%s\n%s\n%s\n", b.nome, b.nomeMae, b.nomePai); 
//
//}
