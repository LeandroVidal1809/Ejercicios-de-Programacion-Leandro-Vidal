#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero_uno;
	int numero_dos;
	int aux;
	
	printf("ingrese primer numero: ");
	scanf("%d",&numero_uno);
	
	printf("ingrese segundo numero: ");
	scanf("%d",&numero_dos);
	
	aux=numero_uno;
	numero_uno=numero_dos;
	numero_dos=aux;
	
	printf("numeros invertidos : primero %d y segundo %d",numero_uno,numero_dos);
	return 0;
}
