#include <stdio.h>
int main()
{
	float altura, pesoIdeal;
	char sexo;
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite seu sexo (M para masculino ou F para feminino): ");
	scanf(" %c", &sexo);
	
	if(sexo == 'M' || sexo == 'm') {
		pesoIdeal = (72.7 * altura) - 58;
	} else if (sexo == 'F' || sexo == 'f'){
		pesoIdeal = (62.1 * altura) - 44.7;
	} else {
		printf("Sexo invalido\n");
		return 1;
	}
	printf("O peso ideal e: %.2f kg\n", pesoIdeal);
	return 0;
}

