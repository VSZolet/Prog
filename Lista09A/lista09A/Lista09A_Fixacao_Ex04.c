#include<stdlib.h>

#define NLIN 5
#define NCOL 5

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

void contaLinhasColunasNulas(int m[][NCOL], int *linhasNulas, int *colunasNulas)
{
    int i, j, somaLinha, somaColuna;

    *linhasNulas = 0;
    *colunasNulas = 0;

    for(i=0; i<NLIN; i++)
    {
        somaLinha = 0;
        for(j=0; j<NCOL; j++)
            somaLinha += m[i][j];

        if(somaLinha==0)
            (*linhasNulas)++;

    }

    //se a matriz fosse quadrada, poderíamos "aproveitar" o for acima fazendo a soma de m[j][i]
    for(i=0; i<NLIN; i++)
    {
        somaColuna = 0;
        for(j=0; j<NCOL; j++)
            somaColuna += m[j][i];

        if(somaColuna==0)
            (*colunasNulas)++;
    }
}

int main()
{
    int matriz[NLIN][NCOL]={{1, 1, 1, 0, 0},{1, 1, 1, 0, 0},{1, 1, 1, 0, 0},{1, 1, 1, 0, 0},{0, 0, 0, 0, 0}},
        linhas, colunas;

    imprimeMatriz(matriz, NLIN, NCOL);
    contaLinhasColunasNulas(matriz, &linhas, &colunas);

    printf("\nLinhas nulas: %d \nColunas nulas: %d \n", linhas, colunas);

    return 0;
}

