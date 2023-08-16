#define TRUE 1
#define FALSE 0

int main()
{
    int indicadora, maior, menor, maiorOr, menorOr, misterio;

    printf("Digite dois inteiros positivos: (a maior que b)");
    scanf("%d %d", &maiorOr, &menorOr);

    maior = maiorOr;
    menor = menorOr;

    indicadora = FALSE;
    while (maior >= menor)
    {
        while (menorOr != 0 && maiorOr % 10 == menorOr % 10)
        {
            maiorOr = maiorOr/10;
            menorOr = menorOr/10;
        }
        if (menorOr == 0)
            misterio = 1;
        else
            misterio = 0;

        if (misterio == TRUE)
            indicadora = TRUE;

        maior = maior/10;
        maiorOr = maior;
    }

    if (indicadora == TRUE)
        printf("SIM");
    else
        printf("NAO");
    return 0;
}
