#include <stdio.h>
#define TAM 50

int main()
{

    int vetor[TAM], i, j;

    for(i=0; i<TAM; i++)
    {
        printf("\nentre com um valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
        for(j=0; j<i; j++)
        {
            if(vetor[i]==vetor[j])
            {
                i--;
                printf("\nNumero ja preenchido na posicao %d, favor entrar com um numero nao preencido. Novamente, ", j);
                break;
            }
        }
    }

}
