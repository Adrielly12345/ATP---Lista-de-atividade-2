#include <stdio.h>
int main()

//declaracao de variaveis
{
	float n1, n2, n3, media;
	
//entrada de dados	
	printf("Entre com a primeira nota: ");
	scanf("%f", &n1);
	printf("Entre com a sengunda nota: ");
	scanf("%f", &n2);
	printf("Entre com a terceira nota: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3; 
//processamento/saida

	printf("Media e: %.2f\n", media);

	if (media < 5) {
		printf("Reprovado\n");
	} else if (media < 7){
		printf("Exame final\n");
	} else {
		printf("Aprovado\n");
	}
	return 0;
 }
