#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
  //Variáveis
    char str[101];
    char first_name[100];
    char last_name[100];
    int i;
    int contador = 0;

  //Armazena a string contendo o nome completo
    scanf("%[^\n]s",str);

    //Pegando o primeiro e o último nome
    //Loop que armazena o primeiro nome
    for(i=0; str[i] != ' '; i++){
        first_name[i] = str[i];
    }
    first_name[i] = '\0';

    //Loop que armazena onde começa o último número
    for(i=0; i < strlen(str); i++){
        if (str[i]==' ')
        {
          contador = i + 1;
        }
    }

    //Varíavel para armazenar o tamanho do último nome
    int diferenca = strlen(str) - contador;

    //Armazena o último nome na variável
    for ( i = 0; i < diferenca; i++)
    {
      last_name[i] = str[contador];
      contador++;
    }

  //Primeiro e último nome minúsculos
  for (i = 0; last_name[i] != '\0'; i++){
    last_name[i] = tolower(last_name[i]);
  }
    last_name[i] = '\0';
  for ( i = 0; first_name[i] != '\0'; i++)
  {
    first_name[i] = tolower(first_name[i]);
  }
  first_name[i] = '\0';

  //exibe o email no padrão: primeiro_nome.ultimo_nome@unb.br
  printf("%s.%s@unb.br",first_name,last_name);
}
