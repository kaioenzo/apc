#include <stdio.h>
int main(){
int qntS, qntP;
int igual;
scanf("%d %d", &qntS, &qntP);
  char sequencia1[qntS][1000], sequencia2[qntP][1000];
  for(int i =0; i < qntS; i++){
    scanf("%s", sequencia1[i]);
  }
  for(int i =0; i < qntP; i++){
    scanf("%s", sequencia2[i]);
  }
  for(int i =0; i < qntS; i++){
    for(int j =0; j < qntP; j++){
            igual = 1;

            // Verificar se palavra, P[j] é igual a P[i].
            for (int s = 0, p = 0; sequencia1[i][s] != '\0' || sequencia2[j][p] != '\0'; s++, p++)
            {

                if (sequencia1[i][s] != sequencia2[j][p])
                {
                    igual = 0;
                    break;
                }
            }

            if (igual)
            {
                printf("1\n");
                return 0;
            }

            ////////////////////////////////////////////////////    

  }
  }
printf("0\n");
//printf("%s", sequencia1);
    return 0;
} 
