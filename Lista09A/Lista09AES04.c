#include <stdio.h>
#define N 3

void preenche_matriz(int m[][N])
{
    int i,j;

    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            printf("Insira m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            /* m[i][j]=rand()%2; trocar entre as opcoes para sair do manual para o random. */
        }

    }
}

int confirma_cubo (int m[][N])
{
    int i, j, soma1=0, soma2;

    for(i=0; i<N; i++)
    {
        soma1+=m[0][i];
    }

    for(i=1; i<N; i++)
    {
        soma2=0;
        for (j=0; j<N; j++)
        {
            soma2+=m[i][j];
        }
        if (soma2!=soma1)
            return 0;
    }

    for (i=0; i<N; i++)
    {
        soma2=0;
        for(j=0; j<N; j++)
        {
            soma2+=m[j][i];
        }
        if (soma2!=soma1)
            return 0;
    }

    soma2=0;
    for (i=0; i<N; i++)
    {
        soma2+=m[i][i];
    }
    if (soma2!=soma1)
        return 0;

    soma2=0;
    for (i=(N-1), j=0; i>=0, j<N; i--, j++)
    {
        soma2+=m[i][j];
    }
    if (soma2!=soma1)
        return 0;

    return 1;
}

int main()
{
    int m[N][N];

    preenche_matriz(m);

    if(confirma_cubo(m)==1)
    {
        printf("Cubo Magico!");
    }
    else
    {
        printf("Apenas Cubo...");
    }

    return 1;
}
