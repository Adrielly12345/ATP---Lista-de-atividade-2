#include <stdio.h>
int main() 

// declaracao de variaveis
{
    int angulo;

//entrada de dados	
    printf("Emtre com o numero do angulo em graus: ");
    scanf("%d", &angulo);

    angulo = angulo % 360;
    
//processamento/saida
    if (angulo >= 0 && angulo < 90) {
        printf("1o quadrante\n");
    } else if (angulo >= 90 && angulo < 180) {
        printf("2o quadrante\n");
    } else if (angulo >= 180 && angulo < 270) {
        printf("3o quadrante\n");
    } else if (angulo >= 270 && angulo < 360) {
        printf("4o quadrante\n");
    } else if (angulo <= 0 && angulo > -90) {
        printf("1o quadrante\n");
    } else if (angulo <= -90 && angulo > -180) {
        printf("2o quadrante\n");
    } else if (angulo <= -180 && angulo > -270) {
        printf("3o quadrante\n");
    } else if (angulo <= -270 && angulo >= -360) {
        printf("4o quadrante\n");
    } else {
        printf("Angulo inexistente.\n");
    } 
	return 0;
}

