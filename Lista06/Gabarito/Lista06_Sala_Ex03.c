#include<stdio.h>
#include<stdlib.h>
#define TAM 5 //definição de uma constante

int main(){
    //declaração de variáveis
    int v[TAM], i, num, k, ind;

    //contadores
    i=0; //para controlar a posição a ser inserido o valor no vetor
    k=0; //para percorrer as posições já preenchidas, verificando se o valor foi inserido

    while(i<TAM) //tem que ser indeterminado porque i nem sempre é incrementeado
    {
        ind = 1; //variável indicadora que ajuda a decidir se o valor será inserido ou não
        printf("Digite um valor: ");
        scanf("%d", &num);
        for(k=0; k<=i; k++) //percorre as posições já preenchidas do vetor para ver se o valor já foi inserido
        {
            if(v[k]==num) //se já existir, muda ind para zero
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
