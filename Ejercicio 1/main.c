#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float numero;
	float total=0;
	int i;
	float prom;
	
		for(i=0;i<5;i++)	
		{

			printf("\ningrese un numero: ");
			scanf("%f",&numero);
			total=total+numero;
		}
		
	prom=total/5;
		
	printf("el promedio de los numeros ingresados es : %f \n",prom);
	system("pause");
	return 0;
}
