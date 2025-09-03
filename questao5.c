#include <stdio.h>
int main()
{
	float salario, aumentoSalario;
	
	printf("Digite o salario do funcionario: ");
	scanf("%f", &salario);
	
	if(salario <= 300) {
		aumentoSalario = salario + (salario * 0.50);
	} else {
		aumentoSalario = salario + (salario * 0.30);
	} 
	printf("O salario reajustado e: %.2f\n", aumentoSalario);
	return 0;
}
