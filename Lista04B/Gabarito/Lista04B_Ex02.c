#include <stdio.h>

int binario2Decimal(int num);

int main()
{
    int num;

    printf("Digite o numero na base 2: ");
    scanf("%d", &num);

    printf("%d na base 10 eh: %d", num, binario2Decimal(num));

    return 0;
}

int binario2Decimal(int num)
{
    int pot2,       // guarda a potencia de 2 pela qual o valor será multiplicado
        resp; //resposta

    // inicializacoes
    resp = 0;
    pot2  = 1;

    while (num != 0)
    {
        resp = resp + num % 10 * pot2;  // processa um digito binario
        num = num / 10; // atualiza valor
        pot2 = pot2 * 2; // atualiza potencia
    }

    return resp;
}
