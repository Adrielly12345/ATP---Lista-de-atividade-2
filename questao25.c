#include <stdio.h>
int main()
// declaracao de variaveis
{
    float valor, total;
    int opcao;

//entrada de dados	
    printf("Entre com o valor do produto: ");
    scanf("%f", &valor);
    printf("Escolha a forma de pagamento:\n");
    printf("A vista em dinheiro ou cheque (10%% de desconto): 1\n");
    printf("A vista no cartao (5%% de desconto): 2\n");
    printf("Em 2 vezes (preco normal): 3\n");
    printf("Em 3 vezes (10%% de juros): 4\n");
    printf("Confirme o numero da opcao escolhida: ");
    scanf("%d", &opcao);

//processamento/saida
    if (opcao == 1){
        total = valor * 0.9;   
    } else if (opcao == 2) {
        total = valor * 0.95;  
    } else if (opcao == 3) {
        total = valor;          
    } else if (opcao == 4) {
        total = valor * 1.10;  
    } 
    printf("O total a pagar e: R$ %.2f\n", total);

    return 0;
}

