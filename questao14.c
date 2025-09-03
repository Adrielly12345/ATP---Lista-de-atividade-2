#include <stdio.h>
int main()

//declaracao de variaveis
{
	int codigo;
	
//entrada de dados	
	printf("Entre com o codigo referente ao cargo (1 a 5): ");
	scanf("%d", &codigo);
	
//processamento/saida

	if (codigo == 1) {
		printf("Escritutario com o aumento de: 50%%\n");
	} else if (codigo == 2){
		printf("Secretario com o aumento de: 35%%\n");
	} else if (codigo == 3){
		printf("Caixa com o aumento de: 20%%\n");
	} else if (codigo == 4){
		printf("Gerente com o aumento de: 10%%\n");
	} else if (codigo == 5){
		printf("Diretor e nao ha aumento");
	} 
	return 0;
 }
