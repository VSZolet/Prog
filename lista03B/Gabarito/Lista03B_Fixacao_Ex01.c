#include <stdio.h>

main()
{
    int n, //quantidade de dados lidos
        i=1, //contador de iteracoes
        indCres=1, //variavel indicadora para sequencia crescente
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

        ant=atual; //atualiza valor de ant. Comente esta linha e avalie o que acontece
    }
    if(indCres==1)
        printf("Crescente");
    else
        printf("Não eh crescente");


}
