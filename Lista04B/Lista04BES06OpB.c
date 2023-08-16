#include<stdio.h>

int testeRegular (int numero);

int main (){

    int numero;

    printf("insira um numero para testar sua regularidade: ");
    scanf("%d", &numero);

    if (testeRegular(numero)==1)
        printf("\nO Numero e regular.");
    else
        printf("\nO Numero nao e regular.");
}

int testeRegular (int numero){

    while (numero!=1){
        if (numero%2==0)
            numero/=2;
        else{
            if (numero%3==0)
                numero/=3;
            else{
                if (numero%5==0)
                    numero/=5;
                else
                    return 0;
            }
        }
    }
    return 1;
}
