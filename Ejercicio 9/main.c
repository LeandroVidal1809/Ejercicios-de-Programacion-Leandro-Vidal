#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero;
	char rta = 's';
	
	while(rta == 's')
	{
		printf("ingrese numero de dia : ");
		scanf("%d",&numero);
		
		switch (numero)
		{
			case 1:
			printf("el dia es Lunes");
			break;
			case 2:
			printf("el dia es Martes");
			break;
			case 3:
			printf("el dia es Miercoles");
			break;
			case 4:
			printf("el dia es Jueves");
			break;
			case 5:
			printf("el dia es Viernes");
			break;
			case 6:
			printf("el dia es Sabado");
			break;
			case 7:
			printf("el dia es Domingo");
			break;
		}
		printf("\n desea ingresar otro?(s/n): ");
		scanf("%s",&rta);
		
	}
	return 0;
}
