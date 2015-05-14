#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	
	printf("ingrese un numero: ");
	scanf("%d",&numero);
	
	if(numero<0)
	{
		printf("el numero es negativo");
	}
		if(numero>0)
	{
		printf("el numero es positivo");
	}
		if(numero==0)
	{
		printf("el numero es neutro");
	}
	return 0;
}
