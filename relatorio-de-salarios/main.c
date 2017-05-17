#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main() {

    char nome[40], op;
    int quantidade = 0;
    double salario, media, soma = 0, diferenca;
    double maior = 0, menor = 9999999.0;

    printf("Informe os dados dos funcionarios:");
    do {
        quantidade++;
        printf("\n\nInforme o nome: ");
        fflush(stdin);
        gets(nome);
        printf("Informe o salario: ");
        scanf("%lf", &salario);

        soma += salario;

        if(salario > maior){
            maior = salario;
        }

        if(salario < menor){
            menor = salario;
        }

        if(salario < 10000){
            printf("%s tem o salario inferior a R$ 10.000,00\n", nome);
        }

        printf("\n");
        printf("Cadastrar novo? [s] ou [n]: ");
    } while(getche() == 's');


    // Média geral desconsiderando o maior e o menor
    soma = soma - (maior + menor);
    media = soma / (quantidade - 2);

    printf("\n\nMédia geral desconsiderando o maior e o menor salario\n");
    printf("R$%0.2lf\n\n", media);

    //diferença percentual
    diferenca = 100 - (menor * 100 / maior);

    printf("Maior Salario: R$ %0.2lf\n", maior);
    printf("Menor Salario: R$ %0.2lf\n", maior);

    printf("\nDiferença percentual entre o maior e o menor salario\n");
    printf("%0.2lf%%\n\n", diferenca);

    return 0;
}
