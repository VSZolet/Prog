#include<stdio.h>

int testePiramidal (int sequencia);

int main(){

    int sequencia;

    printf("Insira um total para sequencia: ");
    scanf("%d", &sequencia);

    if (testePiramidal(sequencia)>=1)
        printf("\ne %d-piramidal", testePiramidal(sequencia));
    else
        printf("\nnao eh piramidal");
}

int testePiramidal(int sequencia){

    int numero, contador1=0, contador2=0, contadorPi=0, aux;

    printf("\nInsira um numero: ");
    scanf("%d", &numero);

    for (aux=1; aux<sequencia; aux++){

        while (numero%2==0 && aux<sequencia){
            printf("\nInsira um numero: ");
            scanf("%d", &numero);

            contador1++;
            aux++;
        }
        if (contador1<contador2){
            return 0;
        }
        contador2=contador1;
        contador1=0;
        contadorPi++;
        while (numero%2!=0 && aux<sequencia){
            printf("\nInsira um numero: ");
            scanf("%d", &numero);

            contador1++;
            aux++;
        }

        if (contador1<contador2){
            return 0;
        }
        contador2=contador1;
        contador1=0;
        contadorPi++;
        aux--;
    }
    return contadorPi;
}
