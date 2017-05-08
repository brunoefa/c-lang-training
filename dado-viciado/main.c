#include <stdio.h>
#include <stdlib.h>

int main() {

    int jogada[20], percentual[6] = {0, 0, 0, 0, 0, 0};

    printf("Informe 20 jogadas para a lista\n\n");

    for(int i = 0; i < 20; i++){

        do {
            printf("Jogada %d: ", i + 1);
            scanf("%d", &jogada[i]);
        } while(jogada[i] <= 1 || jogada[i] >= 6);

        percentual[jogada[i] - 1]++;
    }

    printf("\nLista de jogadas\n");

    for(int i = 1; i <= 6; i++){
        percentual[i - 1] = percentual[i - 1] * 100 / 20;
        printf("Lado %d: %d%% - ", i, percentual[i - 1]);
    }

    printf("\n");
    return 0;
}
