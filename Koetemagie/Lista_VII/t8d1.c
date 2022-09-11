#include <stdio.h>
int main () {
    int F, L, mat[20][25], l;
    char f;
    scanf("%d %d\n", &F, &L);

    for (int i = 0; i < F; i++) for (int j = 0; j < L; j++) mat[i][j]=0;

    for (int i = 0; scanf("%c", &f)!=EOF && f !='z'; i++) {
        scanf("%d\n", &l);
        mat[F-(f-65)-1][l-1]=1;
    }
    printf (" ");

    for (int i = 0; i < L; i++) printf(" %02d", i+1);
    printf("\n");
    for (int i = 0; i < F; i++) {
        printf ("%c", (char) (L-i+65-1));
        for (int j = 0; j < L; j++) {
            printf (" ");
            if (mat[i][j]==1) printf ("XX");
            else printf("--");
        }
        printf("\n");
    }
    return 0;
}
/*
5 5
A2
D4
D5
B3
A4
E3
A5
C2
B4
B5
E5
B1
z

  01 02 03 04 05
E -- -- XX -- XX
D -- -- -- XX XX
C -- XX -- -- --
B XX -- XX XX XX
A -- XX -- XX XX

  01 02 03 04 05
E -- -- XX -- XX
D -- -- -- XX XX
C -- XX -- -- --
B XX -- XX XX XX
A -- XX -- XX XX

*/
