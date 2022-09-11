#include <stdio.h>

#define MAX_INPUT 10000
#define MAX_KEY 40

/**
 * A função para substituir.
 **/
void substituir (char antiga[], char chave[], char palavra[]) {

    // Criar uma nova string!
    int nova_index = 0;
    char nova[MAX_INPUT];

    // Achar o tamanho das strings.
    int tamanho_antiga, tamanho_chave, tamanho_palavra;
    for (; antiga[tamanho_antiga]   != '\0'; tamanho_antiga++);
    for (; chave[tamanho_chave]     != '\0'; tamanho_chave++);
    for (; palavra[tamanho_palavra] != '\0'; tamanho_palavra++);

    // 1. Loop de cada character.
    //    i = index do character de toda a string original
    for (int i = 0; antiga[i] != '\0'; i++) {

        // Se o primeiro char for igual ao primeiro char da chave.
        if (antiga[i] == chave[0]) {

            // Assumir que achamos a palavra igual a chave.
            int achado = 1;

            // Testar o resto pra frente da palavra para ver se é de fato igual.
            for (int j = 0; chave[j] != '\0'; j++) {

                // Se não for igual esse char, falamos que não achamos e fechamos o loop.
                if (chave[j] != antiga[i+j]) {
                    achado = 0;
                    break;
                }

            }

            // Se de fato achamos, nós substituimos a string.
            if (achado) {

                for (int a = 0; a < tamanho_palavra; a++) {
                    nova[nova_index] = palavra[a];
                    nova_index++;
                }

                i += tamanho_chave - 1;

            }

            // Se não achamos.
            else nova[nova_index++] = antiga[i];

        // Só continuar com o resto.
        } else {

            nova[nova_index++] = antiga[i];

        }

    }

    // #. Remover o "newline" original.
    if (nova[--nova_index] == '\n') nova[nova_index] = '\0';

    printf("%s\n", nova);

}

int main()
{

    char frase[MAX_INPUT], chave[MAX_KEY], palavra[MAX_KEY];

    fgets(frase, MAX_INPUT, stdin);

    scanf("%s %s", chave, palavra);

    substituir(frase, chave, palavra);

    //substituir("O rato roeu a roupa do rei de Roma", "rato", "esquilo");
    //substituir("A vaca malhada foi molhada por outra vaca molhada e malhada", "malhada", "tapada");
    //substituir("Mas vejam, mais um exercicio de APC!", "vejam", "pasmem");

    return 0;
}
