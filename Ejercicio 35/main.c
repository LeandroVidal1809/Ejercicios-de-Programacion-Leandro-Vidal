#include <stdio.h>
#include <stdlib.h>
#include "libre.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero[5];
	int i;
	int total=0;
	int prom;
	int maximo;
	int minimo;
	
	for(i=0;i<5;i++)
	{
	
	printf("ingrese un numero: ");
	scanf("%d",&numero[i]);
	
		while(numero[i]<-100 || numero[i]>100)
		{
			printf("ingrese  numero valido : ");
			scanf("%d",&numero[i]);
		}
	total=total+numero[i];
	
	}
	
	maximo=max(numero);
	minimo=min(numero);
	prom=total/5;
	printf("min %d max %d prom %d",minimo, maximo,prom);
	
	
	return 0;
}
