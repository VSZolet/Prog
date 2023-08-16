#include<stdio.h>

int digitoVerificador(int digito1, int digito2, int digito3){
    return (((digito1*1)+(digito2*2)+(digito3*3))%11)%10;
}
main(){

    int digito1, digito2, digito3, verificador;

    printf("Entre com 3 dígitos, separadamente:\n");
    scanf("%d %d %d", &digito1, &digito2, &digito3);

    verificador = digitoVerificador(digito1, digito2, digito3);

    printf("O digito verificador é: %d", verificador);

}
