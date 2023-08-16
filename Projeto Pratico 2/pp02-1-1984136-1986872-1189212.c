#include <stdio.h>
// Vinicius Schnaider Zolet 1984136 && Wilson Felipp dos Santos 1986872 && Pedro Henrique Belotto Frankiewicz 1189212;
int testeBissexto(int ano){ // verificar se o ano e bissexto, para saber os dias totais de fevereiro;

    if(ano%4 == 0 && ano%100 != 0 || ano%400 == 0){
        return 1; // fevereiro = 29 dias.
    }
    else{
        return 0; // fevereiro = 28 dias.
    }
}

int calculoDias(int dia, int mes, int diasMes[]){ // ira ver quantos dias se passaram desde o primeiro dia do ano;

    int aux, diasTotais;
    for (aux=0;aux<mes-1;aux++){ // mes-1 pois o vetor comeca em 0, entao se fev=2, no vetor sera =1;
        diasTotais+=diasMes[aux]; //ira utilizar o valor nos vetores para somar os dias dos meses ja passados;
    }
    diasTotais+=dia; // recebe na soma os dias que se passaram no mes nao completo;

    return diasTotais;
}

void impressaoData(int diaD, int mesD, int anoD, int ano){

    if (testeBissexto(ano)==1){ // Se for bissexto, ou o ano comemorado Sao Tiby, precisa de uma atencao especial;
        if (mesD==0 && diaD==60){ // todo ano bissexto tera um dia especial entre o 59 e o 60;
            printf("\nDia de Sao Tiby de %d YOLD!\n", anoD);
            return; // ira parar a funcao, ou ele ira imprimir como se fosse dia 60, mesmo noa sendo;
        }
        else if (mesD>0 || diaD>60){ // se for bissexto e acima do 60o dia do ano,
            diaD-=1; // tira 1 dia para deixar em ordem, excluindo o dia de Sao Tiby da soma;
            if (diaD==0){
                diaD=73; // repete o mesmo processo de arrumar o dia para 73, igual feito na main;
                mesD-=1; // Igualmente para o mês, igual an main;
            }
        }
    }
    if (mesD==0){ // em seguida verifica qual o mes e faz a impressao do mes e do dia, ja arrumado caso necessario;
        printf("\n%do dia do Caos de %d YOLD.\n", diaD, anoD);
        if (diaD==5){
            printf("E Mungday, dia de Hung Mung!\n");
        }
        else if (diaD==50){
            printf("E Chaoflux, o dia da estacao do Caos!\n");
        }
    }
    else if (mesD==1){
        printf("\n%do dia da Discordia de %d YOLD.\n", diaD, anoD);
        if(diaD==5){
            printf("E Mojoday, dia do Dr Van Van Mojo!\n");
        }
        else if (diaD==50){
            printf("e Discoflux, o dia da estacao da Discordia!\n");
        }
    }
    else if(mesD==2){
        printf("\n%do dia da Confusao  de %d YOLD.\n", diaD, anoD);
        if(diaD==5){
            printf("E Syaday, dia de Sri Syadasti!\n");
        }
        else if (diaD==50){
            printf("E Confuflux, o dia da estacao da Confusao!\n");
        }
    }
    else if(mesD==3){
        printf("\n%do dia da Burocracia de %d YOLD.\n", diaD, anoD);
        if(diaD==5){
            printf("E Zaraday, dia de Zarathud!\n");
        }
        else if (diaD==50){
            printf("E Burefflux, o dia da estacao da Burocracia!\n");
        }
    }
    else{
        printf("\n%do dia das Consequencias de %d YOLD.\n", diaD, anoD);
        if(diaD==5){
            printf("E Maladay, dia de Malaclypse o Anciao!\n");
        }
        else if (diaD==50){
            printf("E Afflux, dia da estacao das Consequencias!\n");
        }
    }
}

main (){

    int dia, mes, ano, diasTotais,
        diaD, mesD, anoD,
        diasMes[12]={31,28,31,30,31,30,31,31,30,31,30,31}; // Coloca o numero de dias do mes específico, de 0, janeiro, à 11, dezembro;

    printf("Insira um dia:");
    scanf("%d", &dia);
    printf("Insira um mes:");
    scanf("%d", &mes);
    printf("Insira um ano:");
    scanf("%d", &ano);

    if (testeBissexto(ano)==1) //em seguida, se o ano entrado for bissexto ele mudará no vetor adicionando um dia;
        diasMes[1]=29;

    diasTotais=calculoDias(dia, mes, diasMes); //puxa a funcao, colocando o resultado na variavel;

    mesD=diasTotais/73; // o mes sera resultado de quantas vezes ja passaram 73 dias desde o comeco do ano, pois todo mes tem 73 dias;
    diaD=diasTotais%73; // os dias no mes serao a sobra da divisao, pois nao completou o mes ainda;
    if (diaD==0){ // para evitar erros, quando der 73 ele vai parar em 0 dias e adicionando 1 mes;
        diaD=73; // como seria errado, foi mudado de 0 para 73;
        mesD-=1; // e como 73 eh o ultimo dia e nao o primeiro, retira-se este mes extra;
    }
    anoD=ano+1166; //Calendario gregoriano comecou em 1166 do calendario Discordiano, esse valor e adicionado ao ano entrado;

    impressaoData(diaD, mesD, anoD, ano);

}
