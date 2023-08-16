#include <stdio.h>

typedef struct tempo{
    int segundos;
    int minutos;
    int horas;
}Tempo;

Tempo converte_tempo (int entrada)
{
    Tempo t;

    t.horas=entrada/3600;
    entrada=entrada%3600;
    t.minutos=entrada/60;
    t.segundos=entrada%60;

    return t;

}


int main()
{
    Tempo t;
    int entrada;

    scanf("%d", &entrada);

    t=converte_tempo(entrada);

    printf("%d horas, %d minutos e %d segundos", t.horas, t.minutos, t.segundos);

    return 0;

}

