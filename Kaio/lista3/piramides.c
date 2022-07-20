#include <stdio.h>
int main()
{
    int i,count=0;
    int n;
                    scanf("%d",&n);
                    for(i=1;i<=n;i++){

                        for(count=1;count<=i;count++){
                           if (i>=10)
                           {
                            printf("%d",i);
                           }
                           else{
                            printf("0%d",i);
                           }
                            
                            printf(" ");
                       }

                       printf("\n");
                    }

printf("\n");
                    //segunda piramide
                    for(i=1;i<=n;i++){
                        for(count=1;count<=i;count++){
                           if (count>=10)
                           {
                            printf("%d",count);
                           }
                           else{
                            printf("0%d",count);
                           }
                            
                            printf(" ");
                       }

                       printf("\n");
                    }

}