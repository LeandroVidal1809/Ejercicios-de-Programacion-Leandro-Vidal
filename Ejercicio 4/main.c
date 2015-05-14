
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int base;
	int altura;
	int resultado;
	
	printf("ingrese base del triangulo :");
	scanf("%d",&base);
	
	printf("ingrese altura del triangulo :");
	scanf("%d",&altura);
	
	resultado=(base*altura)/2;
	
	printf("la superficie del triangulo es : %d",resultado);
	return 0;
}
