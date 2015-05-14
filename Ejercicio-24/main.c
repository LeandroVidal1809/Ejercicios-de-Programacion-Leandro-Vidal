#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int flag=0;
	char rta='s';
	char nombre;
	int altura=0;
	int max; 
	char nombremax;
	
	while(rta=='s')
	{
	
	
	printf("ingrese su nombre: ");
	scanf("%s",&nombre);
	printf("ingrese su altura en cm : ");
	scanf("%d",&altura);
	
	while(flag==0)
	{
	
	max=altura;
	strcpy(nombre,nombremax);
	
	}
	
	if(altura>max)
	{
		max=altura;
	 strcpy(nombre,nombremax);	
	}
	
	printf("desea ingresar otro? (s/n): ");
	scanf("%s",&rta);
	
	}
	
	printf("%s es el mas alto , el mide %d",nombremax,max);
	return 0;
}
