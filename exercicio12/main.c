#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 12. Faça uma função que calcule a média de uma sequência de valores, 
os valores deverão ser passados por meio de um vetor de referência. */
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
	printf ("Resultado da média %.2f",r);
}
int main() 
{
	setlocale(LC_ALL,"");
	int i,a;
	Valores v;
	printf ("Digite quantos números deseja fazer a média: ");
	scanf("%d",&v.g);
	for (a=0;a<v.g;a++)
	{
		if (a==0)
		{
			printf ("digite o primeiro número: ");
			scanf("%f",&v.val[a]);
		}
		else
		{
		printf ("Digite o número %dº",a+1);
		scanf("%f",&v.val[a]);
		}
	}
	media(&v);		
}
