#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	float num_pies;
	float num_pulgadas;
	
	printf("ingrese un numero: ");
	scanf("%d",&numero);
	
	num_pulgadas=numero*2.54;
	num_pies=num_pulgadas*12;
	
	printf("%d cm  son %1f pies y  %f pulgadas",numero,num_pies,num_pulgadas);
	return 0;
}
