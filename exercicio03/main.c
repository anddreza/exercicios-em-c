#include <stdio.h>
#include <locale.h>
void soma (int *px, int *py){
     int temp;
     temp = *px + *py;
     printf ("\nA soma �: %d",temp);
}
void diferenca(int *px, int *py){
	int temp;
	if (*px == *py){
		printf ("\nOs n�meros s�o iguais!!");
	}else if (*px < *py){
		temp = *py - *px;
	}else {
		temp = *px - *py;
	}
	
}
void multiplica(int *px,int *py){
	int temp;
	temp = *px * *py;
	printf ("\nA multiplica��o �: %d",&temp);
}
 
int main (void){
	setlocale(LC_ALL,"");
    int a, b,c = 0;
    printf ("Digite um n�mero: \n");
    scanf ("%d",&a);
    printf ("Digite um n�mero: \n");
    scanf ("%d",&b);
    while (c<4){
    
    printf ("1-Voc� deseja somar \t\n2-Saber a diferen�a \t\n3-Multiplicar \t\n4-Sair");
    scanf ("%d",&c);
	    switch(c) {
	    	case 1:
	    		soma(&a,&b);
	    	case 2:
	    		diferenca(&a,&b);
	    	case 3:
	    		multiplica(&a,&b);
		}
	}
	
    getch();
    return 0;
}

