#include<stdio.h>
#include<windows.h>
#define NL 17
#define NC 17

main(){

    int i, j, k,
        m[NL][NC]={0},
        n[NL][NC]={0};

    m[2][4]=1; m[2][5]=1; m[2][6]=1; m[2][10]=1; m[2][11]=1; m[2][12]=1;
    m[4][2]=1; m[4][7]=1; m[4][9]=1; m[4][14]=1;
    m[5][2]=1; m[5][7]=1; m[5][9]=1; m[5][14]=1;
    m[6][2]=1; m[6][7]=1; m[6][9]=1; m[6][14]=1;
    m[7][4]=1; m[7][5]=1; m[7][6]=1; m[7][10]=1; m[7][11]=1; m[7][12]=1;
    m[9][4]=1; m[9][5]=1; m[9][6]=1; m[9][10]=1; m[9][11]=1; m[9][12]=1;
    m[10][2]=1; m[10][7]=1; m[10][9]=1; m[10][14]=1;
    m[11][2]=1; m[11][7]=1; m[11][9]=1; m[11][14]=1;
    m[12][2]=1; m[12][7]=1; m[12][9]=1; m[12][14]=1;
    m[14][4]=1; m[14][5]=1; m[14][6]=1; m[14][10]=1; m[14][11]=1; m[14][12]=1;



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
                if (m[j][k]==1)
                    printf("X");
                else
                    printf("_");
                m[j][k]=n[j][k];
            }
            printf("\n");
        }
        printf("Geração: %d", i+1);
        printf("\n");
        Sleep(2000);
    }
}
