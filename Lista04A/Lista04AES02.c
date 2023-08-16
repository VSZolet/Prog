#include<stdio.h>
int funcaoIdade(int diaNasc, int mesNasc, int anoNasc){

    int diaAtual, mesAtual, anoAtual;

    printf("Entre com a dia, mes e ano, respectivamente, atual:\n");
    scanf("%d %d %d", &diaAtual, &mesAtual, &anoAtual);

    if (mesNasc>mesAtual)
        return anoAtual-anoNasc-1;
    else if (mesNasc=mesAtual)
        if (diaNasc>diaAtual)
            return anoAtual-anoNasc-1;
        else
            return anoAtual-anoNasc;
    else
        return anoAtual-anoNasc;

}
main(){

    int diaNasc, mesNasc, anoNasc, idade;

    printf("Digite dia, mes e ano, respectivamente, de nascimento:\n");
    scanf("%d %d %d", &diaNasc, &mesNasc, &anoNasc);

    idade = funcaoIdade(diaNasc, mesNasc, anoNasc);

    printf("%d é a idade!", idade);
}
