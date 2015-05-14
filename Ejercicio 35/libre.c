#include "libre.h"
#include <stdio.h>
#include <stdlib.h>

int max ( int numero[])
{
int min=100;
int max=-100;
int i;


for(i=0;i<5;i++)
{
	
	if(numero[i]>max)
	{
		max=numero[i];
			}	
			
}
			return max;
				
}


int min ( int numero[])
{
int min=100;
int max=-100;
int i;


for(i=0;i<5;i++)
{
	
	if(numero[i]<min)
	{
		min=numero[i];
			}	
			
}
			return min;
				
}


