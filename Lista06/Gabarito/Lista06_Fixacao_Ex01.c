#include<stdio.h>
#define TAM 10 //defini��o de uma constante

int main(){
    //declara��o de vari�veis
    int v[TAM], i, num,
        ind=0; //vari�vel indicadora!

    //inicializa��o da semente para a funcao rand
    srand(time(NULL));

    //preenchimento do vetor
    for(i=0; i<TAM; i++)
        v[i] = rand()%21-15; // analise o porque!

    //impress�o do vetor
    for(i=0; i<TAM; i++)
        printf("%d \t", v[i]);

    printf("\n\nDigite o valor de num: ");
    scanf("%d", &num);

    for(i=0; i<TAM; i++)
        if(v[i]==num){
            ind=1;
            break; //como achou, pode interromper o la�o
        }

    if(ind==1)
        printf("\n\nAchei!");
    else
        printf("\n\nNao achei!");

    return 0;
}
