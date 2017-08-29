/*7. Construa um programa para calcular a �rea e de um circulo, a 
�rea deve ser do tipo de ponteiro.
*/

#include <stdio.h>
#include <math.h>

void calculaArea(float *area, float raio) {
	float calculo = M_PI * pow(raio,2);
	*area = calculo;
}

int main() {
	float raio, area;
	
	printf("Digite raio: ");
	scanf("%f", &raio);
	fflush(stdin);
	
	calculaArea(&area,raio);
	
	printf("Area: %f", area);
}
