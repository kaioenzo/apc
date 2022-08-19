 #include <stdio.h>
 #include <string.h>
int main(){
    char string[1000];
    char invertida[1000];
    int i;
    int l=0;
    scanf("%s",string);
    for(i = 0; string[i]!= '\0';i++);
    int string_size = i;
    for(int k = string_size - 1; k >= 0; k--,l++){
        invertida[l] = string[k];
    }
    printf("%s",invertida);
    return 0;
}

