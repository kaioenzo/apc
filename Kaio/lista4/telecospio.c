#include <stdio.h>
int contarEstrelas(int qtd, int abertura){
    int estrelas[qtd];
    int estrelas_visiveis = 0;
    for (int i = 0; i < qtd; i++)
    {
        scanf("%d",&estrelas[i]);
    }
    for (int i = 0; i < qtd; i++)
    {
        if (estrelas[i]*abertura >= 40000000)
        {
            estrelas_visiveis++;
        }

    }


    return estrelas_visiveis;
}
int main(){
    printf("%d",contarEstrelas(9,2967));
}