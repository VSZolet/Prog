#include <stdio.h>
#include <time.h>
#define TAM 10
#define R 149

void preencheVetores(int vetor1[] ,int vetor2[])
{
    int i;
    for (i=0; i<TAM; i++)
    {
        vetor1[i]=rand()%R;
        vetor2[i]=rand()%R;
    }
}

void intercalaVetores(int vetor1[], int vetor2[], int vetor3[])
{
    int i;
    for (i=0; i<TAM; i++)
    {
        if(i%2==0)
            vetor3[i]=vetor1[i];
        else
            vetor3[i]=vetor2[i];
    }
}

void imprimeVetores(int vetor1[], int vetor2[], int vetor3[])
{
    int i;

    printf("vetor1, vetor2, vetor3\n");

    for (i=0; i<TAM; i++)
    {
        printf("%6d, %6d, %6d\n", vetor1[i], vetor2[i], vetor3[i]);
    }
}

int main()
{

    int vetor1[TAM], vetor2[TAM], vetor3[TAM];

    srand(time(NULL));

    preencheVetores(vetor1, vetor2);
    intercalaVetores(vetor1, vetor2, vetor3);
    imprimeVetores(vetor1, vetor2, vetor3);


}
