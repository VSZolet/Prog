#include <stdio.h>
#define N 5

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

int busca_simetria(int m[][N])
{
    int i,j;

    for(i=0; i<N; i++)
    {
        for(j=i; j<N; j++)
        {
            if (m[i][j]!=m[j][i])
                return 0;
        }
    }

    return 1;
}

int main ()
{
    srand(time(NULL));

    int m[N][N];

    preenche_matriz(m);

    if(busca_simetria(m)==1)
        printf("E' simetrico!");
    else
        printf("Nao e' simetrico!");

    return 0;
}
