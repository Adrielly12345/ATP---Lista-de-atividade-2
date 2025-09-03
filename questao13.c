#include <stdio.h>
int main()

//declaracao de variaveis
{
	int idade;
	
//entrada de dados	
	printf("Entre com a idade: ");
	scanf("%d", &idade);
	
//processamento/saida

	if (idade >= 0 && idade <=2) {
		printf("Recem-nascido\n");
	} else if (idade >= 3 && idade <= 11){
		printf("Crianca\n");
	} else if (idade >= 12 && idade <= 19){
		printf("Adolescente\n");
	} else if (idade >= 20 && idade <= 55){
		printf("Adulto\n");
	} else if (idade > 55){
		printf("Idoso\n");
	} 
	return 0;
 }
