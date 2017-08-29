#include <stdio.h>
#include <stdlib.h>

/*8. Fa�a um programa para colocar tr�s n�meros em ordem crescente. 
Deve ter uma fun��o para fazer a troca dos valores, use uma fun��o usando passagem de par�metro por refer�ncia. */
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
		printf ("Digite um n�mero:");
		scanf ("%d",&num.a[i]);
		fflush(stdin);
	}
	ordena(&num);
	system("cls");
	printf ("N�meros ordenados:\n");
	for (i=0;i<3;i++)
	{
		printf ("%d ",num.a[i]);
	}
}
