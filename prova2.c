#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, soma, somaPar = 0, somaImpar = 0, par;
	double nota[6], media;
	
	printf("----- Calcular Notas -----\n");
	
	for (i = 0; i <= 5; i++){
		printf("Insira a Nota %d: ", i + 1);
		scanf("%lf", &nota[i]);
	}
	
	media = (nota[0] + nota[1] + nota[2] + nota[3] + nota[4] + nota[5]) / i;
	
	printf("\n----- Media das Notas -----\n");
	printf("Notas: %.2lf %.2lf %.2lf %.2lf %.2lf %.2lf\n", nota[0], nota[1], nota[2], nota[3], nota[4], nota[5]);
	printf("Media: %.2lf\n", media);
	
	printf("\n----- Notas Pares -----\n");
	for(i = 0; i <= 5; i++){
		if ((int)nota[i] % 2 == 0){
			printf("indice[%d] = Valor %.2lf \n", i, nota[i]);
		}
	}
	
	printf("\n----- Notas Impares -----\n");
	for(i = 0; i <= 5; i++){
		if ((int)nota[i] % 2 != 0){
			printf("indice[%d] = Valor %.2lf \n", i, nota[i]);
		}
	}
	
	printf("\n----- Soma das Notas -----\n");
	soma = nota[0] + nota[1] + nota[2] + nota[3] + nota[4] + nota[5];
	printf("Notas: %.2lf %.2lf %.2lf %.2lf %.2lf %.2lf\n", nota[0], nota[1], nota[2], nota[3], nota[4], nota[5]);
	printf("Resultado: %d\n", soma);
	
	printf("\n----- Soma dos Numeros Pares -----\n");
	printf("Numeros pares: ");
	for (i = 2; i <= soma; i += 2){
		printf("%d ", i);
		somaPar += i;
	}
	printf("\nResultado: %d\n", somaPar);
	
	printf("\n----- Soma dos Numeros Impares -----\n");
	printf("Numeros impares: ");
	for (i = 1; i <= soma; i += 2){
		printf("%d ", i);
		somaImpar += i;
	}
	printf("\nResultado: %d\n", somaImpar);
    
    printf("\n");
    system("pause");
	
	return 0;
}
