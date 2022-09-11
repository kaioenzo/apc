#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char palavra[43];
    int i,qnt;
    scanf("%d", &qnt);//le a qnt
  
    for(i=0; i <qnt; i++){ //loop para ler até a qnt
        scanf("%s",palavra);
        int verificador =1;
        char anterior;
        for(int j=0; palavra[j] != '\0'; j++)
        {
            char letra = tolower(palavra[j]);

            if(j > 0 && letra <=anterior) {
              verificador = 0;
              //printf("%s: O\n", palavra);
            }//if
            else{
              verificador = verificador;
            }//else
            anterior=letra;
         }//for
         if(verificador){
           printf("%s: O\n", palavra);
         }
         else{
           printf("%s: N\n", palavra);
         }
    }//for
    return 0;
}
