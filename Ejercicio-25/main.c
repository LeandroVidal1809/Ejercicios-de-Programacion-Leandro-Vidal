#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char alumno[20];
	char rta='s';
	int nota[7];
	int total=0;
	int prom=0;
	int i ;
	while(rta=='s')
	{
	
	
	printf("ingrese nombre del Alumno: ");
	scanf("%s",&alumno);
	
	for(i=1;i<7;i++)
	{
		printf("ingrese nota numero %d: ",i);
		scanf("%d",&nota[i]);
		total=total+nota[i];
	}
	prom=total/6;
	
	printf("el promedio de %s es de : %d",alumno,prom);
	
	printf("\n desea ingresar otro? (s/n): ");
	scanf("%s",&rta);
	
	}
	return 0;
}
