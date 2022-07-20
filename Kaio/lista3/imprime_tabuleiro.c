#include <stdio.h>
int main(){
    int linhas, colunas;
    int i = 0;
    int k = 0;
    int l = 0;
    scanf("%d%d",&linhas,&colunas);
    for ( i = 0 ; i < linhas; i++)
    {
        for (k = 0; k < colunas; k++)
        {        

            if (i>=10 && k>=10)
            {
                printf("[0%d,0%d]",i,k);
            }
            if (i>=10 && k<10)
            {
                printf("[0%d,00%d]",i,k);
            }
            if (i<10 && k>=10)
            {
                printf("[00%d,0%d]",i,k);
            }

            if (k==100 && i<10)
            {
                printf("[00%d,%d]",i,k);
            }
            if (k==100 && i>=10)
            {
                printf("[0%d,%d]",i,k);
            }
            if(i==100 && k<10){
                printf("[00%d,%d]",i,k);
            }
            
            
            

                printf("[00%d,00%d]",i,k);
        }
        printf("\n");
              
    }
    
}