#include <stdio.h>
#include <time.h>

typedef struct lojas{
    int cod;
    int tel;
    float pre;
} Lojas;

int main()
{
    srand(time(NULL));

    Lojas l[15];
    int i;
    float med=0;

    for(i=0; i<15; i++)
    {
        l[i].cod=i;
        l[i].tel=rand()%10000000+30000000;
        l[i].pre=rand()%2000+0.99;
        med+=l[i].pre;
    }
    med/=15;

    printf("A media ficou em %.2f, e as lojas que estao abaixo dessa media sao os telefones:\n", med);

    for(i=0; i<15; i++)
    {
        if(l[i].pre<med)
            printf("%d\n", l[i].tel);
    }
}
