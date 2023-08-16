#include <stdio.h>
#include <string.h>
/* Vinicius Schnaider Zolet 1984136 && Wilson Felipp dos Santos 1986872 && Pedro Henrique Belotto Frankiewicz 1189212; */
char traduzCodigo(char codigo[], char traduzido[]) /* ira receber o codigo inserido pelo usuario e ira transformar para uma sequencia; */
{
    char tradutor[21][22]= /* a matriz consiste em linhas de 0 a 20, onde vai de A ate U, ja com as bases completas; */
        {
            {"tttttc"}, /* por exemplo, "ttt" + "ttc" do codigo A; */
            {"ttattgcttctcctactg"},
            {"attatcata"},
            {"atg"},
            {"gttgtcgtagtg"},
            {"tcttcctcatcgagtagc"},
            {"cctcccccaccg"},
            {"actaccacaacg"},
            {"gctgccgcagcg"},
            {"tattac"},
            {"taatagtga"},
            {"catcac"},
            {"caacag"},
            {"aataac"},
            {"aaaaag"},
            {"gatgac"},
            {"tgttgc"},
            {"tgg"},
            {"cgtcgccgacggagaagg"},
            {"ggtggcggaggg"},
            {"gaagag"}
        };

    int i;
    for(i=0;i<strlen(codigo);i++){
    /*  strlen(codigo) pois ele ira ate o fim do codigo, nao precisando se preocupar em adivinhar o tamanho do codigo inserido pelo usuario.

        Nas duas linhas abaixo e' usado [i]-65 pois os numeros maisuculos na tabela ASCII comecam em 65,
        entao nao eh preciso converter de um em um, mas sim tirar proveito da tabela para uma "auto-conversao". */

        strcpy(traduzido, tradutor[codigo[i]-65]); /* strcopy fara a copia do tradutor para a string "traduzido"; */
        traduzido += strlen(tradutor[codigo[i]-65]); /* em seguida ira puxar o começo da string para onde acabou a copia, para nao copiar um por cima do outro */
    }

}

int contarSequencia(const char *traduzido[], const char *sequencia[]) /* essa funcao ira fazer a contagem de quantas vezes a sequencia esta contida no codigo; */
{   /** OBS: por condicao do strstr, char nao pode ser deixado sem o const ao ser trazido para a funcao.
        OBS2: Se o contador ficar como ponteiro, ele nao consegue fazer a contagem e passar de volta para a main, mesmo sem dar nenhum erro. **/

    int contador=0;
    char *procura = traduzido;

    while ((procura=strstr(traduzido,sequencia)) != NULL) /* vai fazer a procura da string traduzido dentro da sequencia e colocar em procura; */
    {
            traduzido += strlen(sequencia); /* se achar, irá tirar a parte traduzida ate essa parte que foi achada, nao passando por ela novamente; */
            contador++; /* ira gerar um contador, sabendo assim que achou pelo menos uma vez a sequencia desejada; */
    }
    return contador; /* com ponteiro, sem utilizar o return, nao estava voltando com o contador atualizado para a main. */
}

int main()
{
    char codigo[65], traduzido[1000], sequencia[1000]; /* 64 combinacoes+1 para \0 e 1000 para margem de erro; */
    int contador;

    printf("Entre com o codigo:\n");
    scanf("%s", codigo);
    printf("entre com a sequencia para buscar:\n");
    scanf("%s", sequencia);

    traduzCodigo(codigo,traduzido);
    printf("\nCodigo Traduzido: %s;\n", traduzido);
    contador=contarSequencia(&traduzido, &sequencia);

    printf("\n%d ocorrencias de %s\n", contador, sequencia);

}
