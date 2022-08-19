#include <stdio.h>
int main(){
    //Armazena espaço para a string
    char string[101];
    int contador = 0;
    //Escaneia o texto em um arquivo
    while( scanf("%s",string) != EOF ){

    //O texto é percorrido
    for (int i = 0; string[i] != '\0'; i++)
    {
        //Caso o caracter seja encontrado no array, seu valor é incrementado em +1
        if (string[i]=='o') contador++;
    }
    }
//Exibe na tela o número de caracteres encontrados no texto
    printf("%d",contador);

    return 0;
}