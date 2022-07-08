#include <stdio.h>
#include<math.h>
int main(){
    float area_cortada;
    int parte_baixa, parte_alta;
    int eduardo_venceu = 1;
    int daiane_venceu = 2;
    int nota_perdida = 0;
    int altura_retangulo = 70;
    int largura_retangulo = 160;
    int area_retangulo = altura_retangulo * largura_retangulo;
    scanf("%d%d",&parte_baixa,&parte_alta);
    //verifica se é um retangulo
    if (parte_baixa==parte_alta)
    {
        area_cortada = parte_baixa*altura_retangulo;
    }else
    {
        area_cortada = ((parte_alta + parte_baixa) *altura_retangulo)/2;
    }


    if(area_cortada>area_retangulo/2){
        printf("%d\n",eduardo_venceu);
    }else if(area_cortada<area_retangulo/2)
    {
        printf("%d\n",daiane_venceu);
    }else if(area_cortada == area_retangulo/2){
        printf("%d\n",nota_perdida);
    }
}