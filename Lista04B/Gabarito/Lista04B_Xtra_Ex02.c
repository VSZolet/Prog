#include <stdio.h>

#define PONTOS_VENCEDOR 10 /* Pontos ganhos por adivinhar o vencedor. */
#define PONTOS_PLACAR 5 /* Pontos ganhos por adivinhar o placar de um time. */


int calculaPontos(int apostaTime1, int apostaTime2, int realTime1, int realTime2);

int main ()
{
    int aposta_t1, aposta_t2; /* Número de gols dos times na aposta. */
    int placar_t1, placar_t2; /* Número de gols dos times no placar real. */

    printf ("Informe o placar da aposta (ex: 2x1): ");
    scanf ("%dx%d", &aposta_t1, &aposta_t2);
    printf ("Informe o placar real (ex: 2x1): ");
    scanf ("%dx%d", &placar_t1, &placar_t2);


    printf ("%d pontos\n", calculaPontos(aposta_t1, aposta_t2, placar_t1, placar_t2));

    return 0;
}

int calculaPontos(int apostaTime1, int apostaTime2, int realTime1, int realTime2)
{

    int pontos = 0;
    /*Adaptado- prof Bogdan*/

/* Verifica se a aposta identificou o vencedor. */
    if (((apostaTime1 > apostaTime2) && (realTime1 > realTime2)) ||
        ((apostaTime1 < apostaTime2) && (realTime1 < realTime2)) ||
        ((apostaTime1 == apostaTime2) && (realTime1 == realTime2)))
        pontos += PONTOS_VENCEDOR;

    /* Verifica se a aposta acertou o número de gols dos times. */
    if (apostaTime1 == realTime1)
        pontos += PONTOS_PLACAR;

    if (apostaTime2 == realTime2)
        pontos += PONTOS_PLACAR;

    return pontos;
}
