// Exercicio 3
//Alex Araújo Braca RA: 0030482521020
//Arthur Pereira da Silva RA:  0030482521042

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Data{
    unsigned char dia;
    unsigned char mes;
    unsigned short int ano;
} Data;

typedef struct Reserva{
    int codigo;
    char cliente[51];
    char destino[31];
    Data dataViagem;
    char status;
} Reserva;

int main(){
    Reserva reservas[10];
    int qntReservas = 0;
}