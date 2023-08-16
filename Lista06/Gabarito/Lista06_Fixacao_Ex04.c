#include<stdio.h>
#include<stdlib.h>
#define TAM 10 //definição de uma constante

main(){
    //declaração de variáveis
    int k[TAM],v[TAM], i, j, ind, num, contDistintos;

    srand(time(NULL));

    //valor máximo a ser inserido no vetor
    printf("Digite o valor máximo que deve ser inserido no vetor: ");
    scanf("%d", &num);

    //preenchimento e impressão do vetor na tela
    for(i=0; i<TAM; i++)
    {
        k[i] = rand()%num+1;
        printf("%d ", k[i]);
    }


    for(i=0; i<TAM; i++) //percorre cada posição do vetor
    {
        ind = 0;  // para cada nova posição, inicia variável indicadora com FALSO (assume que não haverão repetições)
        for(j=i+1; j<TAM; j++) //percorre as próximas posições
        {
           if(k[i]==k[j] && k[i]!=-1) //se o elemento na posição j for igual ao da posição i (e for diferente de -1)
           {
                k[j] = -1; // seta o elemento da posição j para -1 (por isso a comparação com -1 no if)
                ind = 1; // seta indicadora para 1 (VERDADEIRO - houve repetição)
           }
        }

        //COMENTE ESSE IF E VEJA O RESULTADO!! O QUE DÁ ERRADO??
        if(ind==1) // se a indicadora for 1, significa que o elemento da posição i estava repetido
            k[i]=-1; //então, é necessário setar ele para -1 também

    }

    //Armazenamento dos valores distintos
    contDistintos = 0; //contador para controlar as inserções no vetor v
    for(i=0; i<TAM; i++)
    {
        if(k[i]!=-1) // se o elemento de k no índice i é diferente de -1, significa que ele não está repetido
        {
            v[contDistintos] = k[i]; //então, insere no vetor v
            contDistintos++;
        }
    }


    if (contDistintos>0) //se contDistintos for maior que 0, existiam valores distintos
    {
        printf("\n\nOs valores distintos sao: ");
        for(i=0; i<contDistintos; i++)
            printf("%d ", v[i]);
    }
    else //caso contrário, todos os elementos apareceram repetidos.
        printf("\n\nNao existem valores distintos!!");


}

/*
//OUTRA SOLUÇÃO!!

#include<stdio.h>
#include<stdlib.h>
#define TAM 10 //definição de uma constante

main(){
    //declaração de variáveis
    int k[TAM],v[TAM],i, j, cont, num, contDistintos;

    srand(time(NULL));

    //valor máximo a ser inserido no vetor
    printf("Digite o valor máximo que deve ser inserido no vetor: ");
    scanf("%d", &num);

    //preenchimento e impressão do vetor na tela
    for(i=0; i<TAM; i++)
    {
        k[i] = rand()%num+1;
        printf("%d ", k[i]);
    }


    contDistintos = 0; //contador para controlar as inserções no vetor v
    for(i=0; i<TAM; i++) //percorre cada posição do vetor
    {
        cont = 0;  // para cada nova posição, inicia um contador de ocorrencias
        for(j=0; j<TAM; j++) //percorre as próximas posições
        {
           if(k[i]==k[j]) //se o elemento na posição j for igual ao da posição i
           {
                cont++; // incrementa contador
           }
        }
        if(cont==1) // se contador for igual a 1, significa que ele apareceu apenas uma vez!!
        {
            v[contDistintos] = k[i]; //então, insere no vetor v
            contDistintos++;
        }
    }

    if (contDistintos>0) //se contDistintos for maior que 0, existiam valores distintos
    {
        printf("\n\nOs valores distintos sao: ");
        for(i=0; i<contDistintos; i++)
            printf("%d ", v[i]);
    }
    else //caso contrário, todos os elementos apareceram repetidos.
        printf("\n\nNao existem valores distintos!!");


}


*/
