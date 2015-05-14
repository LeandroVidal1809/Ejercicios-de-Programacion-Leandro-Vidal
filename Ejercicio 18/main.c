#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int peso;
	int rta='s';
	int gordo=0;
	while(rta=='s')
	{
	
		printf("ingresa el peso del empleado:");
		scanf("%d",&peso);
		
		if(peso>=80)
		{
			gordo++;
		}
		
		printf("desea ingresar otro ?(s/n): ");
		scanf("%s",&rta);
	}
	printf("hay %d con peso mayor o igual a 80 kg",gordo);
	return 0;
}
