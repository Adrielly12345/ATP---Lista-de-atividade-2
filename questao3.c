#include <stdio.h>
#include <string.h>
int main()

//Declaracao de variaveis
{
	 char senha[20];
	 
//processamento de dados
	printf("Digite a senha: ");
	scanf("%5s", senha);
	
//processamento/saida
	if(strcmp(senha, "ASDFG") == 0){
		printf("Acesso permitido.\n");
	} else {
		printf("Acesso negado.\n");
	}
	return 0;
}
