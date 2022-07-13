#include <stdio.h>
int main(){
    int n1,n2,n3,n4,maior;
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    if (n1>n2){
      maior=n1;
    }else{
        maior=n2;
    }
    if(n3>=maior){
        maior=n3;
    }
    if(n4>=maior){
        maior = n4;
    }
    printf("%d\n", maior);
}
