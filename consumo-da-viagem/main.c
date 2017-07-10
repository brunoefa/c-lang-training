#include <stdio.h>
#include <stdlib.h>

/*

1. FUAQ calcula a quantidade de litros de combust�vel gastos em
uma viagem utilizando-se um autom�vel que faz 12 Km por litro.
Para realizar esse c�lculo, o usu�rio dever� fornecer o tempo
gasto da viagem e a velocidade m�dia durante a mesma.
O algoritmo dever� apresentar como resultado os valores da
velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida
e a quantidade de litros utilizada na viagem.

*/

#define CONSUMO 12

int main() {

    double litros, tempo, velocidade, distancia;

    printf("Informe o tempo gasto em horas: ");
    scanf("%lf", &tempo);

    printf("Informe a velocidade media da viagem em km/h: ");
    scanf("%lf", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / CONSUMO;

    printf("\n--------------------------------------\n");

    printf("Velocidade Media: %0.2lf km/h\n", velocidade);
    printf("Tempo gasto: %0.2lf Horas\n", tempo);

    printf("Distancia percorrida: %0.2lf km\n", distancia);
    printf("Combustivel gasto: %0.2lf Litros\n", litros);


    return 0;
}






