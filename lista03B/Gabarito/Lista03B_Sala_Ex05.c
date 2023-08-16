#include <stdio.h>

main()
{
    int m,        // valor limite - entrada do problema
        n, i,     // contadores: n varia de 1 a m (passo 1) e i varia de 1 at� n (passo 1)
        inicio;   // primeiro dos impares de uma sequencia que soma n^3

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    inicio = 1; // primeiro �mpar
    for (n = 1; n <= m; n++)
    {
        printf("%d*%d*%d = %d", n, n, n, inicio);
        for (i = 1; i < n; i++)
            printf("+%d", inicio + 2 * i); //impress�o da soma de cada novo �mpar
        inicio = inicio + 2 * n;           // inicio da proxima sequencia
        printf("\n");
    }

}

