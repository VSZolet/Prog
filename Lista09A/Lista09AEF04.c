#include <stdio.h>
#define TL 10
#define TC 10

int acha_nulos(int matriz[][TC], int *CL, int *CC)
{
    int i,j, soma;

    for(i=0; i<TL; i++){
        soma=0;
        for(j=0; j<TC; j++){
            soma+=matriz[i][j];
        }
        if(soma==0)
            (*CL)++;
    }

    for (i=0; i<TC; i++){
        soma=0;
        for(j=0; j<TL; j++){
            soma+=matriz[j][i];
        }
        if(soma==0)
            (*CC)++;
    }

    return 0;
}

int main()
{

    srand(time(NULL));

    int matriz[TL][TC],
        i, j,
        CL=0, CC=0;

    for(i=0; i<TL; i++)
    {
        printf("Fila %d: ", i);
        for(j=0; j<TC; j++)
        {
            matriz[i][j] = rand()%10-5;
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    acha_nulos(matriz, &CL, &CC);

    printf("Linhas Nulas: %d\n", CL);
    printf("Colunas Nulas: %d\n", CC);

}
