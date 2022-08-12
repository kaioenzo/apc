#include <stdio.h>


#define MAX_PALAVRA 1001

int main () {

  // 1. Definir a string e a invertida.
  char palavra[MAX_PALAVRA];
  int tamanho_palavra = 0;

  // 2. Pegar a string com no máximo 1001 palavras.
  scanf("%s", palavra);

  // 3. Achar o tamanho da string.
  for (; palavra[tamanho_palavra] != '\0'; tamanho_palavra++);

  // 4. Criar a string invetida.
  char invertida[tamanho_palavra];

  // 5. Salvar a string ao contrário.
  for (int i = tamanho_palavra - 1, n = 0; i >= 0; i--, n++) invertida[n] = palavra[i];

  // 6. Definir fim da string.
  invertida[tamanho_palavra] = '\0';

  // 7. Printf a string ao contrário.
  printf("%s\n", invertida);

  return 0;

}
