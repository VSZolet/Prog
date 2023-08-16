main ()
{

    //Veja outras solucoes nos exemplos de repeticao

    int n, div,
        ehPrimo=1; //variavel indicadora
    printf ( "\nDigite um numero : " ) ;
    scanf ("%d" ,&n ) ; // entrada

    //note que o for comeca em 2!!! Se testar o 1, dah problema
    for(div=2; div<n-1; div++){ //pergunta: precisa ir ateh n-1...
        if(n%div==0)
            ehPrimo=0;
    }
    if(ehPrimo==1)
        printf("%d eh primo! \n", n);
    else
        printf("%d nao eh primo! \n", n);
}
