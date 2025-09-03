#include <stdio.h>
int main ()

// declaracao de variaveis
{
    int idade, categoria;
    char grupo;

//entrada de dados	
    printf("Digite a idade do segurado: ");
    scanf("%d", &idade);

//processamento/saida
    if (idade < 18 || idade > 70) {
        printf("Idade invalida para adquirir seguro.\n");
        return 0;
    }

    printf("Entre com o grupo de risco (b - baixo, m - medio, a - alto): ");
    scanf(" %c", &grupo);
    if (idade >= 18 && idade <= 24) {
        if (grupo == 'b' || grupo == 'B') categoria = 7;
        else if (grupo == 'm' || grupo == 'M') categoria = 8;
        else if (grupo == 'a' || grupo == 'A') categoria = 9;
        else {
            printf("Grupo de risco invalido.\n");
            return 0;
        }
    } 
    else if (idade >= 25 && idade <= 40) {
        if (grupo == 'b' || grupo == 'B') categoria = 4;
        else if (grupo == 'm' || grupo == 'M') categoria = 5;
        else if (grupo == 'a' || grupo == 'A') categoria = 6;
        else {
            printf("Grupo de risco invalido.\n");
            return 0;
        }
    } 
    else {
        if (grupo == 'b' || grupo == 'B') categoria = 1;
        else if (grupo == 'm' || grupo == 'M') categoria = 2;
        else if (grupo == 'a' || grupo == 'A') categoria = 3;
        else {
            printf("Grupo de risco invalido.\n");
            return 0;
        }
    }
    printf("Codigo do seguro: %d\n", categoria);
    return 0;
}
