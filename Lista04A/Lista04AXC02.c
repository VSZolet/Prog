#include<stdio.h>

int menorDivisorComum (int entrada1, int entrada2);

main(){

    int entrada1, entrada2, mdc;

    printf("Entre com 2 numeros para buscar o menor divisor comum:\n");
    scanf("%d %d", &entrada1, &entrada2);

    mdc = menorDivisorComum(entrada1, entrada2);

    printf("\nO menor divisor comum e: %d\n", mdc);

}

int menorDivisorComum(int entrada1, int entrada2){

    while(entrada1 > entrada2 || entrada1 < entrada2){
        if (entrada1 > entrada2)
            entrada1 = entrada1-entrada2;
        else
            entrada2 = entrada2-entrada1;
        printf("\n%d %d\n", entrada1, entrada2);
    }
    return entrada1;
}
