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


// Inicialmente, � preciso imprimir linha de cabecalho da tabela, isto �: 1, 2, ..., n
    printf("     "); // 5 espa�os- comente essa linha e veja o que acontece como  cabe�alho!!
    for (i = 1; i <= n; i++)
        printf("%5d", i);

    /* A l�gica consiste em variar i de 1 at� n e, para cada i, variar j de 1 at� i.
       Para cada par (i, j), imprimir i*j */
    for (i = 1; i <= n; i++)
    {
        printf("\n%5d", i); // pular linha e imprimir o cabe�alho de cada linha

        //varia��o do j
        for (j = 1; j <= i; j++) //AQUI est� a grande diferen�a!!!! compare com o exerc�cio anterior.
            printf("%5d", i*j);
    }

}
