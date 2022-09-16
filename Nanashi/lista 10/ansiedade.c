#include <stdio.h>

int main () {

    char input[10];
    int linhas = 0;
    int contador = 0;
    int contadorPositivo = 0;

    while ( scanf("%s", input) != EOF ) {

        if ( input[0] == 's') contadorPositivo++, linhas++;
        else linhas++;

        if ( linhas == 10 ) {
            if ( contadorPositivo >= 2) contador++;
            contadorPositivo = 0;
            linhas= 0;
    }
    
}

    printf("%d\n", contador);

}
    

