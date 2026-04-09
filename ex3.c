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
    char status; //P ou N
} Reserva;

int main(){
    Reserva reserva[10];
    int menu,qntReservas = 0, i=0, anoFiltro, mesFiltro;


printf("1 - Cadastrar Reservas\n");
printf("2 - Exibir Reservas\n");
printf("3 - Exibir apenas reservas pagas\n"); 
printf("4 - Filtro por data\n");
printf("5 - Resumo por destino\n");   
switch (menu)
{
    case 1:
        // Cadastro    
        printf("Qual a quantidade de Reservas: ");
        scanf("%d", &qntReservas);

        for (int i=0; i < qntReservas; i++) {
            printf("Codigo: ");
            scanf("%d", &reserva[i].codigo);

            printf("Digite o Nome do Cliente: ");
            gets(reserva[i].cliente);

            printf("Digite o Destino do Cliente: ");
            gets(reserva[i].destino);

            printf("Digite a Data da Viagem: ");
            scanf("%hhu", &reserva[i].dataViagem.dia);
            scanf("%hhu", &reserva[i].dataViagem.mes);
            scanf("%hu", &reserva[i].dataViagem.ano);

            printf("Insira o Status da Reserva: ");
            scanf("%c", &reserva[i].status);
        }
    break;

    case 2:
        // Exibição de Reservas
        printf("COD\t| Cliente\t| Destino\t| Data\t| Status \n");
        for (int i=0; i < qntReservas; i++) {
            printf("%d\t | %s\t| %s\t| %hhu/%hhu/%u\t| %s\t\n", 
            reserva[i].codigo,
            reserva[i].cliente,
            reserva[i].destino,
            reserva[i].dataViagem.dia,
            reserva[i].dataViagem.mes,
            reserva[i].dataViagem.ano,
            reserva[i].status);
        }
    break;

    case 3:
        // Filtro: Reservas Pagas
        for (int i=0; i < qntReservas; i++) {
            if (reserva[i].status == 'P') {
                printf("%d\t | %s\t| %s\t| %hhu/%hhu/%u\tn", 
                reserva[i].codigo,
                reserva[i].cliente,
                reserva[i].destino,
                reserva[i].dataViagem.dia,
                reserva[i].dataViagem.mes,
                reserva[i].dataViagem.ano);
            }
        }
    break;

    case 4:
    // Filtro: Por Data
    printf("Digite o mes da viagem: ");
    scanf("%hhu", &mesFiltro);

    printf("Digite o ano da viagem: ");
    scanf("%u", &anoFiltro);

    for (int i=0; i < qntReservas; i++) {
        if (reserva[i].dataViagem.mes == mesFiltro && reserva[i].dataViagem.ano == anoFiltro){
            printf("%d\t | %s\t| %s\t| %s\t\n", 
            reserva[i].codigo,
            reserva[i].cliente,
            reserva[i].destino,
            reserva[i].status);
        }
    }
    break;

    case 5:
    // Filtro: Por Destino
    for (int i=0; i < qntReservas; i++) 
    {
        
    }
    break;

 }
}

