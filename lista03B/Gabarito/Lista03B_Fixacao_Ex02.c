#include <stdio.h>
#include <stdlib.h>
main()
{
    int n, // valor lido
        m, // valor lido
        i, // contador
        j; // contador

//entrada de dados
    printf("digite o valor de n:");
    scanf("%d", &n);
    printf("\ndigite o valor de m:");
    scanf("%d", &m);


    /* A l�gica consiste em variar i de 1 at� n e, para cada i, variar j de 1 at� m.
       Para cada par (i, j), imprimir i*j */
    for (i = 1; i <= n; i++)
    {
        printf("\n"); // pular linha e imprimir o cabe�alho de cada linha

        //varia��o do j
        for (j = 1; j <= m; j++)
            printf("%5d", i*j);
    }

}
