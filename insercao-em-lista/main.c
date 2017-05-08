#include <stdio.h>
#include <stdlib.h>

/*
FUAQ Leia um vetor de 10 posições e em seguida leia um numero
referente a um índice e um numero referente a um valor.
Insira o número lido na posicao informada no índice e
movivemnte todos os demais números no vetor após o índice
para a próxima posicao

Ex:
Vetor Lido: 1, 4, 5, 87, 8, 6, 4, 7, 8, 5
Índice: 3
Valor: 10
Novo Vetor: 1, 4, 5, 10, 87, 8, 6, 4, 7, 8, 5

*/

int main() {
    int vetor[11], indice, valor, temp;

    printf("Informe 10 valores para a lista\n\n");
    for(int i = 0; i < 10; i++){
        printf("%d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Informe um indice: ");
    scanf("%d", &indice);
    printf("Informe um valor: ");
    scanf("%d", &valor);

    printf("\nVetor alterado\n");

    for(int i = 0; i < 11; i++) {
        if(i >= indice) {
            if(i == indice) {
                temp = vetor[i];
                vetor[i] = valor;
            } else {
                valor = vetor[i];
                vetor[i] = temp;
                temp = valor;
            }
        }
        printf("%d", vetor[i]);
        if(i < 10) {
            printf(" - ");
        }
    }
    printf("\n");
    return 0;
}
