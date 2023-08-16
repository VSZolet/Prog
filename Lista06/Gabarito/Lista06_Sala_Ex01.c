#include <stdio.h>
#include <stdlib.h>

#define N 5

int main ()
{
    int i, indMenor, menor,  valores [N];

    srand(time(NULL));

    //preenchimento do vetor
    for(i=0; i<N; i++)
        valores[i] = rand()%21-15; // analise o porque!

    //lê o primeiro valor fora do laço, visando inicializar o menor
    menor = valores[0];
    indMenor = 0; //se o menor for o primeiro lido, o índice será o 0

    for (i = 1; i < N; i++)
    {
        if (valores[i] < menor){
            menor = valores [i];
            indMenor = i;
        }
    }

    printf ("O menor valor eh: %d e está no indice %d\n", menor, indMenor);

    // Mostra a diferença entre o menor e cada elemento do vetor
    for (i = 0; i < N; i++)
    {
        printf("%d\n", valores[i]-menor);
    }

    return (0);
}
