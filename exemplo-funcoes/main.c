#include <stdio.h>
#include <stdlib.h>

int somaNumeros(int n1, int n2);
void limpaTela();

int main() {
    int r = 0;
    printf("Hello world!\n");
    limpaTela();
    r = somaNumeros(10, 20);
    printf("Soma: %d!\n", r);
    return 0;
}

int somaNumeros(int n1, int n2){
    int soma = 0;
    soma = n1 + n2;
    return soma;
}

void limpaTela(){
    system("@cls||clear");
    return;
}
