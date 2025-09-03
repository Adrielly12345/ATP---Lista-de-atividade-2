#include <stdio.h>
int main()

// declaracao de variaveis

{
	int temp, a, b, c;
	
//entrada de dados	

	printf("Entre com os tres numeros: ");
	scanf("%d %d %d", &a, &b, &c);
	
//processamento/saida
	
	if(a > b){
		temp = a; a=b; b=temp;
	} if (a > c){
		temp = a; a=c; c=temp;
	} if (b > c){
		temp = b; b = c; c = temp;
	}
	printf("EM ORDEM CRESCENTE: %d %d %d\n", a, b, c);
	return 0;
}
