#include <stdio.h>
#include <stdlib.h>

/*
O reservatório de uma pequena cidade tem capacidade de armazenamento de 1 milhão de litros de água e está cheio.
A cidade consome diariamente 30mil litros de água. Considerando uma época de estiagem o reservatório tem recebido
em média 100 mil litros de água por mês. FUAQ calcule e informe a prefeitura em quantos meses a cidade irá ficar sem água
Considere um mês com 30 dias.
*/

int main() {

    int reservatorio = 1000000,
        consumodiario = 30000,
        abastecimentomensal = 100000,
        dias = 0;
    double meses = 0.0;

    while (reservatorio > 0){
        printf("Reservatorio = %d - Dias = %d\n", reservatorio, dias);
        reservatorio -= consumodiario;
        reservatorio += (abastecimentomensal / 30);
        dias++;
    }
    printf("\n");
    meses = dias / 30.0;
    printf("O reservatorio estara vazio em %0.2f meses\n", meses);

    return 0;
}
