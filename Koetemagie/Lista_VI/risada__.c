#include <stdio.h>
#include <string.h>

int main(){

    char risada[60], inver[60], vogal[60];
    int i,z=0, tam, x, res=0, j, verificador=0;
    scanf("%s", risada);
    tam = strlen(risada);

    for(i=0; i< tam;i++){

        if ((risada[i]=='a'||(risada[i]=='e')||(risada[i]=='i')||(risada[i]=='o')||(risada[i]=='u'))){
            res=1;
            vogal[z] = risada[i];
            z = z+1;
        }
        else{
            res=res;
        }
    }
    vogal[z] = '\0';
    tam = strlen(vogal);
    for(int a=0, i=tam -1;i>=0;i--,a++){
        inver[a] = vogal[i];
    }
    inver[tam+1]= '\0';
    for (i = 0; i < z; i++){
        if(vogal[i] == inver [i]){
            verificador++;
        }   
    }
    if (res != 0){
        if(verificador == z){printf("S\n");} else{printf("N\n");}
    }
    else{printf("Valor invalido!\n");}
        
    return 0;
}
