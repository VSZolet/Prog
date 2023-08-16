#include<stdlib.h>

#define NLIN 5
#define NCOL 3

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

}

int main()
{
    int matriz[NLIN][NCOL];

    srand(time(NULL));

    preencheMatriz(matriz, 4, 3, 10); // observe que podemos passar valores de nl e nc diferentes (menores) que NLIN e NCOL
    imprimeMatriz(matriz, 4, 3);

    return 0;
}

