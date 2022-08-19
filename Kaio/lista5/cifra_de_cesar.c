#include <stdio.h>
int main(){

    char mensagem[1001];
    int n,k, char_number;
    scanf("%d",&n);
    //
        for (int i = 0; i <= n;i++)
        {
            fgets(mensagem, 10001, stdin);

            for ( k = 0; mensagem[k] != '\0'; k++)
            {

                char_number = (int) mensagem[k];
                if( char_number >= 65 && char_number <= 90) {

                    if (char_number - 13 < 65) mensagem[k] =  (char) (char_number + 13);
                    else mensagem[k] =  (char) (char_number - 13);
                }
            }
        printf("%s",mensagem);
        }
}