#include <stdio.h>
int main() 

// declaracao de variaveis

{
    char resp;

//entrada de dados	

    printf("O animal e mamifero? (responda com sim ou nao): ");
    scanf(" %c", &resp);

//processamento/saida

    if (resp == 's' || resp == 'S') {
        printf("E quadrupede? (responda com sim ou nao): ");
        scanf(" %c", &resp);
        if (resp == 's' || resp == 'S') {
            printf("E carnivoro? (responda com sim ou nao): ");
            scanf(" %c", &resp);
            if (resp == 's' || resp == 'S')
                printf("Animal correspondente e: LEAO\n");
            else
                printf("Animal correspondente e: CAVALO\n");
        } else {
            printf("E bipede? (responda com sim ou nao): ");
            scanf(" %c", &resp);
            if (resp == 's' || resp == 'S') {
                printf("E onivoro? (responda com sim ou nao): ");
                scanf(" %c", &resp);
                if (resp == 's' || resp == 'S')
                    printf("Animal correspondente e: HOMEM\n");
                else
                    printf("Animal correspondente e: MACACO\n");
            } else {
                printf("E voador? (responda com sim ou nao): ");
                scanf(" %c", &resp);
                if (resp == 's' || resp == 'S')
                    printf("Animal correspondente e: MORCEGO\n");
                else printf("Animal correspondente e: BALEIA\n");
            }
        }

    } else {
        printf("O animal e ave? (responda com sim ou nao: ");
        scanf(" %c", &resp);
        if (resp == 's' || resp == 'S') {
            printf("E nao voadora? (responda com sim ou nao): ");
            scanf(" %c", &resp);
            if (resp == 's' || resp == 'S') {
                printf("E tropical? (responda com sim ou nao): ");
                scanf(" %c", &resp);
                if (resp == 's' || resp == 'S')
                    printf("Animal correspondente e: AVESTRUZ\n");
                else printf("Animal correspondente e: PINGUIM\n");
            } else {
                printf("E nadadora? (responda com sim ou nao): ");
                scanf(" %c", &resp);
                if (resp == 's' || resp == 'S')
                    printf("Animal correspondente e: PATO\n");
                else printf("Animal correspondente e: AGUIA\n");
            }
        } else {
            printf("O animal e reptil? (responda com sim ou nao): ");
            scanf(" %c", &resp);
            if (resp == 's' || resp == 'S') {
                printf("Tem casco? (s/n): ");
                scanf(" %c", &resp);
                if (resp == 's' || resp == 'S')
                    printf("Animal correspondente e: TARTARUGA\n");
                else {
                    printf("E carnivoro? (responda com sim ou nao): ");
                    scanf(" %c", &resp);
                    if (resp == 's' || resp == 'S')
                        printf("Animal correspondente e: CROCODILO\n");
                    else
                        printf("Animal correspondente e: COBRA\n");
                }
            } else {
                printf("Nao foi possivel identificar o animal.\n");
            }
        }
    }
    return 0;
}

