#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* 10. Fa�a uma fun��o que leia um nome, converta o primeiro caractere deste nome para mai�scula. 
O nome deve ser passado para fun��o por refer�ncia.*/
typedef struct letra
{
	char frase[22];
}Letra;
void transforma (Letra *l)
{
	
	l->frase[0] = toupper(l->frase[0]);
	printf ("%s",l->frase);
}
int main() 
{
	Letra l;
	printf ("Digite seu nome\n");
	scanf("%s",l.frase);
	fflush(stdin);
	
	transforma(&l);
	
}
