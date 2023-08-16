#include<stdio.h>

typedef struct ficha{
    char nome[100];
    int dia;
    int mes;
} Ficha;

int main()
{

    Ficha f[5];
    int i, j;

    for (i=0; i<5; i++)
    {
        printf("\nEntre o nome do %do:", i+1);
        gets(f[i].nome);
        printf("\nEntre o dia e o mes de aniversario dele:\n");
        scanf("%d %d", &f[i].dia, &f[i].mes);
        fflush(stdin);
    }

    printf("\nOs Aniversariantes de cada mes sao:\n");
    for(i=1; i<=12; i++)
    {
        printf("Mes %d:\n", i);
        for(j=0; j<5; j++)
        {
            if(f[j].mes==i)
                printf("%s\n", f[j].nome);
        }
        printf("\n");
    }

}
