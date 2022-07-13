#include <stdio.h>

int main () {

  int capacidade, alunos;
  int viagem = 0;
  int vm = 0;

  scanf("%d", &capacidade);
  scanf("%d", &alunos);

  // Restrição.
  if (capacidade < 2 || capacidade > 100) return 1;
  if (alunos < 1 || alunos > 1000) return 1;

  while (alunos > 0) {

    // Tira um aluno e inserte o monitor.
    viagem = capacidade - 1;

    alunos -= viagem;

    vm++;

  }

  printf("%d\n", vm);

  return 0;

}

