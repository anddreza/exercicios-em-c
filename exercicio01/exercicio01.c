/*6. Construa um programa para calcular uma equação de segundo grau, onde x' e x'' 
deverão ser um ponteiro, imprima o valor de x'e x'' após a execução do programa.
*/

#include <stdio.h>
#include <math.h>

typedef struct equacao{
	float x1, x2, a, b, c;
}Equacao;

void segundoGrau(Equacao *eq){
	float delta = ((eq->b) * (eq->b)) - (4 * (eq->a) * (eq->c));	
	if (delta >= 0) {
	    eq->x1 = ((-eq->b) + sqrt(delta)) / (2 * (eq->a));
	    eq->x1 = ((-eq->b) - sqrt(delta)) / (2 * (eq->a));		
	} else {
		printf("\nRaiz negativa\n");
	}
}

int main() {
	Equacao eq;
	
	printf("Digite A: ");
	scanf("%f", &eq.a);
	fflush(stdin);
	
	printf("Digite B: ");
	scanf("%f", &eq.b);
	fflush(stdin);
	
	printf("Digite C: ");
	scanf("%f", &eq.c);
	fflush(stdin);
	
	segundoGrau(&eq);
	
	printf("X1: %f\n", eq.x1);
	printf("X2: %f\n", eq.x2);
	
	return 0;
}

