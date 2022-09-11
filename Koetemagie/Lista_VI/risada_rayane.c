#include <stdio.h>
#include <string.h>

int main(){
    char risada[60], inver[60], vogal[60];
    int i,z=0, tam, x, res=0,j;
    scanf("%s", risada);
    tam = strlen(risada);
    for(i=0; i< tam;i++){
        if ((risada[i]=='a'||(risada[i]=='e')||(risada[i]=='i')||(risada[i]=='o')||(risada[i]=='u'))){
            res=1;

            // NOTE: Aqui vamos criando ela só com vogais.
            vogal[z] = risada[i];
            z = z+1;

        }//if
        else{
            res=res;
        }//else 
    }//for

    // NOTE: Aqui de fato finalizamos de criar a string.
    vogal[z] = '\0';

    // WARN: Se não tivermos nenhuma vogal, ou seja o index for 0, então é inválido.
    if (z == 0) {

      printf("Valor invalido!\n");
      return 0;

    }


    tam = strlen(vogal);


    for( int a = 0, i = tam - 1; i >= 0; i--, a++) {

        // NOTE: Aqui vamos criando a string invertida a partir da string de vogais.
        inver[a] = vogal[i];
     }

    inver[tam+1] = '\0';

    //printf("%s\n", vogal);
    //printf("%s\n", inver);

    for (int b = 0; b < tam; b++) {

      if (vogal[b] != inver[b]) {
        printf("N\n");
        return 0;
      }

    }

    printf("S\n");

    //separa as vogais 
    //for (i = 0; i < z; i++){
    //    if(vogal[i] == inver [i]){
    //        printf("%c", inver[i]);
    //    }
    //}
    //
    //printf("\n");
    //
    //    //se a string tem vogal inverter
    //    if(res){
    //       for(i=strlen(risada)-1;i>=0;i--){
    //        inver[j] = risada[i];
    //        j++;
    //       }
    //        inver[j]='\0';
    //        printf("SouN %s", inver);
    //    }else{
    //        printf("Valor invalido!\n");
    //    }
    return 0;
}
