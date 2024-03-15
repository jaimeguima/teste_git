#include <stdlib.h>
#include <stdio.h>
#include "matematica.h"

#define PI 3.14

void main()
{
    int angulo_1 = 60;
    int angulo_2 = 120;
    float aux = 0;

    aux = calcular_seno(angulo_1 * (PI / 180));
    printf(" o seno do angulo 1 é: %f\n", aux);
    aux = calcular_cosseno(angulo_1 * (PI / 180));
    printf(" o cosseno do angulo 1 é: %f\n", aux);
    aux = calcular_tangente(angulo_1 * (PI / 180));
    printf(" a tangente do angulo 1 é: %f\n", aux);

    aux = calcular_seno(angulo_2 * (PI / 180));
    printf(" o seno do angulo 2 é: %f\n", aux);
    aux = calcular_cosseno(angulo_2 * (PI / 180));
    printf(" o cosseno do angulo 2 é: %f\n", aux);
    aux = calcular_tangente(angulo_2 * (PI / 180));
    printf(" a tangente do angulo 2 é: %f\n", aux);
}