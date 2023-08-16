#include<stdio.h>
#include<stdlib.h>
#define TAM 6 //definição de uma constante

int main(){
    //declaração de variáveis
    int v[TAM]={0},//como cada posição vai ser um contador, inicializa com zero
          num, i, nroIteracoes;

    //inicialização da semente para a funcao rand
    srand(time(NULL));

    printf("Quantos lancamentos do dado? ");
    scanf("%d", &nroIteracoes);

    //"sorteio" do numero e uso de um vetor como
    //apoio para contar as ocorrências de cada face
    for(i=0; i<nroIteracoes; i++){
        num = rand()%6+1;
        v[num-1]++; //-1 é necessário porque o sorteio varia entre 1:6 e o índice do vetor entre 0:5
    }
    //impressão do vetor
    for(i=0; i<TAM; i++)
        printf("Face %d: %d \n", i+1, v[i]);

    return 0;
}
