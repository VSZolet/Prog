#include <stdio.h>

main()
{
    int n, //quantidade de dados lidos
        i=1, //contador de iteracoes
        indCres=1, //variavel indicadora para sequencia crescente
        indDecres=1, //variavel indicadora para sequencia descrescente
        ant, atual; //armazena valor anterior e atual

    printf("Quantas iteracoes: ");
    scanf("%d", &n);

    printf("Valor: ");
    scanf("%d", &ant); //le o primeiro valor e coloca em anterior


    for(i=2; i<=n; i++){
        printf("Valor: ");
        scanf("%d", &atual); //le valor atual

        if(atual<ant) //se o atual for menor que o anterior
            indCres=0; //significa que a sequencia nao eh crecente
        if(atual>ant) // da mesma forma...
                      //note que nao pode-se colocar else aqui!!
            indDecres=0;

        ant=atual; //atualiza valor de ant. Comente esta linha e avalie o que acontece
    }
    if(indCres==1)
        printf("Crescente");
    else if(indDecres==1) //como soh uma sera verdadeira, exploramos o else if
        printf("Decrescente");
    else
        printf("Desornenada");


}
