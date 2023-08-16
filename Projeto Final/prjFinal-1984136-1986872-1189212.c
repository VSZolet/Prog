#include <stdio.h>
#include <time.h>
#include <math.h>

#include "gerador_de_testes.h"
#include "trabalho3.h"
#include "imagem.h"

int contaVeiculos (Imagem* img, Imagem* bg, int contagem [N_TIPOS_DE_VEICULOS]){

    Imagem* aux, *aux2;

    int i, j, k, f, f2, filtro,
        limiar=10, rotulo, r=10,
        contador[256]={0};

    char nome_saida[25];

    aux=criaImagem(img->largura, img->altura, 1); /* gerado para trabalhar a contagem sem precisar mexer diretamente com a imagem original */
    aux2=criaImagem(img->largura, img->altura, 1); /* gerado para eliminar algumas coisas, como as bordas (descrito abaixo) */

    for(i=0;i<img->altura;i++){ /** Escalas de cinza e Eliminacao de fundo */
    /*  utilizando a Imagem aux foi passado para ela uma copia da imagem apenas com uma das cores, fazendo assim uma escala de cinza.
        foi utilizado então o modulo dos dados da imagem - dados do background para eliminar maior parte do fundo da imagem resultando, deixando apenas carros */
        for(j=0;j<img->largura;j++){
            aux->dados[0][i][j]=abs(img->dados[0][i][j]-bg->dados[0][i][j]);
        }
    }

    for(k=0; k<2; k++){ /** Faz Filtragem e Limiarizacao duas vezes, para melhor visualizacao dos carros*/
    /*  uma vez que apenas uma filtragem estava causando erros nos ônibus de cor mais clara, foi utilizado um filtro menor e em looping 2 vezes,
        junto com a limiar, resultado assim em uma imagem mais clara dos veiculos claros */
        for (i=5; i<aux->altura-5; i++){ /***Filtragem*/
            for (j=5; j<aux->largura-5; j++){
                filtro=0;
                for (f=-5; f<5; f++){
                    for(f2=-5; f2<5; f2++){
                        filtro+=aux->dados[0][i+f][j+f2];
                    }
                }
                filtro=filtro/121;
                aux->dados[0][i][j] = filtro;
            }
        }

        for(i=6;i<img->altura-6;i++){ /** Limiar*/
        /* de forma empirica foi constatado que a limiar precisava ser de valor 10, ou estaria perdendo detalhes ou mantendo detalhes. */
            for(j=6;j<img->largura-6;j++){
                if(aux->dados[0][i][j]<limiar){
                    aux->dados[0][i][j]=0;
                }
                else{
                    aux->dados[0][i][j]=255;
                }
                aux2->dados[0][i][j]=aux->dados[0][i][j]; /* e passado para o aux2 para eliminar a borda, na funcao abaixo */
            }
        }
    }

    for(i=0; i<aux->altura; i++){ /** Elimina borda*/
        /* aqui e passado entao do aux2 novamente para o aux, desde o 0 e ate o fim, para eliminar a borda, uma vez que ela e uma imagem toda de zeros. */
        for(j=0; j<aux->largura; j++){
            aux->dados[0][i][j]=aux2->dados[0][i][j];
        }
    }

    for(i=0; i<aux->altura; i++){ /** Inverte Cores*/
        /* Para o teste numero 4 foi entao idealizado a tentativa de trabalhar com as cores inversas, para incurtar alguns "if"s nos Rotulos */
        for(j=0; j<aux->largura; j++){
            if(aux->dados[0][i][j]==0)
                aux->dados[0][i][j]=255;
            else
                aux->dados[0][i][j]=0;
        }
    }

    for(i=1; i<aux->altura-1; i++){ /** Rotulo Ida*/
        /* Para o rotulo de ida foi gerado alguns condicionais de acordo com o metodo de rotulacao explicado em sala */
        for(j=1; j<aux->largura-1; j++){
            if(aux->dados[0][i][j]!=255){
                if(aux->dados[0][i-1][j-1]==0 && aux->dados[0][i-1][j]==0 &&
                   aux->dados[0][i][j-1]==0 && aux->dados[0][i+1][j-1]==0){
                        aux->dados[0][i][j]=r;
                        r++;
                }
                else{
                    rotulo = r;

                    if(aux->dados[0][i-1][j-1]!=0 && aux->dados[0][i-1][j-1]<rotulo){
                        rotulo = aux->dados[0][i-1][j-1];
                    }
                    if(aux->dados[0][i-1][j]!=0 && aux->dados[0][i-1][j]<rotulo){
                        rotulo = aux->dados[0][i-1][j];
                    }
                    if(aux->dados[0][i][j-1]!=0 && aux->dados[0][i][j-1]<rotulo){
                        rotulo = aux->dados[0][i][j-1];
                    }
                    if(aux->dados[0][i+1][j-1]!=0 && aux->dados[0][i+1][j-1]<rotulo){
                        rotulo = aux->dados[0][i+1][j-1];
                    }
                    aux->dados[0][i][j]=rotulo;
                }
            }
        }
    }

    r=10; /* reinicia o valor de r novamente para iniciar a volta */

    for(i=aux->altura-2; i>0 ;i--){ /** Rotulo volta*/
        for(j=aux->largura-2; j>0; j--){
            if(aux->dados[0][i][j]!=255){
                if(img->dados[0][i+1][j+1]==0 && aux->dados[0][i+1][j]==0 &&
                   aux->dados[0][i][j+1]==0 && aux->dados[0][i-1][j+1]==0){
                        aux->dados[0][i][j]=r;
                        r++;
                }
                else{
                    rotulo = r;

                    if(aux->dados[0][i+1][j+1]!=0 && aux->dados[0][i+1][j+1]<rotulo){
                        rotulo = aux->dados[0][i+1][j+1];
                    }
                    if(aux->dados[0][i+1][j]!=0 && aux->dados[0][i+1][j]<rotulo){
                        rotulo = aux->dados[0][i+1][j];
                    }
                    if(aux->dados[0][i][j+1]!=0 && aux->dados[0][i][j+1]<rotulo){
                        rotulo = aux->dados[0][i][j+1];
                    }
                    if(aux->dados[0][i-1][j+1]!=0 && aux->dados[0][i-1][j+1]<rotulo){
                        rotulo = aux->dados[0][i-1][j+1];
                    }

                    aux->dados[0][i][j]=rotulo;
                }
            }
        }
    }

    /** A ideia geral desta parte seria verificar quais as quantias totais de cada rotulo gerado, uma vez que cada veiculo iria possuir seu valor proprio.
        Uma vez que o rotulo fosse encontrado teriamos uma nocao da media entre uma moto, os 3 tipos de carro, os doi veiculos medios e os caminhoes grandes.
        Porem como nenhum dos dois metodos de rotular ficou 100% certo nunca foi possivel verificar se essa parte realmente faria seu trabalho */

    for(i=0; i<aux->altura; i++){ /** Contagem*/
        for (j=0; j<aux->largura; j++){
        /* Uma vez que o contador e um vetor de ´256] (indo de 0 ate 255), o mesmo recebe o rotulo e em seguida o rotulo aumenta no contador, em sua respectiva casa. */
            rotulo=aux->dados[0][i][j];
            contador[rotulo]++;
        }
    }

    for(i=0; i<256; i++){ /** Testes empiricos */
    /* Esse laco serviria para verificar quais os contadores que foram preenchidos com algo, tendo assim uma media para cada tipo de veiculo */
        if (contador[i]!=0){
            printf("%d: %d\n", i, contador[i]);
        }
    }

    /** Aqui seria preenchida uma função onde iria verificar cada uma das 256 posicoes do vetor, e ai ele iria verificar se esta em qual dos intervalos
        tirados a partir do printf anterior, gerado empiricamente, para aumentar +1 em "contagem[N_TIPOS_DE_VEICULOS]" com seu respectivo tipo.
        Um prototipo disto seria:

        contagem[N_TIPOS_DE_VEICULOS]={0};          Inicialmente zerando o contador, para não haver enganos com lixo.

        for(i=0; i<256; i++){
            if(contador[i]!=0){
                if(contador[i]>=x && contador[i]<y){    Onde x e y seriam o menor valor encontrado para moto e o menor para os carros, respectivamente.
                    contagem[0]++;
                }
                else if(contador[i]>=y && contador[i]<z){    Onde z seria o valor encontrado para o menor veiculo medio (onibus e caminhao pequeno).
                    contagem[1]++;
                }

        e assim por diante, gerando os 4 contadores. */

    /* Imprimindo a imagem final de aux para verificar como ficou sua aparencia rotulada, para sabermos se cada carro realmente esta com uma cor separada */
    sprintf(nome_saida, "visualizacao.bmp");
    salvaImagem(aux, nome_saida);
    destroiImagem(aux);

    return 0;
}
