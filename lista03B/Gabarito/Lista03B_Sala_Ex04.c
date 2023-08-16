main ()
{

    int n, div,
    contPrimo=0, // contador de primos
    qtde,
    k,
    ehPrimo=1; //variavel indicadora

    printf ( "Digite quantos primos: " ) ;
    scanf ("%d", &qtde); // entrada
    printf ( "Digite a partir de qual k deseja mostrar: " ) ;
    scanf ("%d", &k); // entrada

    printf("\nOs %d primos a partir de %d sao: ", qtde, k);
    n=k; //o primeiro valor que vai testar é o k!
    while(contPrimo < qtde)
    {
        //note que o for comeca em 2!!! Se testar o 1, dah problema
        for(div=2; div<n-1; div++)  //pergunta: precisa ir ateh n-1...
        {
            if(n%div==0)
                ehPrimo=0;
        }

        if(ehPrimo==1){ //se o n atual for primo
            contPrimo++; //incrementa contador
            printf("%d ", n); //mostra na tela
        }

        n++; //para testar proximo numero
        ehPrimo=1; //eh preciso setar para 1 porque vai testar um n diferente
    }
}
