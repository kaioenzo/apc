#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char string_atual[1000];
    int tamanho_string_atual = 0;
    int tamanho_string_maior = 0;
    for(int i = 0; i < n; i++){
      scanf("%s",string_atual);
      tamanho_string_atual = strlen(string_atual);
      if (i == 0) tamanho_string_maior = tamanho_string_atual;
      if (i > 0 && tamanho_string_atual > tamanho_string_maior) {
      tamanho_string_maior = tamanho_string_atual;
      }
    }
    printf("%d",tamanho_string_maior);
}