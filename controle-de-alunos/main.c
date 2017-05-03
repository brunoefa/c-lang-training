#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Leia a quantidade de alunos uma sala aula possui e também leia nome e nota de todos os alunos.
Calcule e informe a média das notas da turma, quantos alunos foram reprovados (notas abaixo de 60)
e informe o nome dos alunos com as duas maiores notas da sala.
*/

int main() {

    int alunos = 0,
        nota = 0,
        maiornota1 = 0,
        maiornota2 = 0,
        reprovados = 0,
        soma = 0;

    char nome[20],
         nomemaiornota1[20],
         nomemaiornota2[20];

    double media = 0.0;




    printf("Informe a quantidade de alunos na turma!\n");
    scanf("%d", &alunos);

    for(int i = 0; i < alunos; i++){
        printf("Informe o nome do aluno %d\n", i + 1);
        scanf("%s", &nome);
        printf("Informe a nota do aluno %d\n", i + 1);
        scanf("%d", &nota);


        // acumula para calcular media
        soma += nota;

        // incrementa caso o aluno esteja reprovado
        if(nota < 60){
            reprovados++;
        }

        if(nota > maiornota2){
            if(nota > maiornota1){
                maiornota2 = maiornota1;
                strcpy(nomemaiornota2, nomemaiornota1);
                maiornota1 = nota;
                strcpy(nomemaiornota1, nome);
            } else {
                maiornota2 = nota;
                strcpy(nomemaiornota2, nome);
            }
        }
    }

    media = soma / ((double)alunos);

    printf("\n");
    printf("Nota media da turma = %0.2f\n", media);
    printf("Alunos reprovados = %d\n", reprovados);
    printf("Aluno com maior nota %s - %d\n", nomemaiornota1, maiornota1);
    printf("Segundo aluno com maior nota %s - %d\n", nomemaiornota2, maiornota2);

    return 0;
}
