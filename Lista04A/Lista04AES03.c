#include<stdio.h>
int calculoResto (int Entrada1, int Entrada2, int Entrada3){
    return (Entrada1+Entrada2+Entrada3)%3;
}
int calculoVencedor(int vencedor, int Entrada1, int Entrada2, int Entrada3){
    if (calculoResto(Entrada1, Entrada2, Entrada3)==0)
        return vencedor = 0;
    else if (calculoResto(Entrada1, Entrada2, Entrada3)==1)
        return vencedor = 1;
    else
        return vencedor = 2;
}
main(){

    int Entrada1, Entrada2, Entrada3, resto,
    escolhaAle, escolhaMaria, escolhaRafa, vencedor;

    printf("Escolha um resto entre 0 e 2, respectivamente, para Alexandre, Maria e Rafael:\n");
    scanf("%d %d %d", &escolhaAle, &escolhaMaria, &escolhaRafa);
    printf("Entre 3 numeros, em ordem:\n");
    scanf("%d %d %d", &Entrada1, &Entrada2, &Entrada3);

    resto = calculoResto(Entrada1, Entrada2, Entrada3);
    vencedor = calculoVencedor(vencedor, Entrada1, Entrada2, Entrada3);

    if (escolhaAle == vencedor)
        printf("Com resto %d, Alexandre eh o vencedor.", resto);
    else if (escolhaMaria == vencedor)
        printf("Com resto %d, Maria eh a vencedora.", resto);
    else
        printf("Com resto %d, Rafael eh o vencedor.", resto);

}
