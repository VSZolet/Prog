#include <stdio.h>
#include <time.h>
#define TAM 6

void realizaLancamentos(int lancamentos, int face[])
{
    int aux, ocorrencia;

    for (aux=0; aux<lancamentos; aux++)
    {
        ocorrencia=rand()%6;

        if(ocorrencia==1)
        {
            face[0]++;
        }
        else if(ocorrencia==2)
        {
            face[1]++;
        }
        else if(ocorrencia==3)
        {
            face[2]++;
        }
        else if(ocorrencia==4)
        {
            face[3]++;
        }
        else if(ocorrencia==5)
        {
            face[4]++;
        }
        else
        {
            face[5]++;
        }
    }
}

void imprimeLancamentos(int face[])
{
    int aux;

    for (aux=0; aux<6; aux++)
    {
        printf("\nPara o lado %d houveram %d ocorrências.\n", aux+1, face[aux]);
    }
}


int main()
{
    int lancamentos, face[TAM]={0};

    srand(time(NULL));

    do
    {
    printf("Entre com o numero de lancamentos: ");
    scanf("%d", &lancamentos);
    } while (lancamentos < 6);

    realizaLancamentos(lancamentos, face);
    imprimeLancamentos(face);

}
