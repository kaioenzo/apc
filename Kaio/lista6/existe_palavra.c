#include <stdio.h>
#include <string.h>
int main(){
    int n, m, j, k, c, result = 0;

    scanf("%d",&n);
    scanf("%d",&m);

    char palavras[n][81];
    char palavra_teste[m][81];
    char string_atual[81];
    char string_teste[81];

    for (int i = 0; i < n; i++)
    {
        scanf("%s",&palavras[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%s",&palavra_teste[i]);
    }

    //Percorre a linha da matriz da string buscada
    for (int i = 0; i < n; i++)
    {
        //Percorre a string da linha i da matriz da string buscada e armazena a string daquela linha
        for ( j = 0; palavras[i][j] != '\0'; j++){

            string_atual[j] = palavras[i][j];
        }
        //coloca o fim na string buscada atual
        string_atual[j] = '\0';

        //Compara a string atual com as string da matriz de strings possiveis
            //Percorre a string da linha i da matriz das strings possiveis e armazena a string daquela linha
            for (k = 0; k < m; k++){
                for ( c = 0; palavra_teste[k][c] != '\0'; c++)
                {
                    string_teste[c] = palavra_teste[k][c];

                }
                string_teste[c] = '\0';

                if(strcmp(string_atual,string_teste) == 0){
                    result = 1;
                    break;
                }
            }
            if (result == 1)
            {
                break;
            }

    }
    printf("%d",result);
    return 0;
}