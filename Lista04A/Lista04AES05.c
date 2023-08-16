#include<stdio.h>

int sequenciaFibonacci (int numero){

    int fibonacci, anterior1, anterior2, aux;
    if (numero==0){
        return (0);
    }
    else if (numero==1){
        return (1);
    }
    else
        anterior1 = 1;
        anterior2 = 0;
        fibonacci = anterior1+anterior2;
        for(aux=3; aux<=numero; aux++){
            anterior2 = anterior1;
            anterior1 = fibonacci;
            fibonacci = anterior1+anterior2;
    }
    return fibonacci;
}
main(){

    int numero;
    printf("Entre com um n para sequencia de Fibonacci: ");
    scanf("%d", &numero);
    printf("\nO numero eh: %d\n", sequenciaFibonacci(numero));

}
