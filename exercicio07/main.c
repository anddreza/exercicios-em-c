#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 7.  Faça um programa que peça um número para calcular o fatorial. 
Deve tem uma função para calcular o fatorial (por referência).*/
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
