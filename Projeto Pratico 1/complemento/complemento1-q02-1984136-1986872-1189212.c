/* Vinicius Schnaider Zolet 1984136 && Wilson Felipp dos Santos 1986872 && Pedro Henrique Belotto Frankiewicz 1189212 */

#include <stdio.h>
#include <math.h>

#define f(x) (x*x*x - 9*x + 3)
#define E 0.001

int main ()
{

    float x0, x1, x2;
    int k = 0;

    do
    {
        printf ("Digite os valores de x0 e x1:\n");
        scanf ("%f %f", &x0, &x1);

    } while (f(x0) * f(x1) > 0); /* irá rodar enquanto os dois pontos forem menores que 0 */

    do
    {
        k++; /* conta quantos ciclos se passaram até o valor desejado ser atingido */
        x2 = (x0*f(x1)-x1*f(x0))/(f(x1)- f(x0));

        if (f(x2)== 0) /* caso o ponto médio seja igual a 0, irá parar o processo */
            break;

        else if (f(x2) < 0) /* caso o ponto médio esteja a esquerda, o valor de x2 é atualizado */
            x0 = x2;

        else if (f(x2) > 0) /* caso o ponto médio esteja a direita, o valo de x1 é atualizado */
            x1 = x2;

        printf ("\n\n x2 = %f e margem de erro = %f\n\n", x2, fabs(f(x2)));
    } while (fabs(f(x2)) > E); /* irá continuar enquanto o módulo do ponto médio for maior que o epilson estabelecido. */

    printf("\n A raiz eh %f e foram registrados %d ciclos\n\n", x2, k);

}

