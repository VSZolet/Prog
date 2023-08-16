#include <stdio.h>

main()
{
    int n, //dado de entrada
        i=1; //usado para a multiplicacao

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    while(i*(i+1)*(i+2) <= n){
        if(i*(i+1)*(i+2) == n)
            printf("Eh triangular!! ");
        //note que vc nao pode usar o else aqui!!
        //para imprimir a mensagem NAO EH TRIANGULAR, seria preciso usar uma variavel indicadora

        i++; //nao se esqueca de incrementar! Comente esta linha e veja o que acontece
    }

}
