#include <stdio.h>
#define TL 7
#define TC 5

int main()
{

    srand(time(NULL));

    int matriz[TL][TC], i, j, SL[TL]={0}, SC[TC]={0};

    for(i=0; i<TL; i++)
    {
        printf("Fila %d: ", i);
        for(j=0; j<TC; j++)
        {
            matriz[i][j] = rand()%2;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<TL; i++){
        for(j=0; j<TC; j++){
            SL[i]+=matriz[i][j];
        }
    }

    for (i=0; i<TC; i++){
        for(j=0; j<TL; j++){
            SC[i]+=matriz[j][i];
        }
    }

    printf("\nSoma das linhas ficou:\n");
    for(i=0; i<TL; i++){
        printf("Linha %d: %d\n", i, SL[i]);
    }

    printf("\nSoma das colunas ficou:\n");
    for(i=0; i<TC; i++){
        printf("Coluna %d: %d\n", i, SC[i]);
    }
}
