#include <stdio.h>
#include <stdlib.h>

/*8. Faça um programa para colocar três números em ordem crescente. 
Deve ter uma função para fazer a troca dos valores, use uma função usando passagem de parâmetro por referência. */
typedef int cresc[3];
typedef struct crescente
{
	cresc a;
}Crescente;

void ordena(Crescente *num)
{
	int aux,i,j;
	for (i=0;i<3; i++)
	{
		for(j=i+1;j<3;j++)
		{
			if (num->a[i]>num->a[j])
			{
			aux=num->a[i];
			num->a[i]=num->a[j];
			num->a[j]=aux;
			}
		}
	}
}
void main() 
{
	int i;
	Crescente num;
	for (i=0;i<3;i++)
	{
		if(i!=0)
		{
			printf ("\n");
		}
		printf ("Digite um número:");
		scanf ("%d",&num.a[i]);
		fflush(stdin);
	}
	ordena(&num);
	system("cls");
	printf ("Números ordenados:\n");
	for (i=0;i<3;i++)
	{
		printf ("%d ",num.a[i]);
	}
}
