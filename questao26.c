#include <stdio.h>
int main() 

// declaracao de variaveis

{
    int n1, n2;
    char operacao;
    float total;

//entrada de dados	

    printf("Entre com o primeiro numero: ");
    scanf("%d", &n1);
    printf("Entre o segundo numero: ");
    scanf("%d", &n2);
    printf("Escolha a operacao desejada (+, -, *, /): ");
    scanf(" %c", &operacao);

//processamento/saida

    switch (operacao) {
        case '+':
            total = n1 + n2;
            printf("Total: %.2f\n", total);
            break;
        case '-':
            total = n1 - n2;
            printf("Total: %.2f\n", total);
            break;
        case '*':
            total = n1 * n2;
            printf("Total: %.2f\n", total);
            break;
        case '/':
            if (n2 != 0) {
                total = (float) n1 / n2;
                printf("Total: %.2f\n", total);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;
        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}

