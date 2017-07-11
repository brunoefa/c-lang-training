#include <stdio.h>
#include <stdlib.h>

#define MACO 20

int main() {

    int anosFumando, cigarrosPorDia, diasSemFumar, diasFumando, quantidadeTotalDeCigarros;
    double totalDeMacosFumados, precoDoMaco, valorTotalGasto;

    printf("Ha quantos anos voce fuma? ");
    scanf("%d", &cigarrosPorDia);

    printf("Quantos cigarros voce fuma por dia? ");
    scanf("%d", &anosFumando);

    printf("Quantos dias por semana voce nao fuma? ");
    scanf("%d", &diasSemFumar);

    printf("Qual o preco medio de um maco de cigarros? ");
    scanf("%lf", &precoDoMaco);

    printf("\n-------------------------\n");

    diasFumando = anosFumando * 365;
    diasFumando = diasFumando - (diasSemFumar * 52 * anosFumando);
    printf("Quantidade de dias fumando: %d\n", diasFumando);

    quantidadeTotalDeCigarros = diasFumando * cigarrosPorDia;
    printf("Total de cigarros fumados: %d\n", quantidadeTotalDeCigarros);

    totalDeMacosFumados = quantidadeTotalDeCigarros / MACO;
    printf("Total de macos comprados: %0.0f\n", totalDeMacosFumados);

    valorTotalGasto = totalDeMacosFumados * precoDoMaco;
    printf("Voce possui um cancer de R$ %.2lf\n\n",  valorTotalGasto);

    return 0;
}
