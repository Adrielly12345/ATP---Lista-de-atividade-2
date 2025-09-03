#include <stdio.h>
int main()

// declaracao de variaveis
{
    int extras, faltas, premio;
    float H, hrExtra, hrFalta;

//entrada de dados	
    printf("Entre com os minutos de horas extras: ");
    scanf("%d", &extras);
    printf("Entre com os minutos de horas-falta: ");
    scanf("%d", &faltas);

    hrExtra = extras / 60.0;
    hrFalta = faltas / 60.0;
    H = extras - ((2.0 / 3.0) * faltas);

//processamento/saida
    if (H > 2400){
        premio = 500;
    } else if (H >= 1800){
        premio = 400;
    } else if (H >= 1200){
        premio = 300;
    }else if (H >= 600){
        premio = 200;
    }else {
        premio = 100;
		}

    printf("\nHoras extras: %.1f horas\n", hrExtra);
    printf("Horas-falta: %.1f horas\n", hrFalta);
    printf("Premio: R$ %d\n", premio);

    return 0;
}

