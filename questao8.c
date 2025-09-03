#include <stdio.h>
int main()

//declaracao de variaveis
{
	float n1, n2, n3, media;

//entrada de dados	
	printf("Entre com a nota do trabalho feito no laboratorio: ");
	scanf("%f", &n1);
	printf("Entre com a nota da avaliacao: ");
	scanf("%f", &n2);
	printf("Entre com a nota da avaliacao final: ");
	scanf("%f", &n3);
	
	media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
	printf("Media final: %.2f\n", media);

//processamento/saida
	if (media >= 8 && media <= 10) {
		printf("Conceito A\n");
	} else if (media >= 7 && media < 8) {
		printf("Conceito B\n");
	} else if (media >= 6 && media < 7) {
		printf("Conceito C\n");
	} else if (media >= 5 && media < 6) {
		printf("Conceito D\n");
	} else if(media < 5){
		printf("Conceito E\n");
	}
	return 0;
 }
