#include <stdio.h>

int ultimoSegmento(int a, int b);
int segmento(int a, int b);

int main()
{
    int a, b, retorno;

    //leitura da entrada
    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &a, &b);

    //invoca a função
    retorno = segmento(a, b);

    //dependendo do retorno, imprime a mensage adequada
    if (retorno==1)
        printf("b eh segmento de a");
    else if (retorno==2)
        printf("a eh segmento de b");
    else
        printf("nao eh segmento");

    return 0;
}

 int segmento(int a, int b)
 {

    int subseq = 0, // variavel indicadora que controla se é subsequencia
        trocou = 0, //variavel indicadora que controla se houve troca entre a e b (para saber o retorno)
        maior, menor;

    if (a > b) // como a funcao depende que o primeiro argumento passado seja o maior, eh preciso fazer consistencia de dados
    {
        maior = a;
        menor = b;
    }
    else
    {
        maior = b;
        menor = a;
        trocou = 1; // controle para saber se a eh segmento de b ou o contrário
    }

    while (maior >= menor) // enquanto for valida esta condicao
    {
        if (ultimoSegmento(maior,menor) == 1){ // se for for o ultimo segmento...
            subseq = 1; //... altera indicador
            break; // e interrompe o laço
        }

        maior = maior/10; // caso contrário, retira o último dígito do maior número e retoma a repetição (para verificar se o menor é agora o ultimo segmento)
    }

    if (subseq == 1 && trocou == 0) //dependendo dos valores das variaveis indicadoras, faz o retorno adequado
        return 1;
    else if (subseq == 1 && trocou == 1)
        return 2;
    else
        return 0;
}

int ultimoSegmento(int a, int b)
{

    while (b != 0 && a % 10 == b % 10) //enquanto ainda tiver valores de b e os dígitos dos dois numeros forem iguais...
    {
        a = a/10; //atualiza o valor de a, "tirando" o ultimo digito
        b = b/10; //atualiza o valor de b, "tirando" o ultimo digito
    }

    if (b == 0) // se o b chegou ao final, significa que todo o numero b foi percorrido e os digitos sao iguais aos de a
        return 1;
    else
        return 0;

}
