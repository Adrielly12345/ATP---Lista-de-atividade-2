#include <stdio.h>
int main()

// declaracao de variaveis
{
	int a, b, c;
	
//entrada de dados	
	
	printf("Entre com os tres lados do triangulo: ");
	scanf("%d %d %d", &a, &b, &c);

//processamento/saida
	
	if(a+b > c && a+c > b && b+c > a){
		if(a == b && b == c){
			printf("TRIANGULO EQUILATERO\n");
		} else if(a == b || a == c || b == c){
			printf("TRIANGULO ISOSCELES\n");
		}else {
			printf("TRIANGULO ESCALENO\n");
		}
	}
	return 0;
}
