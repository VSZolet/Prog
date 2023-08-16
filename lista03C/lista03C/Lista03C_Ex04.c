/* A chave para entender este problema é enxergar o padrão. Desenhe os losangos
 para diferentes valores de n. Observe que a cada linha temos um número de
 espaços seguido de um número de caracteres visíveis. Na primeira linha, temos
 exatamente n espaços seguidos de 1 caractere visível. Para cada linha seguinte,
 o número de espaços à esquerda diminui em 1, e o número de caracteres visíveis
 aumenta em 2. Isso se repete até que tenhamos 0 espaços e 2n+1 caracteres
 visíveis. O número de espaços então volta a aumentar, até que no fim temos
 novamente n espaços à esquerda e 1 caractere visível. Este é o tipo de padrão
 que a imensa maioria NÃO VAI enxergar se simplesmente tentar fazer o código,
 sem planejar antes. O maior desafio aqui não é a sintaxe da linguagem C, e não
 tem relação com funções de bibliotecas ou com o conhecimento da linguagem. O
 grande desafio é enxergar o padrão que gera o losango.

 Existem várias soluções possíveis para este problema, mas todas elas envolvem
 controlar o número de espaços e de caracteres visíveis que precisam ser
 impressos a cada linha. Eu poderia, por exemplo, ter inicializado n_espacos e
 direcao_espacos dentro do for, e ter feito o incremento ali também. Poderia
 também ter controlado separadamente o número de caracteres visíveis. Poderia
 ter usado dois loops separados, um enquanto o número de espaços diminui e outro
 enquanto aumenta. E por aí vai.

 É bom também imaginar o quanto o código abaixo ficaria mais confuso se todas as
 variáveis tivessem nomes como "a" ou "b".  - Prof. Bogdan*/

#include <stdio.h>
main()
{
    char caractere; /* O caractere especificado pelo usuário. */
    int n; /* O parâmetro usado para calcular a largura máxima. */
    int largura_max; /* A largura máxima do losango (no centro). */
    int n_linha; /* Número da linha atual. */
    int n_espacos; /* Número de espaços que queremos em uma linha. */
    int direcao_espacos; /* Sempre 1 ou -1, nos diz se o número de espaços vai
                            aumentar ou diminuir a cada iteração. */

    printf("Digite o caractere e o tamanho: ");
    scanf ("%c %d", &caractere, &n);

    largura_max = n*2+1; /* Largura máxima e altura do losango. */
    n_espacos = n; /* Começamos com n espaços. */
    direcao_espacos = -1; /* Começamos diminuindo o número de espaços em 1 a
                             cada iteração. */
    for (n_linha = 0; n_linha <= largura_max; n_linha++)
    {
        int i; /* Um contador genérico. */

        /* Imprime um punhado de espaços. */
        for (i = 0; i < n_espacos; i++)
            printf (" ");

        /* Imprime caracteres visíveis. O número de caracteres é dado pela
           largura total menos o dobro do número de espaços. */
        for (i = 0; i < largura_max - (n_espacos*2); i++)
            printf ("%c", caractere);

        printf ("\n"); /* Terminamos esta linha! */

        if (!n_espacos) /* Se o número de espaços chegou a 0, vamos começar a
                           aumentar o número de espaços. */
            direcao_espacos = 1;

        n_espacos += direcao_espacos; /* Atualiza o número de espaços. */
    }


}

