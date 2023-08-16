#include <stdio.h>
#define N 5

void gera_inca(int m[][N])
{
    int i, j, n=1, start=0, less=1;

    while (m[(N/2)][(N/2)]==0)
    {
        for (i=start; i<(N-less); i++)
        {
            if (i==start)
            {
                for (j=start; j<=(N-less); j++)
                {
                    m[i][j]=n;
                    n++;
                }
            }
            m[i][N-less]=n;
            n++;
        }

        for (i=(N-less); i>start; i--)
        {
            if(i==(N-less))
            {
                for(j=N-less; j>=start; j--)
                {
                    m[i][j]=n;
                    n++;
                }
            }
            m[i][start]=n;
            n++;
        }
    less++;
    start++;
    }
}

void imprime_matriz(int m[][N])
{
    int i, j;

    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m[N][N]={0}, start=0, less=2;

    gera_inca(m);
    imprime_matriz(m);

    return 0;
}
