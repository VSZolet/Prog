main ()
{

    int n, div,
    i,
    somaPrimo=0, // acumuladora da soma dos primos
    ehPrimo=1; //variavel indicadora


    n=2;
    for(i=1; i<=10; i++)
    {
        printf("Digite o numero que deseja testar: ");
        scanf("%d", &n);
        //note que o for comeca em 2!!! Se testar o 1, dah problema
        for(div=2; div<n-1; div++)  //pergunta: precisa ir ateh n-1...
        {
            if(n%div==0)
                ehPrimo=0;
        }

        //depois que termina o laço, se o status da indicadora for 1, é primo.
        if(ehPrimo==1){ //se o n atual for primo
            somaPrimo = somaPrimo + n;
        }

        ehPrimo=1; //eh preciso setar para 1 porque vai testar um n diferente
    }

    printf("Soma dos primos: %d\n", somaPrimo);
}
