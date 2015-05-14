#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int suma=0;
	
	for(i=0;i<100;i=i+3)
	{
		printf("\n%d",i);
		suma=suma+i;
		
	}
	printf("la suma de la serie es %d",suma);
	return 0;
}
