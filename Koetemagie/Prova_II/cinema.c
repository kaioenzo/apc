#include <stdio.h>

int main () {

  // 1. Pegar o tamanho da matriz.
  int fileiras_e_colunas_tamanho;
  scanf("%d", &fileiras_e_colunas_tamanho);

  // 2. Pegar a quantidade de amigos.
  int amigos;
  scanf("%d", &amigos);

  // 3. Criar a matriz com o tamanho dado anteriormente.
  int cinema_lugares[fileiras_e_colunas_tamanho][fileiras_e_colunas_tamanho];

  // 4. Ler a matriz.
  //    `i` para fileiras.
  for (int i = 0; i < fileiras_e_colunas_tamanho; i++) {

    // I. Aqui contamos a quantidade de lugares vazios, começando com 0.
    int lugares_vazios = 0;

    // `j` para colunas.
    for (int j = 0; j < fileiras_e_colunas_tamanho; j++) {

      // 1. Ler o valor do lugar e colocar na matriz.
      scanf("%d", &cinema_lugares[i][j]);

      // 2. Verificar se esse lugar é vazio.
      //    Se for, adicionamos + 1 (incrementar) para os lugares_vazios.
      if (cinema_lugares[i][j] == 0) lugares_vazios++;

      // 3. Verificar se esse local não for vazio.
      //    Se não for, resetamos a quantidade de lugares vazios em seguida nessa fileira.
      else if (cinema_lugares[i][j] == 1) lugares_vazios = 0;

      // 4. Se já tivermos a quantidade de lugares vazios seguintes o suficiente para os amigos sentarem juntos.
      //    Imprimos para a tela essa fileira `i` e fechamos o programa com `return`.
      if (lugares_vazios >= amigos) {

        printf("%d\n", i + 1);
        return 0;

      }


    }

  }

  // 5. Se chegamos aqui, é porque não há lugares o suficiente.
  printf("N\n");

  return 0;

}
