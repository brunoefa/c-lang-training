#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Guia de referencia para linguagem C!\n");
    printf("\n");

    printf("Estrutura de um programa\n");
    printf("-----------------------------------------\n");

    printf("#include <stdio.h>\n");
    printf("#include <stdlib.h>\n\n");

    printf("int main() {\n");
    printf("    return 0;\n");
    printf("}\n");

    printf("\n");

    printf("Caracteres de representacao na tela\n");
    printf("-----------------------------------------\n");
    printf("a	Beep\n");
    printf("b	Backspace\n");
    printf("f	Limpa a tela\n");
    printf("n	Nova linha\n");
    printf("r	Retorna ao início da linha\n");
    printf("t	Tab\n");
    printf("v	Tab Vertical\n");

    printf("\n");

    printf("Tipos de dados\n");
    printf("-----------------------------------------\n");

    printf("bool	            0 to 1\n");
    printf("char	            -28 to 127\n");
    printf("unsigned char	    0 to255\n");
    printf("short int           -32.768 to 32.767\n");
    printf("unsigned short int  0 to 65.535\n");
    printf("int                 -2.147.483.648 to 2.147.483.647\n");
    printf("unsigned int        0 to 4.294.967.295\n");
    printf("long int            -2.147.483.648 to 2.147.483.647\n");
    printf("unsigned long int   0 to 4.294.967.295\n");
    printf("float               1.17x10^-38 to 3.40x10^38\n");
    printf("double              2.22x10^-308 to 1.79x10^308\n");

    printf("\n");

    printf("Operadores logicos\n");
    printf("-----------------------------------------\n");
    printf("&&  Operador E\n");
    printf("||  Operador OU\n");
    printf("!   Operador NOT\n");

    printf("\n");

    printf("Operadores aritimeticos\n");
    printf("-----------------------------------------\n");
    printf("+	Adicao\n");
    printf("-	Subtracao\n");
    printf("*	Multiplicacao\n");
    printf("/	Divisao\n");
    printf("%	Modulo\n");

    printf("\n");

    printf("Operadores relacionais\n");
    printf("-----------------------------------------\n");
    printf(">	Maior\n");
    printf("<	Menor\n");
    printf(">=	Maior ou igual\n");
    printf("<=	Menor ou igual\n");
    printf("==	Igual\n");
    printf("!=	Diferente\n");

    printf("\n");

    printf("Operadores de atribuicao\n");
    printf("-----------------------------------------\n");
    printf("=	x = y;\n");
    printf("++	x = x + 1;\n");
    printf("--	x = x - 1;\n");
    printf("+=	x = x + y;\n");
    printf("-=	x = x - y;\n");
    printf("*=	x = x * y;\n");
    printf("/=	x = x / y;\n");

    printf("\n");

    printf("Caracteres de conversao\n");
    printf("-----------------------------------------\n");

    printf("%%%%	O caracter porcento (%%)\n");
    printf("%%c	Caracter (char)\n");
    printf("%%d	Inteiro (short, int)\n");
    printf("%%f	Ponto flutuante em notação decimal (float, double)\n");
    printf("%%ld	Valor inteiro longo (long int)\n");
    printf("%%s	String (char *)\n");
    printf("%%u	integer positivo (unsigned short, unsigned int, unsigned long)\n");

    printf("\n");

    printf("Comandos de entrada e saida de dados\n");
    printf("-----------------------------------------\n");

    printf("printf(\"%%d\", int)    Saida de dados na tela\n");
    printf("scanf(\"%%d\", &int)\n  Entrada de dados via teclado");

    printf("\n");

    printf("Estrutura controle de fluxo\n");
    printf("-----------------------------------------\n");

    printf("if else     se senao\n");
    printf("while()     enquanto\n");
    printf("do while()  repita\n");
    printf("for()       para\n");

    return 0;
}
