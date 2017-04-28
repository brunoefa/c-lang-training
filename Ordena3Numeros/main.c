#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 0, b = 0, c = 0;

    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("Informe o valor de b: ");
    scanf("%d", &b);
    printf("Informe o valor de c: ");
    scanf("%d", &c);

    printf("\n");

    if(a > b){
        if(b > c){
            printf("Ordenacao: %d, %d, %d\n", a, b, c);
            //abc
        } else if (a > c){
            printf("Ordenação: %d, %d, %d\n", a, c, b);
            //acb
        } else {
            printf("Ordenação: %d, %d, %d\n", c, a, b);
            //cab
        }
    } else if(b > c){
        if(a > c){
            printf("Ordenação: %d, %d, %d\n", b, a, c);
            //bac
        } else {
            printf("Ordenação: %d, %d, %d\n", b, c, a);
            //bca
        }
    } else {
        printf("Ordenação: %d, %d, %d\n", c, b, a);
        //cba
    }
    return 0;
}
