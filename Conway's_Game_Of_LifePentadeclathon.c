#include<stdio.h>
#include<windows.h>
#define NL 18
#define NC 11

main(){

    int i, j, k,
        m[NL][NC]={0},
        n[NL][NC]={0};

    m[3][5]=1;
    m[4][4]=1; m[4][5]=1; m[4][6]=1;
    m[5][3]=1; m[5][4]=1; m[5][5]=1; m[5][6]=1; m[5][7]=1;
    m[12][3]=1; m[12][4]=1; m[12][5]=1; m[12][6]=1; m[12][7]=1;
    m[13][4]=1; m[13][5]=1; m[13][6]=1;
    m[14][5]=1;


    for(i=0;i<100;i++){
        system("cls");
        for(j=1;j<NL-1;j++){
            for(k=1;k<NC-1;k++){
                int vizinhos=0;

                vizinhos+=m[j-1][k-1]+  m[j][k-1]+  m[j+1][k-1];
                vizinhos+=m[j-1][k]+                m[j+1][k];
                vizinhos+=m[j-1][k+1]+  m[j][k+1]+  m[j+1][k+1];

                if (m[j][k]==0 && vizinhos==3)
                    n[j][k]=1;
                else if (m[j][k]==1 && vizinhos<2)
                    n[j][k]=0;
                else if (m[j][k]==1 && vizinhos>3)
                    n[j][k]=0;
                else if (m[j][k]==1 && (vizinhos>1 && vizinhos<4))
                    n[j][k]=1;
            }
        }
        for(j=0;j<NL;j++){
            for(k=0;k<NC;k++){
                if(m[j][k]==1)
                    printf("X");
                else
                    printf("_");
                m[j][k]=n[j][k];
            }
            printf("\n");
        }
        printf("Geracao: %d", i+1);
        printf("\n");
        Sleep(2000);
    }
}
