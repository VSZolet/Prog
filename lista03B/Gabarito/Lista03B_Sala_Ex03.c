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


// Inicialmente, é preciso imprimir linha de cabecalho da tabela, isto é: 1, 2, ..., n
    printf("     "); // 5 espaços- comente essa linha e veja o que acontece como  cabeçalho!!
    for (i = 1; i <= n; i++)
        printf("%5d", i);

    /* A lógica consiste em variar i de 1 até n e, para cada i, variar j de 1 até i.
       Para cada par (i, j), imprimir i*j */
    for (i = 1; i <= n; i++)
    {
        printf("\n%5d", i); // pular linha e imprimir o cabeçalho de cada linha

        //variação do j
        for (j = 1; j <= i; j++) //AQUI está a grande diferença!!!! compare com o exercício anterior.
            printf("%5d", i*j);
    }

}
