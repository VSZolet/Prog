#include <stdio.h>
#define N 15

int main()
{
    int m[N][N],
        i, j;

    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            m[i][j]=0;

    for (i=0; i<N; i++)
        m[i][0]=1;

    for (i=1; i<N; i++)
    {
        for(j=1; j<=i; j++)
        {
            m[i][j]=m[i-1][j]+m[i-1][j-1];
        }
    }

    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            printf("%5d", m[i][j]);
        }
        printf("\n");
    }

}
