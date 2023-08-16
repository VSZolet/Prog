
#include <stdio.h>

// solucao USP
int bloco(int n);

int main()
{
    int n,m,pm,pm_ant,alt = 1;
    printf("Entre com n: ");
    scanf("%d",&n);

    m = 1;
    if(m <= n)
    {
        pm_ant = bloco(m);
        n--;
    }
    m = 2;
    while(m <= n)
    {
        pm = bloco(m);
        if(pm == pm_ant || pm == -1)
            alt = 0;
        pm_ant = pm;
        n = n - m;
        m++;
    }
    if(n == 0 && alt == 1)
        printf("piramidal %d-alternante\n",m-1);
    else
        printf("Nao eh piramidal m-alternante\n");
    return 0;
}

/*
Devolve:
0, se os n numeros lidos forem pares;
1, se os n numeros lidos forem impares;
-1, se entre os n numeros lidos ha numeros com paridades diferentes.
*/
int bloco(int n)
{
    int i,num,pari;
    scanf("%d",&num);
    pari = num%2;
    for(i = 1; i < n; i++)
    {
        scanf("%d",&num);
        if(num%2 != pari)
            pari = -1;
    }
    return pari;
}

