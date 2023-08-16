#include<stdio.h>

int arredonda (float n);

int main(){

    float n;

    printf("Digite valor de entrada: ");
    scanf("%f", &n);

    printf("Valor arredondado: %d", arredonda(n));

    return 0;
}


/* Para arredondar um n�mero positivo, basta somar 0.5 ao mesmo e truncar. Se a
  parte decimal for maior ou igual a 0.5, a parte inteira aumentar� em 1. Para
  n�meros negativos vale a mesma regra, mas � preciso subtrair 0.5*/

int arredonda (float n)
{
    if (n >= 0)
        return ((int) (n + 0.5));
    else
        return ((int) (n - 0.5));
}

