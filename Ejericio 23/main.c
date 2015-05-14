#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
	int cant;
	int i ;
	int flag=0;
	int total=0;
	int max;
	int min;
	float prom;
	
	for(i=0;i<3;i++)
	{
	
	printf("ingresar cantidad de agua que cayo hoy en mm: ");
	scanf("%d",&cant);
	total=total+cant;
	
	 while(flag==0)
	 {
	 	max=cant;
	 	min=cant;
	 	
	 	flag=1;
	 }
	 
	 if(cant>max)
	 {
	 	max=cant;
	 }
	 if(cant<min)
	 {
	 	min=cant;
	 }
	}
	prom=total/3;
	
	printf("el minimo es: %d\n el maximo es: %d\n y el promedio de lluvia es de : %2f ",min,max,prom);
	return 0;
}
