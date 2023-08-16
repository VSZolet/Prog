/* Vinicius Schnaider Zolet 1984136 && Wilson Felipp dos Santos 1986872 && Pedro Henrique Belotto Frankiewicz 1189212 */
#include <float.h>
#include <math.h>
#include <stdio.h>
#define OMEGA 0.00000001 /* valor de omega pre definido para facilidade de alterar o valor para futuros testes */

void testeSimples(float epsSimples, float epsAuxS)
{
    int i=0;
    float precisao;

    while (epsAuxS > 1) /*  esse e o condicional pois toda vez que gera um novo eps, ele e atribuido ao aux com
                            o incremento de +1, pois ele ira parar quando eps deixar de ser significativo. */
    {
        epsSimples /= 2.0;
        epsAuxS = epsSimples + 1.0;
        i++;
        printf("%da reducao de eps = %e \n", i, epsSimples);
    }
    precisao=epsSimples*2; /* multiplicado por 2, pois eps e feito em base 2 e aqui foi calculado com base 1 */
    printf("\nA precisao simples e de '%e'\n\n\n", precisao);

}

void testeDuplo(double epsDuplo, double epsAuxD) /* aqui ele ira repetir o processo, porem com "double" */
{
    int i=0;
    double precisao;

    while (epsAuxD > 1)
    {
        epsDuplo /= 2.0;
        epsAuxD = epsDuplo + 1.0;
        i++;
        printf("%da reducao de eps = %e \n", i, epsDuplo);
    }
    precisao=epsDuplo*2;
    printf("\nA precisao dupla e de '%e'\n\n\n", precisao);


}

void testeDeOmega() /* e aqui ele ira repetir o processo para qualquer valor de omega definido, não apenas em base 2 */
{
    int i=0;
    double precisao,eps=2.0;

    while ((OMEGA+eps)>(OMEGA))
    {
        eps /= 2.0;
        i++;
        printf("%da reducao de eps = %e \n", i, eps);
    }

    printf("\nPara omega= %e, entao omega+eps=omega quando eps= '%e'\n", OMEGA, eps);


}

int main()
{
    float epsSimples=1.0, epsAuxS=2.0; /* ambos os aux foram colocado para 2.0 para poder dar inicio forcado ao looping */
    double  epsDuplo=1.0, epsAuxD=2.0;

    testeSimples(epsSimples, epsAuxS);
    testeDuplo(epsDuplo, epsAuxD);
    testeDeOmega();

}
