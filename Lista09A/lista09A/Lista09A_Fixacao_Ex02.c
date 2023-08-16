#include<stdlib.h>

#define NLIN 10
#define NCOL 10

void preencheMatriz(int m[][NCOL], int nl, int nc, int num)
{
    int i, j;

    for(i=0; i<nl; i++)
        for(j=0; j<nc; j++)
        {
            m[i][j] = rand()%num+1;
        }
}


void imprimeMatriz(int m[][NCOL], int nl, int nc)
{
    int i, j;

    for(i=0; i<nl; i++)
    {
        for(j=0; j<nc; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }
    printf("\n");
}


void criaMatrizLogica (int A[][NCOL], int B[][NCOL], int C[][NCOL])
{
    int i, j;

    for(i=0; i<NLIN; i++)
    {
        for(j=0; j<NCOL; j++)
            C[i][j] = A[i][j] == B[i][j];
    }
}

int main()
{
    int A[NLIN][NCOL], B[NLIN][NCOL], C[NLIN][NCOL];

    srand(time(NULL));

    preencheMatriz(A, NLIN, NCOL, 10);
    preencheMatriz(B, NLIN, NCOL, 10);

    imprimeMatriz(A, NLIN, NCOL);
    imprimeMatriz(B, NLIN, NCOL);

    criaMatrizLogica (A, B, C);
    imprimeMatriz(C, NLIN, NCOL);

    return 0;
}

