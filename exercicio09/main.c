#include <stdio.h>
#include <stdlib.h>

/* 9. Faça uma função que receba como parâmetros por referência a linha, 
a coluna e uma mensagem, esta função deve imprimir na tela a mensagem na posição solicitada.  */
typedef char frase[40][40];
void main() 
{
	frase a;
	int lin,col;
	printf ("Digite a linha que deseja guardar\n");
	scanf ("%d",&lin);
	fflush(stdin);
	printf ("Digite a coluna\n");
	scanf ("%d",&col);
	fflush(stdin);
	printf ("Digite uma frase\n");
	gets(a[lin][col]);
	fflush(stdin);
	
	printf ("%s",a[lin][col]);
}
