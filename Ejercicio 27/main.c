#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i ;
	char NyA[30];
	int belleza;
	int inteligencia;
	int cultura;
	int total=0;
	int total_max=0;
	char nombre_max[30];
	int cultura_total=0;
	int inteligencia_total=0;
	int belleza_total=0;
	for(i=0;i<3;i++)
	{
		printf("\n Ingrese Nombre y Apellido: ");
		scanf("&s",&NyA);
		fflush(stdin);
		printf("\n ingrese puntos por belleza: ");
		scanf("%d",&belleza);
		fflush(stdin);
		printf("ingrese puntos por inteligencia: ");
		scanf("%d",&inteligencia);
		fflush(stdin);
		printf("ingrese puntos por cultura general : ");
		scanf("%d",&cultura);
		fflush(stdin);
		
		belleza_total=belleza_total+belleza;
		inteligencia_total=inteligencia_total+inteligencia;
		cultura_total=cultura_total+cultura;
		
		total=belleza+inteligencia+cultura;
		
		if(total>total_max)
		{
			total_max=total;
			strcpy(nombre_max,NyA);
		}
	
	}
	
	printf("\n%s fue quien obtuvo mas puntaje, con : %d puntos",nombre_max,total_max);
	printf("\nen total se sumo %d puntos en Belleza, %d puntos en Cultura y %d puntos en Inteligencia",belleza_total,cultura_total,inteligencia_total);
		if(belleza_total>inteligencia_total && belleza_total>cultura_total)
		{
			printf("\n el que mas puntos acumulo fue BELLEZA");
		}
		if(cultura_total>inteligencia_total && cultura_total>belleza_total)
		{
			printf("\n el que mas puntos acumulo fue CULTURA");
		}
		else
		{
			printf("\n el que mas puntos acumulo fue INTELIGENCIA");
		}
	return 0;
}
