#include <stdio.h>
#include <time.h>
#define MAX 50

typedef struct funcionario{
    int mat;
    char nome[51];
    int sup;
}Funcionario;

Funcionario* preenche_funcionarios(int n)
{
    Funcionario v[MAX];
    int i;

    for(i=0; i<n; i++)
        {
            v[i].mat=rand()%30+100;
            gets(v[i].nome);
            if (v[i].mat==129)
                v[i].sup=-1;
            else
                v[i].sup=v[i].mat+1;
            fflush(stdin);
            printf("\n");
        }
    return v;
}

int Indice_funcionario(Funcionario* vet, int n, int mat)
{


}

int main()
{
    srand(time(NULL));
    Funcionario v[MAX], *vet;
    int n;

    scanf("%d", &n);

    v[MAX]=preenche_funcionarios(n);

    return 0;
}
