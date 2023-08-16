#include <stdio.h>

main()
{
    int n,         /* comprimento da sequencia                               */
        i,         /* contador de numeros da sequencia lidos                 */
        atual,     /* ultimo numero da sequencia lido                        */
        anterior,  /* numero anterior da sequencia                           */
        cont;      /* quantidade de segmentos de numeros iguais na sequencia */

    printf("Digite o numero de elementos da sequencia: ");
    scanf("%d",&n);

    printf("Digite uma sequencia com %d numeros inteiros: ", n);

    /* inicializacoes */
    scanf("%d", &anterior);   /* anterior comeca com o primeiro da sequencia */
    cont = 1;                 /* inicialmente temos um segmento              */

    for (i = 2; i <= n; i++)
    {
        scanf("%d", &atual);    /* proximo da sequencia                        */
        if (atual != anterior)
        {
            cont = cont + 1;      /* comecou um novo segmento de numeros iguais  */
            anterior = atual;
        }
    }
    printf("Quantidade de segmentos de numeros iguais da sequencia = %d\n", cont);
}

// solução de http://www.ime.usp.br/~macmulti/exercicios/inteiros/21C.html
