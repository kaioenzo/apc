#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[1001];
    int n;

    scanf("%d", &n);

    for(int count=0; count<n; count ++){
        scanf("%[^\n]s", palavra);
    }
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] >= 'A' && palavra[i] < 'N') palavra[i] += 13;
        else if (palavra[i] >= 'N' && palavra[i] <= 'Z') palavra[i] -= 13;
    }

    printf("%s\n", palavra);

return 0;}
