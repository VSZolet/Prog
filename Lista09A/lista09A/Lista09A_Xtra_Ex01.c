#include<stdio.h>
#define TAM 5
main(){
    int m[TAM][TAM],
    i, j;

    //leitura dos elementos da primeira linha
    for(j=0; j<TAM; j++)
        scanf("%d", &m[0][j]);

    //atribui��o dos valores das pr�ximas linhas
    //note que a linha 1 n�o � percorrida novamente!!
    for(i=1; i<TAM; i++)
        for(j=0; j<TAM; j++)
            // linha i-coluna j recebe o conteudo da linha anterior na mesma coluna multiplicado por 2
            m[i][j] = m[i-1][j]*2;

    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++)
            printf("%3d ", m[i][j]);
        printf("\n");
    }
}
