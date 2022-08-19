#include <stdio.h>
double calculaVelocidadeMedia(int tA, int tB, double distancia){
    distancia *= 1000.0;
    return (distancia / (tB - tA))*3.6;

}
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
    double tempo = tB - tA;
    tempo /= 3600.0;
    if ((distancia / tempo) > velocidadeMaxima) return 1;
    else return 0;

}
