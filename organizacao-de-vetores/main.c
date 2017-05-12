#include <stdio.h>
#include <stdlib.h>
/*
Não consequimos entender o que foi pedido no quarto tópico da questão 3.
Executamos da seguinte forma:
diferenca1 = vetor[0]-vetor[1] printf("%d", diferenca1);
diferenca2 = vetor[1]-vetor[2] printf("%d", diferenca2);

*/

/*cabeçalho das funçoes
DOUBLE CALCULARMEDIA (DOUBLE SOMASALARIOS, INT QUANTIDADE){}
DOUBLE CALCULARDIFERENCA(DOUBLE MAIORSALARIO, DOUBLE MENORSALARIO){}
VOID ESCREVERNOME(CHAR *NOME, DOUBLE SALARIO){}

DOUBLE CONVERTER (INT CELCIUS, CHAR OPCAO){}

VOID GERARINVERSO(INT *VETOR){}
VOID GERARPAR(INT *VETOR){}
VOID GERARIMOAR(INT *VETOR){}
VOID GERARDIFERENCA(INT *VETOR){}
*/

int main() {
    int vetor[5];
    int vetorinverso[5];
    int vetorpar[5] = {0,0,0,0,0}; //DECLARACAO DOS VALORES DOS VETORES
    int vetorimpar[5] = {0,0,0,0,0};
    int vetordif[5];
    int i;
    int contapar = 0;
    int contaimpar = 0;
    int proxima, anterior;

    for (i = 0; i<5; i++) {
        printf("\nDigite um numero  ");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i<5; i++) {

        vetorinverso[i] = vetor[4 - i];

        if (vetor[i] % 2 == 0) {
            vetorpar[contapar] = vetor[i];
            contapar++;
        }

        if (i % 2 != 0) {
            vetorimpar[contaimpar] = vetor[i];
            contaimpar++;
        }
    }

    for(i=0; i<5; i++){

        if(i+1 >= 5){
            proxima = 0;
        } else {
            proxima = vetor[i+1];
        }

        if (i-1 < 0){
            anterior = 0;
        }else{
            anterior = vetor[i-1];
        }

        vetordif[i] = proxima - anterior;
    }

    printf("\n Vetor: ");
    for(i=0; i<5; i++){
        printf("%d - ", vetor[i]);
    }
    printf("\nInverso: ");
    for(i=0; i<5; i++){
        printf("%d - ", vetorinverso[i]);
    }
    printf("\nPar");
    for(i=0; i<5; i++){
        printf("%d - ", vetorpar[i]);
    }
    printf("\nImpar");
    for(i=0; i<5; i++){
        printf("%d - ", vetorimpar[i]);
    }
    printf("\nDiferenca");
    for(i=0; i<5; i++){
        printf("%d - ", vetordif[i]);
    }
    printf("\n");
    return 0;
}
