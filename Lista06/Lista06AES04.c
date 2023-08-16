#include <stdio.h>
#include <time.h>
#define MAX 50

void preencheVetores(int v1[], int v2[], int n)
{
    int i;

    printf("Os vetores sao:\n");

    for(i=0; i<n; i++)
    {
        v1[i]=rand()%1000;
        v2[i]=rand()%1000;
        printf("Posicao %d: %d e %d\n", i, v1[i], v2[i]);
    }
}

void calculaVetores(int v1[], int v2[], int n)
{
    int i,j;

    for(i=0, j=n-1; i<n, j>=0; i++, j--)
    {
        printf("A soma final e: %d\n", v1[i] + v2[j]);
    }

}

int main()
{
    int v1[MAX], v2[MAX], n;

    srand(time(NULL));

    printf("Entre com um valor para o tamanho do vetor, ate %d: ", MAX);
    scanf("%d", &n);

    preencheVetores(v1,v2,n);
    calculaVetores(v1,v2,n);

    return 0;
}
