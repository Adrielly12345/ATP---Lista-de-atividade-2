#include <stdio.h>
int main()

// declaracao de variaveis

{
	int num;

//entrada de dados		
	printf("Digite um numero: ");
	scanf("%d", &num);

//processamento/saida	
	if(num > 0){
		printf("Numero positivo");
	} else {
		if (num < 0) {
			printf("Numero negativo");
		} else {
			printf("Zero");
		}
	}
	return 0;
}
