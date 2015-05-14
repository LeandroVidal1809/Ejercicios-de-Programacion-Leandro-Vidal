#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;

	
	for(i=1;i<101;i++)
	{

		if(i%2==0 && i%3==0)
		{
			printf("\n el numero %d es multiplo de 2 y 3",i);
		}
		
		
	}
	
	return 0;
}
