#include <stdio.h>
#include <stdlib.h>

/*
Um avião e um trem bala farão uma viagem entre duas cidades.
FUAQ leia a distancia percorrida a velocidade média e o consumo de combústível (KM/L)
dois dois veículos e informe qual dos dois gastou menos tempo e qual dos dois
gastou menos combustível.
*/

int main() {

	int distancia;
	int akmhora, akmlitro, atempo, aconsumo;
	int tkmhora, tkmlitro, ttempo, tconsumo;

    printf("Informe a distancia entre as cidades: ");
    scanf("%d", &distancia);

    printf("Informe a velocidade media do trem (km/h): ");
    scanf("%d", &tkmhora);

    printf("Informe o consumo medio do trem (km/l): ");
    scanf("%d", &tkmlitro);

    printf("\n");

    printf("Informe a velocidade media do aviao (km/h): ");
    scanf("%d", &akmhora);

    printf("Informe o consumo medio do aviao (km/l): ");
    scanf("%d", &akmlitro);

	ttempo = distancia * 1 / tkmhora;
	tconsumo  = distancia * 1 / tkmlitro;

	atempo = distancia * 1 / akmhora;
	aconsumo  = distancia * 1 / akmlitro;

    printf("\n");

    if (atempo < ttempo){
        printf("O aviao gastou menos tempo na viagem\n");
    } else {
        printf("O trem gastou menos tempo na viagem\n");
    }

    printf("Tempo gasto pelo aviao: %d Horas\n", atempo);
    printf("Tempo gasto pelo trem: %d Horas\n", ttempo);

    printf("\n");

     if (aconsumo < tconsumo){
        printf("O aviao consumiu menos combustivel\n");
    } else {
        printf("O trem consumiu menos combustivel\n");
    }

    printf("Consumo do aviao: %d Litros\n", aconsumo);
    printf("Consumo do trem: %d Litros\n", tconsumo);

    return 0;
}

