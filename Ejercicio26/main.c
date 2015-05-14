#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char fecha[10];
	int tempmax;
	int tempmin;
	int minima;
	char fecha_min[10];
	char fecha_max[10];
	int maxima;
	char rta='s';
	int flag=0;
	
	while(rta=='s')
	{
	printf("\n ingrese fecha : ");
	scanf("%s",&fecha);
	printf("\n ingrese temperatura maxima: ");
	scanf("%d",&tempmax);
	printf("\n ingrese temperatura minima: ");
	scanf("%d",&tempmin);
	while(flag==0)
	{
		minima=tempmin;
		maxima=tempmax;
		strcpy(fecha_min,fecha);
		strcpy(fecha_max,fecha);
		flag=1;
		
	}
		
		if(tempmin<minima)
		{
		minima=tempmin;	
		strcpy(fecha_min,fecha);
		}
		
		if(tempmax>maxima)
		{
		maxima=tempmax;	
		strcpy(fecha_max,fecha);
		}
		
		
	printf("desea ingresar otro? (s/n): ");
	scanf("%s",&rta);
	}
	
printf("el dia mas frio fue %s con %d grados",fecha_min,minima);
printf("el dia mas calido fue %s con %d grados",fecha_max,maxima);
	
	
	return 0;
}
