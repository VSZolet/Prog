#include<stdio.h>
int testarCaracter (char caracter){
    if (caracter >= 65 && caracter <= 90)
        return 1;
    else if (caracter >= 97 && caracter <= 122)
        return 2;
    else if (caracter >= 48 && caracter <= 57)
        return 3;
    else
        return 0;
}

main(){

    char caracter;
    int teste;

    printf("Entre com um caracter: ");
    scanf("%c", &caracter);
    teste = testarCaracter(caracter);
    printf("%d", teste);
}
