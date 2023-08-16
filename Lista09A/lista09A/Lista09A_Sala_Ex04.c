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

int ehQuadradoMagico(int m[][TAM], int tam)
{
    int i, j,
        somaLinha,
        somaColuna,
        valorReferencia = 0;

    //soma o conteúdo da primeira coluna com o objetivo
    //de criar um valor de referência
    for(i=0; i<tam; i++)
        valorReferencia+=m[i][0];

    /*Soma cada linha*/
    for(i=0; i<tam; i++){
        somaLinha=0; //note que é preciso zerar a cada troca de linha
        for(j=0; j<tam; j++){
            somaLinha+=m[i][j];
        }
        if(somaLinha!=valorReferencia)
            return 0;
    }

    /*Soma cada coluna*/
    for(i=0; i<tam; i++){
        somaColuna=0; //note que é preciso zerar a cada troca de linha
        for(j=0; j<tam; j++){
            somaColuna+=m[i][j];
        }
        if(somaColuna!=valorReferencia)
            return 0;
    }

    /*
    ATENÇÃO: FICA COMO EXERCICIO COMPARAR TAMBÉM
    A SOMA DAS DIAGONAIS PRINCIPAL E SECUNDARIA
    */

    // se chegou aqui, é porque todas as somas são iguais
    return 1;

}

int main()
{
    /*
    int matriz[TAM][TAM];
    srand(time(NULL));
    preencheMatriz(matriz, 3, 3, 2);
    */

    int matriz[TAM][TAM] = {{8, 0, 7},{4, 5, 6},{3, 10, 2}};

    imprimeMatriz(matriz, 3, 3);

    if(ehQuadradoMagico(matriz, 3))
        printf("A matriz eh quadrado magico!");
    else
        printf("A matriz NAO eh quadrado magico!");

    return 0;
}




