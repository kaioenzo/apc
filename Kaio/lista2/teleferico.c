#include <stdio.h>
int main(){
    int capacidade,alunos,restante,viagens;
    scanf("%d%d",&capacidade,&alunos);
    viagens = 0;
    restante = alunos;
    capacidade = capacidade - 1;

    while (restante>0){
        restante = restante - capacidade;
        viagens++;
    }
    
    
    printf("%d\n",viagens);

}