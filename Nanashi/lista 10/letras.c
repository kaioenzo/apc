#include <stdio.h>

int main () {

    char comparador;
    char texto[1000];
    int contComparador = 0;
    int contPalavras = 0;
    double porcent;

    scanf("%c", &comparador);
    scanf(" %[^\n]s", texto);

    for ( int i = 0; texto[i] != '\0'; i++ ) {

        if ( texto[i] == comparador && contComparador <= contPalavras) contComparador++;
        if ( texto[i] == ' ' && texto[i+1] != ' ') contPalavras++;

    }
    contPalavras++;

    porcent = ((double)contComparador / (double)contPalavras) * 100;
    
    printf("letras: %d\n", contComparador);
    printf("palavras: %d\n", contPalavras);
    printf("%.1lf\n", porcent);

}