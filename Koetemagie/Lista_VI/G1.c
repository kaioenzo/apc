#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

  char str[43];
  char primeiro, anterior;
  int n, i, j, verificador, soma=0;

  scanf("%d", &n);

  for(i=0; i<n; i++) {

    scanf("%s", str);

    verificador = 1;

    for (j=0; str[j] !='\0'; j++) {

        primeiro = tolower(str[j]);

        if(j > 0 ){

            if (primeiro<=anterior){
                verificador=0;
                break;
            }
        }

        anterior=primeiro;
    }

    if (verificador==1){
            printf("%s: O\n", str);
        }

            else if (verificador==0) {
            printf("%s: N\n", str);
    }

  }

  return 0;
}
