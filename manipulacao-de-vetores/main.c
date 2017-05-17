#include <stdio.h>
#include <stdlib.h>

/*

FUAQ Leia 5 números em ordem decrescente sendo que nenhum dos números devem ser maior do que 10. Exemplo:

10, 7, 5, 2, 2

Em seguida você deve criar os seguintes vetores:

Vetor 1 (Principal) - Número da lido 10
Crie um vetor e leia 10 posições para preenche-lo

Vetor 2 - Número lido 7
Crie um vetor com as 7 posições do vetor principal invertidas

Vetor 3 - Número lido 5
Crie um vetor com 5 números ímpares do vetor principal.

Vetor 4 - Número lido 2
Crie um vetor com o número correspondente a posição 2.

Vetor 5 - Número lido 2
Crie um vetor com 1 e múltiplique todos os números da vetor principal por 2.


*/

int main() {
    int base[5], x = 0;
    int principal[10]   = {0,0,0,0,0,0,0,0,0,0},
    inverso[10]         = {0,0,0,0,0,0,0,0,0,0},
    impar[10]           = {0,0,0,0,0,0,0,0,0,0},
    posicao[10]         = {0,0,0,0,0,0,0,0,0,0},
    multiplicador[10]   = {0,0,0,0,0,0,0,0,0,0};

    for(int i = 0; i < 5; i++){
        printf("Informe o numero %d: ", i);
        scanf("%d", &base[i]);
    }

    system("cls");

    for(int i = 0; i < base[0]; i++){
        printf("Informe o numero do vetor principal %d: ", i);
        scanf("%d", &principal[i]);
    }

    system("cls");

    for(int i = 0; i < base[1]; i++){
        inverso[i] = principal[base[1] - i];
    }

    for(int i = 0; i < base[0]; i++){
        if(principal[i] % 2 != 0 && x < 5){
            impar[x] = principal[i];
            x++;
        }
    }

    posicao[0] = principal[base[3]];

    for(int i = 0; i < base[0]; i++){
        multiplicador[i] = principal[i] * base[4];
    }

    system("cls");
    printf("\n");
    printf("V1\t|\tV2\t|\tV3\t|\tV4\t|\tV5\n");
    for(int i = 0; i < 10; i++){
        printf("%d\t|\t", principal[i]);
        printf("%d\t|\t", inverso[i]);
        printf("%d\t|\t", impar[i]);
        printf("%d\t|\t", posicao[i]);
        printf("%d\t|\t", multiplicador[i]);
        printf("\n");
    }

    return 0;
}
