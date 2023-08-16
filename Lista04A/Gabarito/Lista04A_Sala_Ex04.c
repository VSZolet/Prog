/* Esta questão não é complicada, mas pode ser respondida de diferentes
 maneiras. O desempenho do programa pode mudar bastante dependendo da estrutura
 escolhida. - Prof. Bogdan*/

#include <stdio.h>

int main ()
{
    int n;
    scanf ("%d", &n);

    printf("Invocando a funcao 01: \n");
    opcao01(n);
    printf("\n\nInvocando a funcao 02: \n");
    opcao02(n);

    return (0);
}

/*Por exemplo, o jeito mais simples, mostrado abaixo, varia a, b e c
 entre 1 e n. Ou seja, testaremos (n-1)*(n-1)*(n-1) combinações.  */

void opcao01(int n)
{
    int a, b, c;
    for (a = 1; a < n; a++)
        for (b = 1; b < n; b++)
            for (c = 1; c < n; c++)
                if (a+b+c == n)
                    printf ("%d\t%d\t%d\n", a, b, c);


}

/* A versão abaixo é muito mais "esperta". Em vez de gerar e testar uma
 quantidade enorme de "candidatos", ela varia apenas a e b (com b nunca chegando
 a um valor onde a+b>n), "completando" c para que a soma seja igual a n. Na
 verdade, nem precisamos usar uma variável para c!

   Este tipo de preocupação pode parecer preciosismo, mas na verdade é
 extremamente importante. Realizar a mesma tarefa usando menos processamento
 é uma preocupação fundamental para criarmos algoritmos eficientes. */

void opcao02(int n)
{
    int a, b;

    for (a = 1; a < n; a++)
        for (b = 1; b < n-a; b++)
            printf ("%d\t%d\t%d\n", a, b, n-a-b);

}
