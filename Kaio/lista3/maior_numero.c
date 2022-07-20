#include <stdio.h>
int main()
{
    int n_teste,maior;
    scanf("%d", &n_teste);
    int numeros[100000];
    for (int i = 0; i < n_teste; i++)
    {
        scanf("%d",&numeros[i]);
    }
    maior = numeros[0];
    for (int j = 0; j < n_teste; j++)
    {
        if (numeros[j]>=maior)
        {
            maior = numeros[j];
        }


    }
    printf("%d\n",maior);


    return 0;
}