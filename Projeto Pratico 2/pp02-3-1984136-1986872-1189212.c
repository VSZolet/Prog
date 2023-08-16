/* Vinicius Schnaider Zolet 1984136 && Wilson Felipp dos Santos 1986872 && Pedro Henrique Belotto Frankiewicz 1189212 */

void mudaGanho(double* dados, unsigned long n_amostras, double ganho)
{
    int i;

    for(i=0;i<n_amostras;i++) /* uma vez que "n_amostras" e o tamanho do vetor "dados", e utilizado como limitante dos lacos. */
    {
        dados[i]*=ganho; /* dados da posicao atual sera multiplicada pelo valor inserido para "ganho",
                            gerando assim aumento ou dimunuicao do volume do arquivo de audio. */
    }

}

void ruidoPeriodico (double* dados, unsigned long n_amostras, unsigned short intervalo)
 {
     int i;

     for (i=0;i<n_amostras;i++)
     {
         if(i%(intervalo-1)==0 && (i%(intervalo-1))%2==0)
         /* Toda vez que o resto da divisao de i pelo intervalo desejado-1 for 0 e o valor for par             ele fara a transformacao dessa posição para 1. */
         {
             dados[i]=1;
         }
         else if(i%(intervalo-1)==0 && (i%(intervalo-1))%2==1)
         /*     E quando ele atingir novamente o valor de intervalo-1, mas for impar, sera substituido o valor de dados para -1 */
         {
             dados[i]=-1;
         }
     }
 }

void removeRuido (double* dados, unsigned long n_amostras)
{
    int i;
    double *mediana; /* armazenara os valores do filtro da mediana. */

    mediana=(double *)malloc(n_amostras*sizeof(double)); /* pois o tamanho de "dados" e "mediana" precisa ser igual. */

    for(i=1;i<n_amostras-1;i++)
    {
    /* Nesses tres condicionais ele ira verificar qual o menor valor dentre o valor atual e seus vizinhos subsequentes */
        if(dados[i]<=dados[i+1] && dados[i]<=dados[i-1])
        {
        /* E em seus condicionais internos, sera verificado qual e' o menor dentre os outros 2, descobrindo assim a mediana */
            if(dados[i+1]<=dados[i-1])
            {
                mediana[i]=dados[i+1]; /* e colocando a mediana encontrada no vetor "mediana" na posicao atual */
            }
            else
            {
                mediana[i]=dados[i-1];
            }
        }
        else if(dados[i-1]<=dados[i] && dados[i-1]<=dados[i+1])
        {
            if(dados[i+1]<=dados[i])
            {
                mediana[i]=dados[i+1];
            }
            else
            {
                mediana[i]=dados[i];
            }
        }
        else
        {
            if(dados[i-1]<=dados[i])
            {
                mediana[i]=dados[i-1];
            }
            else
            {
                mediana[i]=dados[i];
            }
        }
    }
    for(i=1;i<n_amostras-1;i++)
    /*  em seguida ira percorrer novamente esse looping, trocando assim os dados das posicoes atuais para a mediana atual,
        eliminando o ruido e gerando um audio limpo. */
    {
        dados[i]=mediana[i];
    }
}
