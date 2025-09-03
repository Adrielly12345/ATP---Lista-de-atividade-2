#include <stdio.h>
#include <math.h>
int main()

//declaracao de variaveis
{
	int opcao;
	float n1, n2, total;
	
//entrada de dados	
	printf("\nEscolha um opcao:\n");
	printf("Para soma: 1\n ");
	printf("Para raiz quadrada: 2\n ");
	printf("Para finalizar: 3\n ");
	printf("Opcao escolhida: ");
	scanf("%d", &opcao);
	
//processamento/saida

	if (opcao == 1) {
		printf("Entre com um numero: ");
		scanf("%f", &n1);
		printf("Entre com o segundo numero: ");
		scanf("%f", &n2);
		total = n1 + n2;
		printf("Total: %.2f\n", total);
	} else if (opcao == 2){
		printf("Entre com um numero: ");
		scanf("%f", &n1); 
		if (n1 >= 0){
			total = sqrt(n1);
			printf("Raiz quadrada: %.2f\n", total);
		}else if (opcao == 3){
			printf("Finalizando.\n");
		}
	}
	return 0;	
	}
	
