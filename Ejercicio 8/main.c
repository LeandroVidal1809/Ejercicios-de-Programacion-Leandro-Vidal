#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	char letra;
	int letr_a=0;
	int letr_e=0;
	int letr_i=0;
	int letr_o=0;
	int letr_u=0;
	
	
	for(i=0;i<20;i++)
	{
		printf("\n ingrese una letra: ");
		scanf("%c",&letra);
		
		switch(letra)
		{
			case 'a':
				letr_a++;
				break;
			case 'e':
				letr_e++;
				break;
			case 'i':
				letr_i++;
				break;
			case 'o':
				letr_o++;
				break;
			case 'u':
				letr_u++;
				break;
		}
		
		printf(" %c %c %c %c %c",letr_a,letr_e,letr_i,letr_o,letr_u);
		
	}
	return 0;
}
