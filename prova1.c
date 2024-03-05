#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	double valor1, valor2, resultado;
	int menu;
	
	printf("----- Programa de Calculos Diversos -----\n");
	printf("1 - Calcular o IMC\n");
	printf("2 - Calculadora\n");
	printf("3 - Area do Circulo\n");
	printf("4 - Conversor de Temperatura\n");
	printf("Insira a opcao desejada: ");
	scanf("%d", &menu);
	
	printf("\n");
	
	switch (menu){
		case 1:
			printf("----- Calcular o IMC -----\n");
			printf("IMC = Peso / (Altura * Altura)\n");
			printf("Insira o seu peso: ");
			scanf("%lf", &valor1);
			printf("Insira a sua altura: ");
			scanf("%lf", &valor2);
			resultado = valor1 / (valor2 * valor2);
			printf("O seu IMC e igual a %.2lf", resultado);
		break;
		case 2:
			printf("----- Calculadora -----\n");
			
			printf("Insira o primeiro numero: ");
			scanf("%lf", &valor1);
			
			printf("1 - Soma (+)\n");
			printf("2 - Subtracao (-)\n");
			printf("3 - Multiplicacao (x)\n");
			printf("4 - Divisao (/)\n");
			printf("Escolha a operacao desejada: ");
			scanf("%d", &menu);
			
			printf("Insira o segundo numero: ");
			scanf("%lf", &valor2);
			
			printf("\n");
			
			switch (menu){
				case 1:
					printf("Resultado da Soma:\n");
					resultado = valor1 + valor2;
					printf("%.2lf + %.2lf = %.2lf", valor1, valor2 , resultado);
				break;
				case 2:
					printf("Resultado da Subtracao:\n");
					resultado = valor1 - valor2;
					printf("%.2lf - %.2lf = %.2lf", valor1, valor2 , resultado);
				break;
				case 3:
					printf("Resultado da Multiplicacao:\n");
					resultado = valor1 * valor2;
					printf("%.2lf x %.2lf = %.2lf", valor1, valor2 , resultado);
				break;
				case 4:
					if (valor2 == 0){
						printf("Impossivel dividir por 0!");
					} else{
						printf("Resultado da Divisao:\n");
						resultado = valor1 / valor2;
						printf("%.2lf / %.2lf = %.2lf", valor1, valor2 , resultado);
					}
				break;
				default:
					printf("Opcao Invalida!");
			}
		break;
		case 3:
			printf("----- Area do Circulo -----\n");
			printf("Area = pi x r²\n");
			printf("Insira o valor do raio: ");
			scanf("%lf", &valor1);
			resultado = 3.14 * (valor1 * valor1);
			printf("O resultado da Area do circulo é igual a %.2lf", resultado);
		break;
		case 4:
			printf("----- Conversor de Temperatura -----\n");
			printf("Celsius para Fahrenheit = (°C x 9/5) + 32\n");
			printf("Insira a temperatura em Celsius: ");
			scanf("%lf", &valor1);
			resultado = (valor1 * 9/5) + 32;
			printf("Resultado: %.lf °C = %.lf °F", valor1, resultado);
		break;
		default:
			printf("Opcao Invalida!");
	}

    printf("\n \n");
    system("pause");
	
	return 0;
}