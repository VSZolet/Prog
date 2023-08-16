#include<stdio.h>

main()
{
    int n, // irá armazenar a quantidade de sequências que serão lidas..
        num, //armazena cada numero lido
        soma, //variável acumuladora
        i; //contador do for

    printf("Digite quantas sequências deseja ler: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) //lacco determinado que controla a criação e soma das n sequências
    {
        soma = 0; //é preciso zerar a variavel soma a cada nova sequência!!!
        printf("Digite o valor desejado: ");
        scanf("%d", &num); // leitura do primeiro valor fora do lacco

        while (num != -1) // o valor digitado deve ser diferente de -1
        {
            soma = soma + num;

            printf("Digite o valor desejado: ");
            scanf("%d", &num);
        }
        printf("O valor da soma da %da. sequencia eh: %d\n", i+1, soma);
    }
}

//Atenção: fica como exercício fazer a consistência de dados para garantir que apenas valores positivos sejam considerados!!!
