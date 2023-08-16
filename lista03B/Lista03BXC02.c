#include<stdio.h>
main(){

    int valordex, valoraux, pontos;

    printf("Insira um valor para N > 0: ");
    scanf("%d", &valordex);

    for(valoraux=-valordex; valoraux<=valordex; valoraux++){
        printf("\n%3d ", valoraux);
            for (pontos=1; pontos<= valoraux*valoraux+valoraux+1;pontos++){
                printf(". ");
            }
        printf("*\n");
    }


}
