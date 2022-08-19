#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int colunas[n][n];
    int result;
    int big_column_som = 0;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            scanf("%d",&colunas[i][k]);
        } 
    }
    for(int i=0;i < n;i++)
    {
        
        
        int csum=0;
        for(int j=0;j<n;j++)
        {
            csum = csum+colunas[j][i];
            
        }
        if (csum>big_column_som)
        {
            big_column_som = csum;
            result = i + 1;
        }
        
    }
    
    if (big_column_som == 0)
    {
        result = 0;
    }
    
    printf("%d\n",result);
    
}