#include<stdio.h>

main()
{
    int n, // ir� armazenar a quantidade de sequ�ncias que ser�o lidas..
        num, //armazena cada numero lido
        soma, //vari�vel acumuladora
        i; //contador do for

    printf("Digite quantas sequ�ncias deseja ler: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) //lacco determinado que controla a cria��o e soma das n sequ�ncias
    {
        soma = 0; //� preciso zerar a variavel soma a cada nova sequ�ncia!!!
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

//Aten��o: fica como exerc�cio fazer a consist�ncia de dados para garantir que apenas valores positivos sejam considerados!!!
