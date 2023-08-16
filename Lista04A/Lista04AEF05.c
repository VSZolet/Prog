#include<stdio.h>
int retornMaior (int numero1, int numero2, int numero3){
    if (numero1 > numero2){
        if (numero1 > numero3)
            return numero1;
        else
            return numero3;
    }
    else if (numero2 > numero1){
        if (numero2 > numero3)
            return numero2;
        else
            return numero3;
    }
    else if (numero3 > numero1){
        if (numero3 > numero2)
            return numero3;
        else
            return numero2;
    }
}
main(){

    int numero1, numero2, numero3, maior;

    printf("Entre com 3 numeros, separadamente:\n");
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    maior = retornMaior(numero1, numero2, numero3);
    printf("%d é o maior!", maior);

}
