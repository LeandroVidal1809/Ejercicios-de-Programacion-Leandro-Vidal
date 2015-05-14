#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor_hora;
	char nombre[20];
	int antiguedad;
	int horas;
	int subtotal;
	float bruto;
	float descuento;
	float neto;
	char rta='s';
	
	while(rta=='s')
	{
	
	
	printf("\n ingresar el valor/hora  : ");
	scanf("%d",&valor_hora);
	printf("\n ingrese nombre del empleado: ");
	scanf("%s",nombre);
	printf("\n ingrese su antiguedad: ");
	scanf("%d",&antiguedad);
	printf("\n ingrese cantidad de horas trabajadas en el mes: ");
	scanf("%d",&horas);

	subtotal=valor_hora*horas;
	bruto=subtotal+(antiguedad*30);
	descuento=(bruto*13)/100;
	neto=bruto-descuento;
	
	printf("\nNOMBRE:%s\nANTIGUEDAD:%d\nVALOR HORA: %d \n VALOR BRUTO: %f\nTOTAL DE DESCUENTO: %f \n TOTAL NETO: %f",nombre,antiguedad,valor_hora,bruto,descuento,neto);

	printf("\ndesea ingresar otro? (s/n): ");
	scanf("%s",&rta);
	}
	return 0;
}
