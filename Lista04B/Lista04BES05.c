#include<stdio.h>

int ultimosDigitos(int numero1, int numero2);
int testeSegmento(int numero1, int numero2);

int main(){

    int numero1, numero2;

    printf("Entre com 2 numeros:\n");
    scanf("%d %d", &numero1, &numero2);

    if(testeSegmento(numero1, numero2)==1)
        printf("\nNumero 1 e segmento do numero 2.");
    else if(testeSegmento(numero1, numero2)==2)
        printf("\nNumero 2 e segmento do numero 1.");
    else
        printf("\nUm nao e segmento do outro.");
}

int ultimosDigitos(int numero1, int numero2){

    int maior, menor, digitos;

    if (numero2>numero1){
        menor = numero1;
        maior = numero2;
        digitos = 1;
    }
    else{
        menor = numero2;
        maior = numero1;
        digitos = 2;
    }


    while (menor!=0){
        if (maior%10!=menor%10)
            return 0;
        maior /= 10;
        menor /= 10;
    }
    return digitos;
}

int testeSegmento(int numero1, int numero2){

    int maior, menor;

    if (numero2>numero1){
        while(numero2>=numero1){
            if(ultimosDigitos(numero1,numero2)==1 || ultimosDigitos(numero1,numero2)==2){
                return ultimosDigitos(numero1,numero2);
            }
            numero2/=10;
        }
    }
    else{
        while(numero1>=numero2){
            if(ultimosDigitos(numero1,numero2)==1 || ultimosDigitos(numero1,numero2)==2){
                return ultimosDigitos(numero1,numero2);
            }
            numero1/=10;
        }
    }
}
