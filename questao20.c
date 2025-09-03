#include <stdio.h>
#include <math.h>
int main()

// declaracao de variaveis

{
	float x1, x2, a, b, c, delta;
	
//entrada de dados	

	printf("Digite os respectivos numeros para A, B e C: ");
	scanf("%f %f %f", &a, &b, &c);

//processamento/saida
	
	if (a == 0){
		printf("Numero invalido\n");
	} else {
		delta = b * b - 4*a*c;
		if(delta < 0) {
			printf("Raizes invalidas\n");
		} else{
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
		}
	}
	return 0;
}
