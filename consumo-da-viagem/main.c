#include <stdio.h>
#include <stdlib.h>

/*

1. FUAQ calcula a quantidade de litros de combustível gastos em
uma viagem utilizando-se um automóvel que faz 12 Km por litro.
Para realizar esse cálculo, o usuário deverá fornecer o tempo
gasto da viagem e a velocidade média durante a mesma.
O algoritmo deverá apresentar como resultado os valores da
velocidade média, tempo gasto na viagem, a distância percorrida
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






