#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int impar;

	
	for(i=0;i<100;i++)
	{
		if(i%2!=0)
		{
			impar++;
		
		printf("\n%d",i);
		printf(" es impar ");
		}
	}
	printf("\n hay %d impares  ",impar);

	return 0;
}
