#include<stdio.h>
#include<stdlib.h>
#define TAM 10 //definição de uma constante

int main(){
    int v1[TAM], v2[TAM],  //vetores iniciais
        v3[TAM*2], //vetor resultado
        cont_v1=0, cont_v2=0, //controle das posições dos vetores v1 e v2
        i;

    //inicializacao da semente
    srand(time(NULL));

    for(i=0; i<TAM; i++)
    {
        v1[i] = rand()%9+1; //valores entre 1 e 10
        v2[i] = rand()%9+1; //valores entre 1 e 10
    }
    printf("\nVetor v1: ");
    for(i=0; i<TAM; i++)
        printf("%d ", v1[i]);

    printf("\nVetor v2: ");
    for(i=0; i<TAM; i++)
        printf("%d ", v2[i]);

    //preenche v3 conforme enunciado
    for(i=0; i<TAM*2; i++)
    {
        if(i%2==0)
        {
            v3[i] = v1[cont_v1];
            cont_v1++;
        }
        else
        {
            v3[i] = v2[cont_v2];
            cont_v2++;
        }

    }

    printf("\nVetor resultado: ");
    for(i=0; i<TAM*2; i++)
        printf("%d ", v3[i]);

    return 0;
}
