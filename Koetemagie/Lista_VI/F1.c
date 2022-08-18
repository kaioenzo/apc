#include <stdio.h>

#define MAX 60

int main () {

  char string[MAX + 1];
  int vogais_contador = 0;

  scanf("%s", string);

  // 1. Verificar se tem uma vogal.
    for (int i = 0; string[i] != '\0'; i++) {

      switch (string[i]) {

        case 'a': case 'e': case 'i': case 'o': case 'u': 
          vogais_contador++;
        break;

      }

    }

    if (vogais_contador == 0) {
      printf("Valor invalido!\n");
      return 0;
    }

  // 2. Criar uma string só com vogais.
  char vogais[61];
  int tamanho_vogais = 0;

  for (int i = 0; i < string[i] != '\0'; i++) {

    switch (string[i]) {

      case 'a': case 'e': case 'i': case 'o': case 'u':
        vogais[tamanho_vogais++] = string[i];
      break;

    }

  }

  // 3. Verificar se é engraçada ou não.
  int engracado = 1;
  //printf("%s\n", vogais);

  // Se for par, pegar metade.
  if ( tamanho_vogais % 2 == 0) {

    // Verificar se primeira metade é igual a segunda metade.
    for (int p = 0, s = tamanho_vogais - 1; p < tamanho_vogais / 2; p++, s--) {

      // Comparar a primeira metade com a segunda metade (segunda de tras pra frente)
      if (vogais[p] != vogais[s]) {
        engracado = 0;
        break;
      }

  }

  // Se for impar.
  } else {

    // Verificar se primeira metade é igual a segunda metade.
    for (int p = 0, s = tamanho_vogais - 1; p < (tamanho_vogais - 1) / 2; p++, s--) {

      // Comparar a primeira metade com a segunda metade (segunda de tras pra frente)
      if (vogais[p] != vogais[s]) {
        engracado = 0;
        break;
      }

    }

  }



  if (engracado) printf("S\n");
  else printf("N\n");


  //
  //    a, e, i, o, u
  //
  //    huaauhahhuahau
  //    uaau a uaau
  //    uaaua
  //    uaaua
  //    Sim.
  //
  //    hahaha
  //    aaa
  //    Sim.
  //
  //    huehuehue
  //    ueueue
  //    ueu
  //    eue
  //    Não.
  //
  //    riajkjdhhihhjak
  //    iaia
  //    ia
  //    ai
  //    Não
  //
  //    xxx
  //    Invalido


  return 0;

}
