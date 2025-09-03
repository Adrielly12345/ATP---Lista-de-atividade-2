#include <stdio.h>
int main()

// declaracao de variaveis
{
	float salario,	valorHrex, vlDependentes, salariomes, valorHR, vlhorasextras, bruto, irrf,
	liquido, gratificacao, receber;
	int horastrab, dependentes, extras;

//entrada de dados	
	
	printf("Entre com o valor do salario minimo: ");
	scanf("%f", &salario);
	printf("Entre com a quantidade de horas trabalhadas: ");
	scanf("%d", &horastrab);
	printf("Entre com a quantidade de horas Extras trabalhadas: ");
	scanf("%d", &extras);
	printf("Entre com o numero de dependentes: ");
	scanf("%d", &dependentes);
	
	valorHR = salario / 5;
	salariomes = horastrab * valorHR;
	valorHrex = valorHR * 1.5;
	vlDependentes = dependentes * 32;
	bruto = salariomes + vlDependentes + valorHrex;

//processamento/saida
	
	if (bruto < 200){
		irrf = 0;
	} else if ( bruto <= 500){
		irrf = bruto * 0.10;
	} else {
		irrf = bruto * 0.20;
	} 
	salario = bruto - irrf;
	if(salario <= 350){
		gratificacao = 100;
	} else {
		gratificacao = 50;
	}
	receber = salario + gratificacao;
	
	
	printf("O SALARIO DO MES E: R$ %.2f\n", salariomes);
	printf("O SALARIO BRUTO E: R$ %.2f\n", bruto);
	printf("O VALOR DE HORAS EXTRAS: R$ %.2f\n", valorHrex);
	printf("O VALOR DE DEPENDENTES E: R$ %.2f\n", vlDependentes);
	printf("O IRRF E: R$ %.2f\n", irrf);
	printf("O SALARIO LIQUIDO E: R$ %.2f\n", salario);
	printf("O VALOR DA GRATIFICACAO E: R$ %.2f\n", gratificacao);
	printf("O SALARIO A RECEBER: R$ %.2f\n", receber);

return 0;
}
