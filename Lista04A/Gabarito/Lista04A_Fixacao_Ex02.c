#include<stdio.h>

float calculaMedia(float nota1, float nota2, float nota3, char tipoMedia);

int main()
{
    //declaracao das variaveis
    float n1, n2, n3;
    char tipo;

    //leitura das entradas! O ideal eh fazer consistencia dos dados de entrada para evitar problemas!
    //tente digitar uma letra diferente de A ou P para ver o comportamento do programa
    printf("Digite as notas das tres provas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    fflush(stdin); //para limpar o buffer do teclado! Comente a linha e veja o que acontece!! No linux, use __fpurge()
    printf("Qual o tipo de media (A - aritmetica, P - ponderada): ");
    scanf("%c", &tipo);

    printf("A media eh: %f", calculaMedia(n1, n2, n3, tipo));

    return 0;
}

float calculaMedia(float nota1, float nota2, float nota3, char tipoMedia)
{
    // você também poderia criar uma variável média, atribuir o valor da expressão adequada e fazer return(media) após o if-else.
    if(tipoMedia=='A')
        return((nota1+nota2+nota3)/3);
    else if(tipoMedia=='P')
        return((nota1*5+nota2*3+nota3*2)/10);
}
