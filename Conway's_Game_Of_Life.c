#include<stdio.h>
#include<windows.h>
#define NL 5
#define NC 5

main(){

    int i, j, k,
        m[NL][NC]={0},
        n[NL][NC]={0};

    m[2][1]=1;
    m[2][2]=1;
    m[2][3]=1;

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
                printf("%d", m[j][k]);
                m[j][k]=n[j][k];
            }
            printf("\n");
        }
        printf("Geração: %d", i+1);
        printf("\n");
        Sleep(2000);
    }
}
