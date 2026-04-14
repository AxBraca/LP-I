#include <stdio.h>

void main(){

    double valor;
    char letra;
    char *p1;
    double *p2;

    valor = 10.25;
    letra = 'C';

    printf("letra = %c\n", letra );

    p1 = &letra;
    p2 = &valor;

    *p1 = 'H';

    printf("valor = %f\n", valor );
    printf("valor com ponteiro = %f\n", *p2 );
    printf("endereço de valor = %u\n", p2 );
    printf("letra = %c\n", letra );
    printf("letra com ponteiro = %c\n", *p1 );
    printf("endereço de letra = %u\n", p1 );

}
