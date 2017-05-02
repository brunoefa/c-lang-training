#include <stdio.h>
#include <stdlib.h>

/*
O reservat�rio de uma pequena cidade tem capacidade de armazenamento de 1 milh�o de litros de �gua e est� cheio.
A cidade consome diariamente 30mil litros de �gua. Considerando uma �poca de estiagem o reservat�rio tem recebido
em m�dia 100 mil litros de �gua por m�s. FUAQ calcule e informe a prefeitura em quantos meses a cidade ir� ficar sem �gua
Considere um m�s com 30 dias.
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
