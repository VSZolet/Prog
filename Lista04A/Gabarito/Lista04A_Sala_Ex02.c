#include<stdio.h>

int retornaIdade(int diaNasc, int mesNasc, int anoNasc);
int main()
{
    int dia, mes, ano;

    //leitura dos dados de entrada
    printf("Digite dia, mes e ano de nascimento: ");
    scanf("%d%d%d", &dia, &mes, &ano);

    // chamada aa funcao e impressao da mensagem adequada
    if(retornaIdade(dia, mes, ano)>=18)
        printf("Possui 18 anos ou mais");
    else
        printf("Menos de 18 anos");

    return 0;
}

int retornaIdade(int diaNasc, int mesNasc, int anoNasc)
{

    int dia, mes, ano, idade;

    //leitura da data atual
    printf("Digite dia, mes e ano ATUAL: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    idade = ano - anoNasc; //diferenca entre os anos
    if (mesNasc >  mes) // verifica mes e dia, diminuindo um ano caso a data ainda nao tenha chegado!
        idade = idade - 1;
    else if (mesNasc == mes)
        if (diaNasc > dia)
            idade = idade - 1;
}
