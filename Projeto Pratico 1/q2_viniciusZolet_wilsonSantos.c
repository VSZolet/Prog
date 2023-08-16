#include<stdio.h> // Vinicius Schnaider Zolet 1984136 && Wilson Felipp dos Santos 1986872

int testeEuler (int a, int b, int c, int d, int e){ // eh criada a funcao para caso ele encontre o resultado, dar o return e parar a funcao.
    for(a=1; a<150;a++){ // comecando o teste por baixo e elevando até 200 (foi feito primeiramente em 1000, porem achou resultados diferentes).
        for(b=a+1; b<150;b++){ // b=a+1 para não ficar redundante, então sempre que a aumentar 1, b não ira iniciar de 1.
            for(c=b+1; c<150;c++){ // aqui e nos outros esse mesmo processo se repetira, para eliminar calculos nao necessarios.
                for(d=c+1; d<150; d++){
                    for (e=d+1; e<150; e++){
                        if ((a*a*a*a*a)+(b*b*b*b*b)+(c*c*c*c*c)+(d*d*d*d*d)==(e*e*e*e*e)){ // pois se cada valor elevado a quinta corresponder, ira imprimir.
                            printf("%d^5 + %d^5 + %d^5 + %d^5 = %d^5\n", a,b,c,d,e);
                            return 0; // ira parar de procurar resultados apos encontrar o primeiro, finalizando o programa e parando a busca, ganhando tempo.
                        }
                    }
                }
            }
        }
    }
}

main (){

    int a,b,c,d,e; // 4 valores de soma + 1 resultado, para serem usados na funcao;

    testeEuler(a,b,c,d,e); //
}
