#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 100000

int main() {



    int lista[TAMANHO], quantidade[60];
    double percentual[60];

    printf("Preenchendo valores...\n");

    // zera vetores auxiliares
    for(int i = 0; i < 60; i++){
        percentual[i] = 0.0;
        quantidade[i] = 0;
    }

    // preenche vetores com numeros randomicos
    for(int i = 0; i < TAMANHO; i++){
        lista[i] = 1 + (rand() % 60);
        quantidade[lista[i] - 1]++;
    }

    printf("Vetor preenchido...\n");
    printf("\nTabela de analise valores\n");

    for(int i = 0; i < 60; i++){
        percentual[i] = (double) quantidade[i] * 100 / TAMANHO;
        printf("NUM %d: QTD: %dx PER: %0.1lf%%\n", i + 1, quantidade[i], percentual[i]);
    }

    printf("\n");
    return 0;
}
