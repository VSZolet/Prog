#include <stdio.h>
#define N 5

void preenche_matriz(int m[][N])
{
    int i,j;

    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            m[i][j]=rand()%10;
            printf("%2d", m[i][j]);
        }
        printf("\n");
    }
}

void troca_posicao(int m[][N])
{
    int i,j, maior, aux, auxi, auxj;

    for(i=0; i<N; i++)
    {
        maior=0;
        for(j=0; j<N; j++)
        {
            if (m[i][j]>maior)
            {
                maior=m[i][j];
                auxi=i;
                auxj=j;
            }
        }
        aux=m[i][i];
        m[i][i]=maior;
        m[auxi][auxj]=aux;
    }
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            printf("%2d", m[i][j]);
        }
        printf("\n");
    }
}

int main ()
{
    srand(time(NULL));

    int m[N][N];

    printf("Matriz preenchida:\n");
    preenche_matriz(m);

    printf("\nDepois da troca:\n");
    troca_posicao(m);

    return 0;
}

