#include <stdio.h>
int main()

//declaracao de variaveis
{
	int idade;

//entrada de dados	
	printf("Entre com a idade: ");
	scanf("%d", &idade);

//processamento/saida	
	if (idade >= 5 && idade <= 7) {
		printf("Categoria infantil A\n");
	} else if (idade >= 8 && idade <= 10) {
		printf("Categoria infantil B\n");
	} else if (idade >= 11 && idade <= 13) {
		printf("Categoria juvenil A\n");
	} else if (idade >= 14 && idade <= 17) {
		printf("Categoria juvenil B\n");
	} else if(idade >= 18){
		printf("Categoria senior\n");
	}
	return 0;
}
