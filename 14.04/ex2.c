#include <stdio.h>

void main(){

    int comprimento, *pin;
    float altura, *pfl;
    struct regDados { int qnt; float valor; }vDado, *pDado;

    comprimento = 25;

    pfl = &altura;
    *pfl = 32.87;

    pDado = &vDado;
    pin = &vDado.qnt;
    pfl = &vDado.valor;
    vDado.qnt = 15;
    pDado->valor = (*pDado).qnt * 4.85; // -> acessa membro

}
