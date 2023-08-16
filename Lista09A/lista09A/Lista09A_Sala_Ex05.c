#include<stdio.h>
#define TAM 30

main()
{
    int i, j,
        matriz[TAM][TAM],
        lado, aux,
        valor_atual = 1,
        canto_atual = 0;

    printf ("Lado (maximo 30): ");
    scanf ("%d", &lado);
    aux=lado; //para guardar o valor original!

    while (lado > 0)
    {
        /* Vai para a direita. */
        for (j = canto_atual; j < canto_atual + lado; j++)
            matriz [canto_atual][j] = valor_atual++;

        /* Vai para baixo. Pula a posição mais acima. */
        for (i = canto_atual+1; i < canto_atual + lado; i++)
            matriz [i][canto_atual+lado-1] = valor_atual++;

        /* Vai para a esquerda. Pula a posição mais à direita. */
        for (j = canto_atual+lado-2; j >= canto_atual; j--)
            matriz [canto_atual+lado-1][j] = valor_atual++;

        /* Vai para cima. Pula as posições mais abaixo e mais acima. */
        for (i = canto_atual+lado-2; i > canto_atual; i--)
            matriz [i][canto_atual] = valor_atual++;

        lado -= 2;
        canto_atual++;

    }

    for (i = 0; i < aux; i++)
    {
        for (j = 0; j < aux; j++)
            printf ("%d\t", matriz [i][j]);
        printf ("\n");
    }

}
