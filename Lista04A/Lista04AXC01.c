#include<stdio.h>
float indiceMassaCorporal (float altura, float peso){
    return peso/(altura*altura);
}
void classificacaoIMC (float imc);

main(){

    float altura, peso, imc;

    printf("Entre com altura e peso, respectivamente:\n");
    scanf("%f %f", &altura, &peso);

    imc = indiceMassaCorporal(altura, peso);

    printf("\nSeu IMC eh: %.1f e ", imc);

    classificacaoIMC(imc);

}

void (classificacaoIMC(float imc)){

    if (imc < 18.5)
        printf("voce esta abaixo do peso.\n");
    else if (imc >= 18.5 && imc <= 25)
        printf("voce esta no peso normal.\n");
    else if (imc > 25 && imc <= 30)
        printf("voce esta acima do peso.\n");
    else
        printf("voce esta obeso.\n");
}
