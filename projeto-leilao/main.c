#include <stdio.h>
#include <stdlib.h>

char menuPrincipal();
char menuVeiculo();
char menuUsuario();
char menuLeilao();
void cadastrarVeiculo();
void excluirVeiculo();
void listarTodosVeiculos();
void filtrarVeiculoPorAno();
void cadastrarUsuario();
void excluirUsuario();
void listarTodosUsuarios();
void darLance();
void listarTodosLances();
void listarLancesPorVeiculo();
void listarLancesPorUsuario();

void tela(char op);

int main() {
    char opprincipal, opveiculo, opusuario, opleilao;
    do{
        opprincipal = menuPrincipal();

        if(opprincipal == '1'){
            opveiculo = menuVeiculo();
            switch(opveiculo) {
               case '1': cadastrarVeiculo(); break;
               case '2': excluirVeiculo(); break;
               case '3': listarTodosVeiculos(); break;
               case '4': filtrarVeiculoPorAno(); break;
            }
        } else if(opprincipal == '2'){
            opusuario = menuUsuario();
            switch(opusuario) {
               case '1': cadastrarUsuario(); break;
               case '2': excluirUsuario(); break;
               case '3': listarTodosUsuarios(); break;
            }
        } else if(opprincipal == '3'){
            opleilao = menuLeilao();
            switch(opleilao) {
               case '1': darLance(); break;
               case '2': listarTodosLances(); break;
               case '3': listarLancesPorVeiculo(); break;
               case '4': listarLancesPorUsuario(); break;
            }
        }
    } while(opprincipal != '0');
    return 0;
}

void cadastrarVeiculo(){system("cls"); printf("CADASTRO DE VEICULO\n\n"); system("pause");}
void excluirVeiculo(){system("cls"); printf("EXCLUIR VEICULO\n\n"); system("pause");}
void listarTodosVeiculos(){system("cls"); printf("LISTAR TODOS OS VEICULOS\n\n"); system("pause");}
void filtrarVeiculoPorAno(){system("cls"); printf("FILTRAR VEICULO POR ANO\n\n"); system("pause");}

void cadastrarUsuario(){system("cls"); printf("CADASTRAR USUARIO\n\n"); system("pause");}
void excluirUsuario(){system("cls"); printf("EXCLUIR USUARIO\n\n"); system("pause");}
void listarTodosUsuarios(){system("cls"); printf("LISTAR TODOS USUARIOS\n\n"); system("pause");}
void darLance(){system("cls"); printf("DAR LANCE\n\n"); system("pause");}
void listarTodosLances(){system("cls"); printf("LISTAR TODOS OS LANCES\n\n"); system("pause");}
void listarLancesPorVeiculo(){system("cls"); printf("LISTAR LANCES POR VEICULO\n\n"); system("pause");}
void listarLancesPorUsuario(){system("cls"); printf("LISTAR LANCES POR USUARIO\n\n"); system("pause");}

char menuPrincipal() {
    char op;
    int opvalida = 1;
    do{
        system("cls");
        printf("SEJA BEM-VINDO AO LEILAO\n\n");
        printf("1. Veiculo\n");
        printf("2. Usuario\n");
        printf("3. Leilao\n");
        printf("0. Sair\n\n");

        if(!opvalida){
            printf("Opcao invalida! ");
        }
        printf("Informe a opcao desejada: ");

        op = getche();
        opvalida = op == '0' || op == '1' || op == '2' || op == '3';
    } while(!opvalida);
    return op;
}

char menuVeiculo() {
    char op;
    int opvalida = 1;
    do{
        system("cls");
        printf("CONTROLE DE VEICULO\n\n");
        printf("1. Cadastrar\n");
        printf("2. Excluir\n");
        printf("3. Listar Todos\n");
        printf("4. Filtrar por Ano\n");
        printf("0. Voltar\n\n");

        if(!opvalida){
            printf("Opcao invalida! ");
        }
        printf("Informe a opcao desejada: ");

        op = getche();
        opvalida = op == '0' || op == '1' || op == '2' || op == '3' || op == '4';
    } while(!opvalida);
    return op;
}

char menuUsuario() {
    char op;
    int opvalida = 1;
    do{
        system("cls");
        printf("CONTROLE DE USUARIO\n\n");
        printf("1. Cadastrar\n");
        printf("2. Excluir\n");
        printf("3. Listar Todos\n");
        printf("0. Voltar\n\n");

        if(!opvalida){
            printf("Opcao invalida! ");
        }
        printf("Informe a opcao desejada: ");

        op = getche();
        opvalida = op == '0' || op == '1' || op == '2' || op == '3';
    } while(!opvalida);
    return op;
}

char menuLeilao() {
    char op;
    int opvalida = 1;
    do{
        system("cls");
        printf("VAMOS AO LEILAO\n\n");
        printf("1. Dar Lance\n");
        printf("2. Listar Todos os Lances\n");
        printf("3. Listar Lance por Veiculo\n");
        printf("4. Listar Lance por Usuario\n");
        printf("0. Voltar\n\n");

        if(!opvalida){
            printf("Opcao invalida! ");
        }
        printf("Informe a opcao desejada: ");

        op = getche();
        opvalida = op == '0' || op == '1' || op == '2' || op == '3' || op == '4';
    } while(!opvalida);
    return op;
}
