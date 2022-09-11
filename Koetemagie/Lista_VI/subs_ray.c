#include <stdio.h>
#include <string.h>

int main(){

    int i, tam1, nova_index = 0;
    char str[10000];
    char nova_string[10000];
    char palavra1[40];
    char palavra2[40];

    //char str2[40]; NOTE: <-- Não precisamos mais.

    // NOTE: Fazemos com fgets aqui!
    fgets(str, 10000, stdin);

    scanf("%s", palavra1);
    scanf("%s", palavra2);

    tam1 = strlen(palavra1);

    for(i=0; i < strlen(str);)
    {
        int j = i, a = 0;

        // NOTE: Criamos uma nova sring só contendo a próxima palavra.
        char palavra_verificar[40];

        //encontra a palavra
        // NOTE: Aqui dá pra verificar se é só espaço.
        for(; str[j] != ' '; j++, a++) {

          // NOTE: Criamos uma nova sring só contendo essa palavra.
          palavra_verificar[a] = str[j];

        }

        //// NOTE: Fechamos essa nova string.
        palavra_verificar[a] = '\0';

        //str[j]='\0';//finaliza o loop // NOTE: Não podemos destruir a string!

        // NOTE: Se a palavra atual é igual a palavra-chave, nós adicionamos a nossa nova palavra.
        if (strcmp(palavra_verificar, palavra1) == 0) {

           strcat(nova_string, palavra2);
           nova_index += strlen(palavra2);
           i += tam1;

        } else {

           strcat(nova_string, palavra_verificar);
           strcat(nova_string, " ");
           nova_index += strlen(palavra_verificar) + 1;
           i = j + 1;

        }
    }

    // NOTE: Fechar a nova string.
    nova_string[nova_index-1] = '\0';

    //// NOTE: Printamos a string original já modificada.
    printf("%s", nova_string);

    return 0;
}
