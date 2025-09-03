#include <stdio.h>
int main()
//Declaracao de variaveis
{
	float  nota1, nota2, nota3, nota4, media;

//processamento de dados	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	printf("Digite a quarta nota: ");
	scanf("%f", &nota4);

//processamento/saida	
	media = (nota1 + nota2 + nota3 + nota4)/4;
	
	printf("A media do aluno e: %.2f\n", media);
	
	if(media >= 7.0) {
		printf("Aluno aprovado!\n");
	} else {
		printf("Aluno reprovado.\n");
	}
	return 0;
}
