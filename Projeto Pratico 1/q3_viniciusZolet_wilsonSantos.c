#include<stdio.h> // Vinicius Schnaider Zolet 1984136 && Wilson Felipp dos Santos 1986872

int main (){

    char romano[16]; // string para receber romanos, onde o maior numero romano possivel tem 15 caracteres.
    int aux, inteiro=0,
        arabico[16]={0}; // pre define 0, para caso o romano tenha menos de 15 caracteres.

    printf("Digite um numero romano: ");
    fgets(romano, 16, stdin);

    for (aux=0; aux<16; aux++){ // ira transformar cada romano para arabico,
        if (romano[aux]=='I'){ // pegando cada casa do string para sua respectiva casa do vetor arabico.
            arabico[aux]=1;
        }
        else if (romano[aux]=='V'){
            arabico[aux]=5;
        }
        else if (romano[aux]=='X'){
            arabico[aux]=10;
        }
        else if (romano[aux]=='L'){
            arabico[aux]=50;
        }
        else if (romano[aux]=='C'){
            arabico[aux]=100;
        }
        else if (romano[aux]=='D'){
            arabico[aux]=500;
        }
        else if (romano[aux]=='M'){
            arabico[aux]=1000;
        }

    }
    for (aux=0; aux<16; aux++){ // ira fazer a verificacao de se ele eh maior ou menor que o numero da frente
        if (arabico[aux]>=arabico[aux+1]){ // se ele for maior que o proximo numero, quer dizer que ele soma.
            inteiro=inteiro+arabico[aux];
        }
        else
            inteiro=inteiro-arabico[aux]; // se ele for menor, como em IV, ele ira subtrair. (1-5 neste caso).
    }

    printf("\nEm arabico e: %d", inteiro);
}
