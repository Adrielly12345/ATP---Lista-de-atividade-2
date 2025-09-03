#include <stdio.h>
int main()
//Declaracao de variaveis
{
	float salario, reajusteSalario;
	
//processamento de dados
	printf("Digite o salario do funcionario: ");
	scanf("%f", &salario);
	
//processamento/saida
	if(salario < 500) {
		reajusteSalario = salario + (salario * 0.30);
		printf("O salario com reajuste e: %.2f\n", reajusteSalario);
	} else {
		printf("O funcionario nao tem direito a reajuste.\n");
	}
	return 0;
}
