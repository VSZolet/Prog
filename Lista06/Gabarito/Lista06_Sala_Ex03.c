#include<stdio.h>
#include<stdlib.h>
#define TAM 5 //defini��o de uma constante

int main(){
    //declara��o de vari�veis
    int v[TAM], i, num, k, ind;

    //contadores
    i=0; //para controlar a posi��o a ser inserido o valor no vetor
    k=0; //para percorrer as posi��es j� preenchidas, verificando se o valor foi inserido

    while(i<TAM) //tem que ser indeterminado porque i nem sempre � incrementeado
    {
        ind = 1; //vari�vel indicadora que ajuda a decidir se o valor ser� inserido ou n�o
        printf("Digite um valor: ");
        scanf("%d", &num);
        for(k=0; k<=i; k++) //percorre as posi��es j� preenchidas do vetor para ver se o valor j� foi inserido
        {
            if(v[k]==num) //se j� existir, muda ind para zero
                ind = 0;
        }
        if(ind==1) //se indicadora permanecer valendo 1, insere no vetor e incrementa contador
        {
            v[i] = num;
            i++;
        }
    }

    for(i=0; i<TAM; i++) //mostra o vetor preenchido
        printf("%d ", v[i]);

    return 0;
}
