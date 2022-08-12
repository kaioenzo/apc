#include <stdio.h>
#include <string.h>
int main(){
    char caracteres[60];
    char anterior;
    int resultado = 0;
    char vogais[60];
    int contador = 0;
    int i;
    scanf("%s",caracteres);
    for( i = 0; caracteres[i] != '\0'; i++){
        if (caracteres[i] == 'a' || caracteres[i] == 'e' || caracteres[i] == 'i' || caracteres[i] == 'o' || caracteres[i] == 'u')
        {
            vogais[contador] = caracteres[i];
            contador++;
        }

    }
    vogais[i] = '\0';

    for (int k = 0; vogais[k] != '\0'; k++)
    {
        //A partir da 2º iteração, é verificado se a vogal atual corresponde a vogal correta para fazer o padrão das vogais
        if (k>0)
        {
            //Verifica os padrões para cada vogal, caso não siga o padrão, o resultado é 1(falso) e o loop termina
            switch (vogais[k])
            {
            case 'a':
                if (anterior =='i' || anterior =='o') {
                    resultado = 1;
                    break;
                }else continue;

            case 'e':
                if (anterior == 'o' || anterior == 'u' ) {
                    resultado = 1;
                    break;
                }else continue;
            //aeiou
            case 'i':
                if (anterior == 'a' || anterior == 'u') {
                    resultado = 1;
                    break;
                }else continue;

           case 'o':
                if (anterior == 'e' || anterior =='a') {
                    resultado = 1;
                    break;
                }else continue;

            case 'u':
                if (anterior == 'e' || anterior == 'i') {
                    resultado = 1;
                    break;
                }else continue;

            }
anterior = vogais[k];
        }
        //Armazena a vogal iterada como a vogal anterior, que será analisada na próxima iteração
anterior = vogais[k];
    }

    //Caso não haja nenhuma vogal, a mensagem é exibida
    if (contador == 0)
    {
        printf("Valor invalido!");
    }else if( resultado == 0){
        printf("S");
    }else{
        printf("N");
    }

}