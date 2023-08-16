#include<stdio.h>
#include<stdlib.h>

#define TAM 3

void preencheMatriz(int m[][TAM], int nl, int nc, int num)
{
    int i, j;

    for(i=0; i<nl; i++)
        for(j=0; j<nc; j++)
        {
            m[i][j] = rand()%num+1;
        }
}


void imprimeMatriz(int m[][TAM], int nl, int nc)
{
    int i, j;

    for(i=0; i<nl; i++)
    {
        for(j=0; j<nc; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }

}

int ehSimetrica(int m[][TAM], int tam)
{
    int i, j;

     /*verifica se eh simetrica*/
    /*pergunta:: seriam necessárias tantas comparações
    ou bastaria percorrer a diagonal inferior (ou superior)?*/
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++)
            if(m[i][j] != m[j][i])
                return 0;
    }
    return 1;

}

int main()
{
    int matriz[TAM][TAM];

    srand(time(NULL));

    preencheMatriz(matriz, 3, 3, 2); // observe que podemos passar valores de nl e nc diferentes (menores) que NLIN e NCOL
    //tire o comentário para testar uma matriz simetrica
    /*for(i=0; i<TAM; i++)
        for(j=0; j<TAM; j++)
            m[i][j] = m[j][i];*/

    imprimeMatriz(matriz, 3, 3);

    if(ehSimetrica(matriz, 3))
        printf("A matriz eh simetrica!");
    else
        printf("A matriz NAO eh simetrica!");

    return 0;
}

