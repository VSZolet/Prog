#include<stdio.h>
void testeSomatoria(int numero){


    int a, b, c;

    for(a=1; a<numero; a++){
        for(b=1; b<numero; b++){
            for(c=1; c<numero; c++){
                if (a+b+c==numero){
                    printf("%d+%d+%d=%d\n", a,b,c,numero);
                }
            }
        }
    }
}
main(){

    int numero;

    printf("Entre com um número: ");
    scanf("%d", &numero);
    printf("\nOs número que somam %d são:\n", numero);

    testeSomatoria(numero);

}
