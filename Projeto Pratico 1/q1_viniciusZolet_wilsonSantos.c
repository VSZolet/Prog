#include <stdio.h> // Vinicius Schnaider Zolet 1984136 && Wilson Felipp dos Santos 1986872

int primeiroDiaMes(int ano, int mes){ // Ira verificar qual dia da semana e o primeiro dia do mes escolhido, naquele ano escolhido.

    if (mes>2){
        return (1+(2*mes)+(3*(mes+1)/5)+ano+(ano/4)-(ano/100)+(ano/400)+2)%7;
    }
    else{
        return (1+(2*(mes+12))+(3*(mes+13)/5)+(ano-1)+((ano-1)/4)-((ano-1)/100)+((ano-1)/400)+2)%7;
    }
}

int testeBissexto(int ano){ // verificar se o ano e bissexto, para saber os dias totais de fevereiro.

    if(ano%4 == 0 && ano%100 != 0 || ano%400 == 0){
        return 1; // fevereiro = 29 dias.
    }
    else{
        return 0; // fevereiro = 28 dias.
    }
}

int impressaoMes(int mes){ // impressao do nome do mes de acordo com mes escolhido, nao encontramos forma mais facil além de varios ifs.

    if(mes==1)
        printf("\n      FEVEREIRO");
    else if(mes==2)
        printf("\n      JANEIRO");
    else if(mes==3)
        printf("\n      MARCO");
    else if(mes==4)
        printf("\n      ABRIL");
    else if(mes==5)
        printf("\n      MAIO");
    else if(mes==6)
        printf("\n      JUNHO");
    else if(mes==7)
        printf("\n      JULHO");
    else if(mes==8)
        printf("\n      AGOSTO");
    else if(mes==9)
        printf("\n      SETEMBRO");
    else if(mes==10)
        printf("\n      OUTUBRO");
    else if(mes==11)
        printf("\n      NOVEMBRO");
    else
        printf("\n      DEZEMBRO");

}

int main(){

    int ano, mes, primeirodia, aux, aux2=1;
    int meses[12]={31,28,31,30,31,30,31,31,30,31,30,31}; // ira pre-estipular a quantia total de dias de cada mes, para a impressao.
    if(testeBissexto(ano)==1){ // se for bissexto, muda janeiro de 28 para 29 dias.
        meses[1]=29;
    }

    printf("Entre com o ano: ");
    scanf("%d", &ano);
    do{
        printf("Entre com o numero do mes(1 - 12): ");
        scanf("%d", &mes);
    }while (mes<1 || mes>12);

    primeirodia = primeiroDiaMes(ano, mes);
    if (primeirodia==0){
        primeirodia=7; // pois sabado dara 0, ficando assim sem espaco e comecando em domingo. Isso ira corrigir o problema da formula usada.
    }

    impressaoMes(mes);
    printf(" DE %d\n", ano);
    printf("\n DOM SEG TER QUA QUI SEX SAB\n");

    for(aux=1; aux<primeirodia; aux++){ // ira dar espaços para o primeiro dia ser impresso no dia da semana correto.
        printf("    ");
    }

    for(aux=primeirodia;aux<(meses[mes-1]+primeirodia);aux++){ // aux=primeiro dia para fazer a quebra do if inserido no codigo e mes-1 pois mes 1 = meses[0].
        printf("%4d", aux2); //aux2 sera o controlador de qual dia sera impresso.
        if (aux%7==0){ // fara a quebra de linha quando atingir 7 digitos por linhas.
            printf("\n");
        }
        aux2++; // incrementa 1 para o proximo dia
    }
}
