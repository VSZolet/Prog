/* A chave para entender este problema � enxergar o padr�o. Desenhe os losangos
 para diferentes valores de n. Observe que a cada linha temos um n�mero de
 espa�os seguido de um n�mero de caracteres vis�veis. Na primeira linha, temos
 exatamente n espa�os seguidos de 1 caractere vis�vel. Para cada linha seguinte,
 o n�mero de espa�os � esquerda diminui em 1, e o n�mero de caracteres vis�veis
 aumenta em 2. Isso se repete at� que tenhamos 0 espa�os e 2n+1 caracteres
 vis�veis. O n�mero de espa�os ent�o volta a aumentar, at� que no fim temos
 novamente n espa�os � esquerda e 1 caractere vis�vel. Este � o tipo de padr�o
 que a imensa maioria N�O VAI enxergar se simplesmente tentar fazer o c�digo,
 sem planejar antes. O maior desafio aqui n�o � a sintaxe da linguagem C, e n�o
 tem rela��o com fun��es de bibliotecas ou com o conhecimento da linguagem. O
 grande desafio � enxergar o padr�o que gera o losango.

 Existem v�rias solu��es poss�veis para este problema, mas todas elas envolvem
 controlar o n�mero de espa�os e de caracteres vis�veis que precisam ser
 impressos a cada linha. Eu poderia, por exemplo, ter inicializado n_espacos e
 direcao_espacos dentro do for, e ter feito o incremento ali tamb�m. Poderia
 tamb�m ter controlado separadamente o n�mero de caracteres vis�veis. Poderia
 ter usado dois loops separados, um enquanto o n�mero de espa�os diminui e outro
 enquanto aumenta. E por a� vai.

 � bom tamb�m imaginar o quanto o c�digo abaixo ficaria mais confuso se todas as
 vari�veis tivessem nomes como "a" ou "b".  - Prof. Bogdan*/

#include <stdio.h>
main()
{
    char caractere; /* O caractere especificado pelo usu�rio. */
    int n; /* O par�metro usado para calcular a largura m�xima. */
    int largura_max; /* A largura m�xima do losango (no centro). */
    int n_linha; /* N�mero da linha atual. */
    int n_espacos; /* N�mero de espa�os que queremos em uma linha. */
    int direcao_espacos; /* Sempre 1 ou -1, nos diz se o n�mero de espa�os vai
                            aumentar ou diminuir a cada itera��o. */

    printf("Digite o caractere e o tamanho: ");
    scanf ("%c %d", &caractere, &n);

    largura_max = n*2+1; /* Largura m�xima e altura do losango. */
    n_espacos = n; /* Come�amos com n espa�os. */
    direcao_espacos = -1; /* Come�amos diminuindo o n�mero de espa�os em 1 a
                             cada itera��o. */
    for (n_linha = 0; n_linha <= largura_max; n_linha++)
    {
        int i; /* Um contador gen�rico. */

        /* Imprime um punhado de espa�os. */
        for (i = 0; i < n_espacos; i++)
            printf (" ");

        /* Imprime caracteres vis�veis. O n�mero de caracteres � dado pela
           largura total menos o dobro do n�mero de espa�os. */
        for (i = 0; i < largura_max - (n_espacos*2); i++)
            printf ("%c", caractere);

        printf ("\n"); /* Terminamos esta linha! */

        if (!n_espacos) /* Se o n�mero de espa�os chegou a 0, vamos come�ar a
                           aumentar o n�mero de espa�os. */
            direcao_espacos = 1;

        n_espacos += direcao_espacos; /* Atualiza o n�mero de espa�os. */
    }


}

