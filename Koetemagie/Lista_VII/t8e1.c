#include <stdio.h>
int main () {
    int N, mat[15][15], mat2[15][15], v[15], v2[15], p = 0, p2 = 0, k, flag = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) v[i]=0;
    // escan
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
            v[j]+=mat[i][j];
        }
    }
    // tira as fila de 1
    for (int i = 0; i < N; i++) {
        for (k = 0; k < N && mat[i][k]==1; k++);
        if (k==N) {
            for (int j = 0; j < N; j++) mat[i][j]=0; 
            p++;
        }
    }
    // printa
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf(" %d", mat[i][j]);
        }
        printf ("\n");
    }
    printf ("\n");
    // baixa os 1, printa e salva na mat2
    if (p!=0) for (int i = 0; i < N; i++) v[i] = v[i]-p;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        if (i<(N-v[j])) {
            printf (" 0");
            mat2[i][j]=0;
        }
        else {
            printf (" 1");
            mat2[i][j]=1;
        }
        }
        printf ("\n");
    }
    // ve se a mat2 tem fila de 1
    for (int i = 0; i < N; i++) {
        for (k = 0; k < N && mat2[i][k]==1; k++);
        if (k==N) {
            for (int j = 0; j < N; j++) mat2[i][j]=0; 
            p2++;
        }
    }
    //verifica se tem q repetir o processo pra mat2
    if (p2!=0) {
        printf ("\n");
        for (int i = 0; i < N; i++) v2[i]=0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                v2[j]+=mat2[i][j];
            }
        }
        for (int i = 0; i < N; i++) {
            for (k = 0; k < N && mat2[i][k]==1; k++);
            if (k==N) {
                for (int j = 0; j < N; j++) mat2[i][j]=0;
            }
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf(" %d", mat2[i][j]);
            }
            printf ("\n");
        }
        printf ("\n");
        for (int i = 0; i < N; i++) v2[i] = v2[i]-p2;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
            if (i+1<(N-v2[j])) {
                printf (" 0");
            }
            else {
                printf (" 1");
            }
            }
            printf ("\n");
        }
    }
    return 0;
}