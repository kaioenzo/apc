#include <stdio.h>

int main () {

    char letras;
    char texto[1000];
    int possui = 0;
    int palavras = 0;
    double percent;

    scanf("%c\n", &letras);

    while ( scanf("%s", texto) != EOF ) {

        for ( int i = 0; texto[i] != '\0'; i++ ) {

            if ( texto[i] == letras) {
                possui++;
                break;
            }
        }
        palavras++;
    }

    percent = ( (double) possui / (double) palavras ) * 100;
    printf("%.1lf\n", percent);

}
