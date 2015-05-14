#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cant;
	int cuad;
	int cubo;
	int i;
	
	printf("cuantos numeros quiere ingresar?: ");
	scanf("%d",&cant);
	printf("NUMERO\tCUADRADO\tCUBO");
	for(i=1;i<=cant;i++)
	{
		cuad=i*i;
		cubo=i*i*i;
	printf("\n %d\t%d\t%d",i,cuad,cubo);		
	}
	return 0;
	
}
