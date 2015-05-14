#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int legajo;
	char nombre;
	int sexo;
	int sueldo;
	char rta='s';
	int mujer=0;
	int hombre=0;
	
	while(rta=='s')
	{
	
	printf("\n ingresar numero de legajo: ");
	scanf("%d",&legajo);
	printf("\n ingresar nombre: ");
	scanf("%s",&nombre);
	printf("\n ingresar sexo (1=masc 2=fem): ");
	scanf("%d",&sexo);
	printf("\n ingrese su sueldo: ");
	scanf("%d",&sueldo);
	
	if(sexo==2 && sueldo>500)
	{
		mujer++;
	}
	
	if(sexo==1 && sueldo<400)
	{
		hombre++;
	}
	
	printf("desea ingresar otro? (s/n)");
	scanf("%s",&rta);
	}
	printf("hay %d mujeres que ganan mas de 500 y hay %d hombres que ganan menos de 400",mujer,hombre);
	
	return 0;
}
