#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1 = 10, v2 = 10;

    printf("Passagem de parametros!\n");
    dobrar(v1);
    dobrar2(&v2);
    printf("Valor: %d\n", v1);
    printf("Referencia: %d\n", v2);

    return 0;
}

void dobrar(int numero){
    numero = numero * 2;
}

void dobrar2(int *numero){
    *numero = *numero * 2;
}
