#include <stdio.h>
#define FP1 60
#define LOG 50

int preencheFundProg(int fp1[])
{
    int i;

    printf("Insira as matricular de Fundamentos de Programacao 1:\n\n");

    for (i=0; i<FP1; i++)
    {
        do{
            printf("Insira a matricula do aluno %d ou 0 para parar: ", i+1);
            scanf("%d", &fp1[i]);

            if(fp1[i]==0)
                return 0;

            if ((fp1[i]%1000)!=999)
                printf("\nInvalido.");
        }while((fp1[i]%1000)!=999);
    }
}

int preencheLog(int log[])
{
    int i;

    printf("\nInsira as matricular de Logica de Programacao:\n\n");

    for (i=0; i<LOG; i++)
    {
        do{
            printf("Insira a matricula do aluno %d ou 0 para parar: ", i+1);
            scanf("%d", &log[i]);

            if(log[i]==0)
                return 0;

            if ((log[i]%1000)!=999)
                printf("\n\nInvalido.\n");
        }while((log[i]%1000)!=999);
    }
}

void verificaIguais(int fp1[], int log[])
{
    int i, j, cont=0;

    printf("\n");

    for (i=0; i<FP1; i++)
    {
        for(j=0; j<LOG; j++)
        {
            if(fp1[i]==0)
                break;
            if(fp1[i]==log[j]){
                printf("\nO aluno %d esta matriculado em ambas as materias.", fp1[i]);
                cont++;
            }
        }
    }
    if(cont==0)
    {
        printf("Nenhum aluno matriculado em ambas as materias.");
    }
}

int main()
{
    int fp1[FP1]={0}, log[LOG]={0};

    preencheFundProg(fp1);
    preencheLog(log);
    verificaIguais(fp1, log);
}
