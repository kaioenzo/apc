#include <stdio.h>

struct tipoFiliacao {

  char nome[80];
  char nomeMae[80];
  char nomePai[80];

}

typedef tipoFiliacao;

tipoFiliacao separaLinhaCSV ( char * linha ) {

  tipoFiliacao filiacao;

  int a = 0;

  // Ir em cada caracter da string.
  for (int i = 0, n = 1; linha[i] != '\0'; ++i) {

    // Parar quando encontrar ,
    if (linha[i] == ',') {

      ++a;

      // Finalizar a string.
      switch (n) {
        case 1: filiacao.nome[a]    = '\0'; break;
        case 2: filiacao.nomeMae[a] = '\0'; break;
        default: break;
      }

      // Ir pro próximo caracter.
      //++i;

      // Ir pra próxima string.
      ++n;
      a = 0;

    } else {

      // Skip trailing spaces.
      if ( linha[i] == ' ' && (linha[i+1] == ',' || linha[i-1] == ',') ) {

        if (--a < 0) a = 0;

      // Adicionar esse caracter.
      } else {

        switch (n) {

            case 1: filiacao.nome[a]    = linha[i]; break;
            case 2: filiacao.nomeMae[a] = linha[i]; break;
            case 3: filiacao.nomePai[a] = linha[i]; break;
            default: break;

        }

        ++a;

      }

    }

  }

  filiacao.nomePai[a] = '\0';

  return filiacao;

}

int main () {

    tipoFiliacao a = separaLinhaCSV( "Pedro da Silva Pereira , Adriana da Silva , Guilherme Pereira" ) ;

    printf("%s\n%s\n%s\n", a.nome, a.nomeMae, a.nomePai);

    tipoFiliacao b = separaLinhaCSV( "Luiz Coelho,,Tomas Coelho" );

    printf("%s\n%s\n%s\n", b.nome, b.nomeMae, b.nomePai); 

}
