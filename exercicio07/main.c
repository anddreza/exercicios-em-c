#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 7.  Fa�a um programa que pe�a um n�mero para calcular o fatorial. 
Deve tem uma fun��o para calcular o fatorial (por refer�ncia).*/
typedef struct fatorial
{
	int fat, result;
}Fatorial;

void fatorar(Fatorial *f)
{
	int a;
	a = f->fat;
	for(f->result = 1;a>1;a--)
	{
		f->result = f->result * a;
	}
	printf ("Resultado: %d",f->result);
	
}
void main() 
{
	Fatorial f;
	setlocale(LC_ALL,"");
	printf ("Digite o numero que deseja calcular seu fatorial:");
	scanf ("%d",&f.fat);
	printf ("\n");
	fatorar(&f);
	
}
