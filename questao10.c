#include <stdio.h>
int main()

//declaracao de variaveis
{
	int n1;
	
//entrada de dados	
	printf("Entre com um numero: ");
	scanf("%d", &n1);
	
//processamento/saida

	if (n1 % 2 == 0) {
		printf("O numero e par.\n", n1);
	} else {
		printf("O numero e impar.\n", n1);
	}
	return 0;
 }
