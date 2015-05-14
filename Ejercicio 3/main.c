#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int numero;
	int mayor=0;
	int menor=0;
for(i=0;i<10;i++)
{
     printf("\n ingrese un numero: ");
     scanf("%d",&numero);
     	if(numero>0)
     	{mayor++;
		 }
		if(numero<0)
     	{menor++;
		 }
		 
}	
	printf("\n numeros menores : %d",menor);
	printf("\n numeros mayores : %d",mayor);
	
	return 0;
}
