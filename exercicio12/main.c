#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 12. Fa�a uma fun��o que calcule a m�dia de uma sequ�ncia de valores, 
os valores dever�o ser passados por meio de um vetor de refer�ncia. */
typedef struct valores
{
	float val[10];
	int g;
}Valores;

void media(Valores *v)
{
	int b,n,c,r;
	printf ("valor do n: %d \n",n);
	for (b=0;b<v->g;b++)
	{
		c = c+v->val[b];
	}
	r = c/n;
	printf ("Resultado da m�dia %.2f",r);
}
int main() 
{
	setlocale(LC_ALL,"");
	int i,a;
	Valores v;
	printf ("Digite quantos n�meros deseja fazer a m�dia: ");
	scanf("%d",&v.g);
	for (a=0;a<v.g;a++)
	{
		if (a==0)
		{
			printf ("digite o primeiro n�mero: ");
			scanf("%f",&v.val[a]);
		}
		else
		{
		printf ("Digite o n�mero %d�",a+1);
		scanf("%f",&v.val[a]);
		}
	}
	media(&v);		
}
