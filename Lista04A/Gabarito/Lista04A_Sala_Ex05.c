#include<stdio.h>

int  fibonacci (int n);

int main()
{
    int num;
    printf("Digite o valor de n: ");
    scanf("%d", &num);

    printf("O n-esimo termo da sequencia de Fibonacci eh: %d\n", fibonacci(num));

    return 0;
}

int  fibonacci (int n)
{
    if (n == 1) /* Primeiro termo. */
        return (0);
    else if (n == 2) /* Segundo termo. */
        return (1);
    else
    {
        int i;
        int  termo_anterior = 1; /* O termo na posição anterior. */
        int  termo_anterior2 = 0; /* O termo em 2 posições anteriores. */
        int  termo_atual = termo_anterior + termo_anterior2;

        for (i = 3; i < n; i++)
        {
            termo_anterior2 = termo_anterior;
            termo_anterior = termo_atual;
            termo_atual = termo_anterior + termo_anterior2;
        }

        return (termo_atual);
	}
}
