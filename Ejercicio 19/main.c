#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int fin=1;
	int vendedor_uno;
	int vendedor_dos;
	int vendedor_tres;
	int importe;
	int numero;
	int ganancia;
	
	
	while(fin!=0)
	{
	printf("ingrese numero de vendedor: ");
	scanf("%d",&numero);
	switch(numero)
	{
		case 1:
			printf("ingrese importe: ");
			scanf("%d",&importe);
		ganancia=importe/20;
		vendedor_uno=vendedor_uno+ganancia;	
		break;
		
		case 2:
			printf("ingrese importe: ");
			scanf("%d",&importe);
		ganancia=importe/20;
		vendedor_dos=vendedor_dos+ganancia;	
		break;
		
		case 3:
			printf("ingrese importe: ");
			scanf("%d",&importe);
		ganancia=importe/20;
		vendedor_tres=vendedor_tres+ganancia;		
		break;
		
		default:
		printf("no existe");	
	}
	printf("terminar presione 0: ");
	scanf("%d",&fin);
	}
	printf("Vendedor uno gana: %d\n Vendedor dos gana: %d\n Vendedor tres gana:%d\n ",vendedor_uno,vendedor_dos,vendedor_tres);
	return 0;
}
