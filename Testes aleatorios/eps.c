#include <stdio.h>
#define N 100000

int main(void)
{
    float max = 0.5, min = 0.0, teste;
    int i;

    for (i = 0; i < N; i++)
    {
        teste = (max + min) / 2.0;
        if( (1.0 + teste) != 1.0)
            max = teste;
        if( (1.0 + teste) == 1.0)
            min = teste;
    }
    printf("O eps eh: %.50lf\n", max);
    return 0;
}
