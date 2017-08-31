#include <stdio.h>
#include <stdlib.h>

/* 11. Faça uma função que leia um texto e converta este texto para maiúscula. 
O texto deve ser passado para função por referência.*/
typedef struct letra
{
	char frase[22];
}Letra;
void transforma (Letra *l)
{
	int i,n;
	n = sizeof(l->frase)/sizeof(l->frase[0]);
	for(i=0;i<n;i++)
	{
	l->frase[i] = toupper(l->frase[i]);
	}
	printf ("%s\n",l->frase);
}
int main() 
{
	Letra l;
	printf ("Digite seu nome\n");
	scanf("%s",l.frase);
	fflush(stdin);
	
	transforma(&l);
	
}
