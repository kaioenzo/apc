#include <stdio.h>

int main(){
    float p1,p2,p3,trab,list1,list2,list3,list4,list5,somatorio_listas,media_trabalho_prova, media_final;
    printf("Escreva a nota das provas 1 a 3\n");
    scanf("%f%f%f",&p1, &p2,&p3);
    printf("Escreva a nota do trabalho\n");
    scanf("%f",&trab);
    printf("Escreva a nota das listas de exercicios de 1 a 5\n");
    scanf("%f%f%f%f%f",&list1, &list2,&list3,&list4,&list5);
    media_trabalho_prova = (p1 + p2 * 2 + p3 * 3 + trab * 2)/8;
    somatorio_listas = (list1 + list2 + list3 + list4 + list5)/10;
    media_final = media_trabalho_prova + somatorio_listas;
    printf("%.2f",media_final);

    return 0;
}