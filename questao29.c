#include <stdio.h>
int main()
// declaracao de variaveis
{
	int n1, n2, n3, n4;

//entrada de dados	

    printf("Entre com quatro numeros inteiros:\n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

//processamento/saida

    if (n1 % 2 == 0 && n1 % 3 == 0){
        printf("%d e divisivel por 2 e 3\n", n1);
	    } if (n2 % 2 == 0 && n2 % 3 == 0) {
        printf("%d e divisivel por 2 e 3\n", n2);
		} if (n3 % 2 == 0 && n3 % 3 == 0){
        printf("%d e divisivel por 2 e 3\n", n3);
		} if (n4 % 2 == 0 && n4 % 3 == 0){
        printf("%d e divisivel por 2 e 3\n", n4);
		}

    return 0;
}
