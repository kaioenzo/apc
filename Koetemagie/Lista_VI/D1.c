#include <stdio.h>
#include <ctype.h>

int main () {

  char name[101];
  int first_size_name, last_size_name;
  char first_name[101], second_name[101];
  char c;
  int spaces = 0, tamanho = 0;

  scanf("%100[^\n]", name);

  for (; name[tamanho] != '\0'; tamanho++);

  for (int i = 0; name[i] != '\0'; i++) {

    if (name[i] == ' ') {
      spaces++;

      if (spaces == 1) {
        first_size_name = i;
        if (name[i+1] != '\0') last_size_name = first_size_name + 2;
      }
      else last_size_name = i + 2;

    }

  }

  // Salvar o primeiro nome.
  for (int i = 0; i < first_size_name; i++) first_name[i] = (char) tolower(name[i]);

  // Segundo nome.
  for (int a = 0, i = last_size_name - 1; i < tamanho; i++, a++) second_name[a] = (char) tolower(name[i]);

  printf("%s.%s@unb.br\n", first_name, second_name);


  // Salvar o último nome.

  return 0;
}
