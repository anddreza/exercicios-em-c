#include <stdio.h>
#include <stdlib.h>

/* 9. Fa�a uma fun��o que receba como par�metros por refer�ncia a linha, 
a coluna e uma mensagem, esta fun��o deve imprimir na tela a mensagem na posi��o solicitada.  */
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
