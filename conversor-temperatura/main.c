#include <stdio.h>
#include <stdlib.h>

double converter(int celsius, char opcao);

int main() {
    int celcius;
    double f, k;
    int i = 0;

    printf("Informe a temperatura desejada:\n");
    scanf("%d", &celcius);

    for(i = 1; i <= celcius; i++){
        f = converter(i,'f');
        k = converter(i,'k');
        printf("C = %d - F = %0.1lf - K = %0.1lf\n", i, f, k);
    }
    return 0;
}


double converter(int celsius, char opcao){
    double temperatura = 0;
    if('k' == opcao){
        temperatura = celsius + 273;
    }
    if('f' == opcao){
        temperatura = 1.8 * celsius + 32;
    }
    return temperatura;
}