#include <stdio.h>
#include <stdlib.h>

/*
FUAQ Leia 3 n�meros e escreva-os em ordem
decrescente considerando as seguinte restri��o.
S� devem ser permitidos n�meros positivos pares.
Em caso de erro voc� deve informar uma mensagem.
*/

int main() {

    int a = 0, b = 0, c = 0;

    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("Informe o valor de b: ");
    scanf("%d", &b);
    printf("Informe o valor de c: ");
    scanf("%d", &c);

    printf("\n");


    if(a % 2 != 0 || b % 2 != 0 || c % 2 != 0 || a < 0 || b < 0 || c < 0){
        printf("Numeros invalidos! Tente novamente.\n");
    } else {
        if(a > b){
            if(b > c){
                printf("Ordenacao: %d, %d, %d\n", a, b, c);
                //abc
            } else if (a > c){
                printf("Ordena��o: %d, %d, %d\n", a, c, b);
                //acb
            } else {
                printf("Ordena��o: %d, %d, %d\n", c, a, b);
                //cab
            }
        } else if(b > c){
            if(a > c){
                printf("Ordena��o: %d, %d, %d\n", b, a, c);
                //bac
            } else {
                printf("Ordena��o: %d, %d, %d\n", b, c, a);
                //bca
            }
        } else {
            printf("Ordena��o: %d, %d, %d\n", c, b, a);
            //cba
        }
    }
    return 0;
}
