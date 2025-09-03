#include <stdio.h>
int main()

//declaracao de variaveis
{
	int cod;
	float valor;
	
//entrada de dados	
	printf("Entre com o valor do produto: ");
	scanf("%f", &valor);
	printf("Entre com o codigo do produto: ");
	scanf("%d", &cod);
	printf("\nValor: %.2f", valor);
	printf("\nProcedencia: ");
	
//processamento/saida

	if (cod == 1) {
		printf("Sul\n");
	} else if (cod == 2) {
		printf("Norte\n");
	} else if (cod == 3){
		printf("Leste\n");
	} else if (cod == 4){
		printf("Oeste\n");
	} else if (cod == 5 || cod == 6){
		printf("Nordeste\n");
	} else if (cod == 7 || cod == 8 || cod == 9){
		printf("Sudeste\n");
	} else if (cod >= 10 && cod <=20){
		printf("Centro-oeste\n");
	} else if(cod >= 21 && cod <=30){
		printf("Nordeste\n");
	} else{
		printf("Codigo inexistente\n");
	}
	return 0;
 }
