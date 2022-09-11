#include<stdio.h>   
int main (){
    char men[1000];
    int i,qnt;
    scanf("%d\n", &qnt);
    
    for(i=0; i < qnt; i++){
        fgets(men, 1000, stdin);
        for(int j=0; men[j]!= '\0';j++)
        {
            if(men[j]>='A' && men[j]<='M')
            {   men[j] += 13;}
            else if(men[j]>='N' && men[j]<='Z')
            {   men[j] -= 13;}
        }
      printf("%s\n", men);
    }
  return 0;
}
