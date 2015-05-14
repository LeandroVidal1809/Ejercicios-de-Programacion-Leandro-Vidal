#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int numero;
int i;

printf("ingrese un numero: ");
scanf("%d",&numero);


for(i=1;i<11;i++)
{
	printf("\n %d * %d = %d",numero,i,numero*i);
}
	return 0;
}
