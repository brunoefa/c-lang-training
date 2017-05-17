#include <stdio.h>
#include <stdlib.h>

/*
Questão nº 1
Ler Distância da viagem
Ler número motoqueiros
Para cada motoqueiro
    Consumo
    Velocidade
    Combustivel
    Paradas + 30m
    Investimento
    Tempo
*/

int main() {
    int distancia, motoqueiros;
    int consumo[100], velocidade[100], paradas[100];
    double combustivel[100], tempo[100], investimento[100];

    printf("Informe a distancia do percurso (km): ");
    scanf("%d", &distancia);
    printf("Informe o numero de viajantes: ");
    scanf("%d", &motoqueiros);

    system("cls");

    for (int i = 0; i < motoqueiros; i++){
        printf("Motoqueiro %d\n", i+1);
        printf("Consumo medio (km/l): ");
        scanf("%d", &consumo[i]);
        printf("Velocidade media (km/h): ");
        scanf("%d", &velocidade[i]);
        printf("Valor do combustivel (R$): ");
        scanf("%lf", &combustivel[i]);
        printf("Paradas (Qtd): ");
        scanf("%d", &paradas[i]);
        printf("\n");
    }

    for (int i = 0; i < motoqueiros; i++){
        tempo[i] = ((double)distancia) / velocidade[i] + paradas[i] * 0.5;
        investimento[i] = distancia / consumo[i] * combustivel[i];
    }

    system("cls");
    printf("\nDistancia da viagem: %d\n", distancia);
    for (int i = 0; i < motoqueiros; i++){
        printf("Motoqueiro %d\n", i+1);
        printf("Consumo: %dkm/l\n", consumo[i]);
        printf("Velocidade: %dkm/h\n", velocidade[i]);
        printf("Combustivel: R$ %0.2lf\n", combustivel[i]);
        printf("Paradas: %d - (+%0.1f horas)\n", paradas[i], paradas[i] * 0.5);
        printf("Investimento: R$ %0.2lf\n", investimento[i]);
        printf("Tempo: %0.2lf horas\n", tempo[i]);
        printf("\n");
    }

    return 0;
}
