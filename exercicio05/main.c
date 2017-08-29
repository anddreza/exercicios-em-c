#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 5. Construa um programa que define um tipo novo de dados, 
para uma estrutura de um animal, deverá conter atributos como: raça, cor, peso e sexo.  
E solicite ao usuário do programa 10 espécies e depois imprima em tela. */
typedef char Vetor[10][40];
typedef float Vetor2[10];

typedef struct animal{
	Vetor raca;
	Vetor cor;
	Vetor2 peso;
	Vetor sexo;	
}Animal;
//Método para cadastrar os animais
void cadastro(Animal *a)
{
	int i;
	for (i=0;i<3;i++)
	{
	printf ("Digite o nome da Raça: \n");
	scanf ("%s",a->raca[i]);
	fflush(stdin);
	printf ("Digite a Cor: \n");
	scanf ("%s", a->cor[i]);
	fflush(stdin);
	printf ("Digite o peso: \n");
	scanf ("%f", &a->peso[i]);
	fflush(stdin);
	printf ("Digite a sexo M ou F: \n");
	scanf ("%s", a->sexo[i]);
	fflush(stdin);
	}
}
void imprime(Animal *a)
{
	System("cls");
	int i;
	for(i=0;i<3;i++) 
	{
		printf ("_________________________");
		printf ("Nome da Raça: %s \n",a->raca[i]);
		printf ("Nome da Cor: %s \n",a->cor[i]);
		printf ("Nome da peso: %.2f \n",a->peso[i]);
		printf ("Nome da sexo: %s \n",a->sexo[i]);
	}
}
void main() {
	
	setlocale(LC_ALL,"");
	Animal a;
	cadastro(&a);
	imprime(&a);
}
