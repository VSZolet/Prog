#include<stdio.h>
main(){

    int numeral, testador,
        sequencia, auxs=1,
        veracidade=1,
        alternado=0, alttest=1, alttest2=1;


    printf("Insira o tamanho da sequência: ");
    scanf("%d", &sequencia);
    printf("Insira a sequência de números:\n");
    scanf("%d", &numeral);
    testador = numeral%2;

    while(auxs<sequencia){
        testador = numeral%2;
        while (auxs<sequencia && numeral%2==testador){
            scanf("%d", &numeral);
            auxs++;
            if (numeral%2==testador)
                alttest += 1;
        }
        while (auxs<sequencia){
            testador = (testador+1)%2;
            while (auxs<sequencia && numeral%2==testador){
                scanf("%d", &numeral);
                auxs++;
                alttest2+=1;
            }
        }
    }
    if (alttest!=alttest2)
        veracidade=0;
    if ((alttest!=alttest2) && (alttest==0 || alttest2==0))
        veracidade=1;

    if(veracidade == 1)
        printf("É um %d-Alternado", alttest);
    else
        printf("Não é alternado");
}
