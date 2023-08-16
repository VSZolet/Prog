#include <stdio.h>
#include <time.h>
#define TAM 10

void preencheVetor(int v[])
{
    int i;

    printf("O vetor e: ");

    for(i=0; i<TAM; i++)
    {
        v[i]=rand()%1000+1;
        printf("%d ", v[i]);
    }
}

void eliminaPosicao(int v[], int indice)
{
    int i;

    for(i=indice; i<TAM; i++)
    {
        v[i]=v[i+1];
    }
    v[i]=0;
}

void imprimeNovo(int v[])
{
    int i;

    printf("\n\nNovo vetor ficou: ");

    for(i=0; i<TAM-1; i++)
    {
        printf("%d ", v[i]);
    }
}

int main()
{
    int v[TAM], indice;

    preencheVetor(v);

    printf("\n\nEscolha um indice para eliminar: ");
    scanf("%d", &indice);

    eliminaPosicao(v, indice);
    imprimeNovo(v);

    return 0;
}
