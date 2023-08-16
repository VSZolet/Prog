#include<stdio.h>
#define TAML 7
#define TAMC 5
int main(){
    int m[TAML][TAMC],
        i, j,
        SL[TAML]={0},
        SC[TAMC]={0};

    //inicializa��o da semente do gerador de nros a
    srand(time(NULL));

    //preenche a matriz com nros aleat�rios
    for(i=0; i<TAML; i++)
        for(j=0; j<TAMC; j++)
            m[i][j] = rand()%2;

    /*soma os elementos de cada linha*/
    for(i=0; i<TAML; i++)
        for(j=0; j<TAMC; j++)
            SL[i]+=m[i][j];

    /*soma os elementos de cada coluna*/
    for(i=0; i<TAMC; i++)
        for(j=0; j<TAML; j++)
            SC[i]+=m[j][i]; //observe que trocamos os �ndices!


    //imprime a matriz
    for(i=0; i<TAML; i++){
        for(j=0; j<TAMC; j++)
            printf("%3d ", m[i][j]);
        printf("\n");
    }

    printf("\nSoma das linhas!\n");
    for(i=0; i<TAML; i++)
        printf("%3d ", SL[i]);

    printf("\nSoma das colunas!\n");
    for(i=0; i<TAMC; i++)
        printf("%3d ", SC[i]);

    return 0;

}

/*
//Vers�o caso as somas fossem guardadas em vari�veis
#include<stdio.h>
#define TAML 7
#define TAMC 5
main(){
    int m[TAML][TAMC],
        i, j,
        somaLin=0,
        somaCol=0;

    //inicializa��o da semente do gerador de nros a
    srand(time(NULL));

    //preenche a matriz com nros aleat�rios
    for(i=0; i<TAML; i++)
        for(j=0; j<TAMC; j++)
            m[i][j] = rand()%2;

    //soma os elementos de cada linha
    for(i=0; i<TAML; i++){
        somaLin=0; //note que � preciso zerar a soma a cada itera��o
        for(j=0; j<TAMC; j++)
            somaLin+=m[i][j];
        printf("Linha %d: %d\n", i, somaLin);
    }

    //soma os elementos de cada coluna
    for(i=0; i<TAMC; i++){
        somaCol=0; //note que � preciso zerar a soma a cada itera��o
        for(j=0; j<TAML; j++)
            somaCol+=m[j][i]; //observe que trocamos os �ndices!
        printf("Coluna %d: %d\n", i, somaCol);
    }

    //imprime a matriz
    for(i=0; i<TAML; i++){
        for(j=0; j<TAMC; j++)
            printf("%3d ", m[i][j]);
        printf("\n");
    }
}

*/
