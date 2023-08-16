#include <stdio.h>
#include <time.h>
#define TAM 100

void preencheVetor(int v[])
{
    int i;

    for (i=0; i<TAM; i++)
    {

        v[i]=(rand()%1001)-500;
    }
}

void buscaMenor(int v[])
{
    int i, indice, menor=500;

    for(i=0; i<TAM; i++)
    {
        if(v[i]<menor)
        {
            menor=v[i];
            indice = i;
        }
    }
    printf("Menor valor foi %d, no indice %d do vetor\n.", menor, indice);

    for (i=0; i<TAM; i++)
    {
        printf("\nA diferenca do indice %d para o menor indice e de %d", i, v[i]-menor);
    }
}



int main()
{
    int v[TAM];

    srand(time(NULL));

    preencheVetor(v);
    buscaMenor(v);

    return 0;
}
