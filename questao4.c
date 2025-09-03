#include <stdio.h>
int main()

//Declaracao de variaveis

{
	int idade;
	
//processamento de dados
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);

//processamento/saida
	
	if(idade >= 18) {
		printf("Voce e maior de idade.\n");
	} else {
		printf("Voce e menor de idade.\n");
	}
	return 0;
}
