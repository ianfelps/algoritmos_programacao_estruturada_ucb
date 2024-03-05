#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char resp;
	int acertos = 0, erros = 0;
	
	// Questao 1
	printf("\nQuestao 1: Qual e a sintaxe correta para declarar uma variavel inteira em C?\n");
	printf("a) int x;\n");
	printf("b) var x;\n");
	printf("c) integer x;\n");
	printf("d) numero x;\n");
	scanf(" %c", &resp);
	
	if (resp == 'a'){
		printf("Voce acertou! \n");
		acertos++;
	} else {
		printf("Voce errou! \n");
		erros++;
	}
	
	// Questao 2
	printf("\nQuestao 2: Qual e a funcao usada para imprimir no console em C?\n");
	printf("a) print();\n");
	printf("b) console.log();\n");
	printf("c) printtext();\n");
	printf("d) printf();\n");
	scanf(" %c", &resp);
	
	if (resp == 'd'){
		printf("Voce acertou! \n");
		acertos++;
	} else {
		printf("Voce errou! \n");
		erros++;
	}
	
	// Questao 3
	printf("\nQuestao 3: O que o operador '==' faz em C?\n");
	printf("a) Atribui um valor a uma variavel.\n");
	printf("b) Compara dois valores.\n");
	printf("c) Divide dois valores.\n");
	printf("d) Multiplica dois valores.\n");
	scanf(" %c", &resp);
	
	if (resp == 'b'){
		printf("Voce acertou! \n");
		acertos++;
	} else {
		printf("Voce errou! \n");
		erros++;
	}
	
	// Questao 4
	printf("\nQuestao 4: Qual e o operador logico para 'OU' em C?\n");
	printf("a) &&\n");
	printf("b) ||\n");
	printf("c) !\n");
	printf("d) <>\n");
	scanf(" %c", &resp);
	
	if (resp == 'b'){
		printf("Voce acertou! \n");
		acertos++;
	} else {
		printf("Voce errou! \n");
		erros++;
	}
	
	// Questao 5
	printf("\nQuestao 5: Qual e a estrutura de controle usada para repeticao em C?\n");
	printf("a) if\n");
	printf("b) switch\n");
	printf("c) for\n");
	printf("d) else\n");
	scanf(" %c", &resp);
	
	if (resp == 'c'){
		printf("Voce acertou! \n");
		acertos++;
	} else {
		printf("Voce errou! \n");
		erros++;
	}
	
	// Questao 6
	printf("\nQuestao 6: Qual e a funcao usada para ler um numero inteiro do teclado em C?\n");
	printf("a) read_integer();\n");
	printf("b) input_int();\n");
	printf("c) scanf();\n");
	printf("d) get_int();\n");
	scanf(" %c", &resp);
	
	if (resp == 'c'){
		printf("Voce acertou! \n");
		acertos++;
	} else {
		printf("Voce errou! \n");
		erros++;
	}
	
	// Questao 7
	printf("\nQuestao 7: Qual e o valor da expressao 5 + 3 * 2 em C?\n");
	printf("a) 16\n");
	printf("b) 11\n");
	printf("c) 13\n");
	printf("d) 10\n");
	scanf(" %c", &resp);
	
	if (resp == 'b'){
		printf("Voce acertou! \n");
		acertos++;
	} else {
		printf("Voce errou! \n");
		erros++;
	}
	
	printf("\n--------------------------------\n");
	printf("Voce acertou %d e errou %d", acertos, erros);

    printf("\n \n");
    system("pause");
	
	return 0;
}
