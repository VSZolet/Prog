#include <stdio.h>
main()
{
    int n, // valor lido
        i, j; // contadores

    // entrada de dados
    printf("digite o valor de n:");
    scanf("%d", &n);

    // impressão do gráfico, variando i de -n até n
    for (i = -n; i <= n; i = i + 1)
    {
        // imprimir valor de i
        printf("\n%5d", i);
        // imprimir tantos pontos quantos for o valor da função
        for (j = 1; j <= i*i + i + 1; j++) //observe o critério de parada
            printf(".");
        // imprime asterisco final
        printf("*");
    }
}
