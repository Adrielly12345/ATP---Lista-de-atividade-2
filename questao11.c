#include <stdio.h>
int main()

//declaracao de variaveis
{
	int n1, n2;
	
//entrada de dados	
	printf("Entre com o primeiro numero: ");
	scanf("%d", &n1);
	printf("Entre com o segundo numero: ");
	scanf("%d", &n2);
	
//processamento/saida

	if (n1 < n2) {
		printf("O menor numero e: %.2d\n", n1);
	} else if (n2 < n1){
		printf("O menor numro e: %.2d\n", n2);
	}
	return 0;
 }
