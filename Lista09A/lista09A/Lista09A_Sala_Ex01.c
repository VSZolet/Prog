#include <stdio.h>
#define TAM 100

int main(){
    int m[TAM][TAM]; // como não sabemos alocar matrizes dinamicamente, temos que criar uma matriz estática de tamanho máximo
    int n,i,j;

    printf("Digite o valor de n: (maximo 100) ");
    scanf("%d", &n); // fica como exercício fazer a consistência dos dados

    //inicializa matriz em 0
    // a partir daqui, observe que não percorremos TAM linhas, mas sim n (que são as preechidas)
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            m[i][j] = 0;

    // preenche a primeira coluna com 1
    for(i=0; i<n; i++)
        m[i][0] = 1;

    //calcula as demais posições
    for(i=1; i<n; i++){
        for(j=1; j<n; j++){
           m[i][j] = m[i-1][j-1] + m[i-1][j];
        }
    }

    //se for diferente de 0, imprime
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(m[i][j] > 0)
                printf("%3d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}

