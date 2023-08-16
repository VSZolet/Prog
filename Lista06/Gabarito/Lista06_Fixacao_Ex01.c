#include<stdio.h>
#define TAM 10 //definição de uma constante

int main(){
    //declaração de variáveis
    int v[TAM], i, num,
        ind=0; //variável indicadora!

    //inicialização da semente para a funcao rand
    srand(time(NULL));

    //preenchimento do vetor
    for(i=0; i<TAM; i++)
        v[i] = rand()%21-15; // analise o porque!

    //impressão do vetor
    for(i=0; i<TAM; i++)
        printf("%d \t", v[i]);

    printf("\n\nDigite o valor de num: ");
    scanf("%d", &num);

    for(i=0; i<TAM; i++)
        if(v[i]==num){
            ind=1;
            break; //como achou, pode interromper o laço
        }

    if(ind==1)
        printf("\n\nAchei!");
    else
        printf("\n\nNao achei!");

    return 0;
}
