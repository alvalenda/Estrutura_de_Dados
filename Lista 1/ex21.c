//21) Faça um programa em C que leia dois números e imprima uma mensagem dizendo se são iguais ou diferentes.

#include <stdio.h>
main()
{
	float a,b;
	printf("\nEntre com um número: ");
	scanf("%f",&a);
	printf("\nEntre com outro número: ");
	scanf("%f",&b);
		if (a!=b)	{
						printf("\nOs números %f e %f são Diferentes.\n\n",a,b);
			 		}
		else 
						printf("\nOs números %f e %f são Iguais.\n\n",a,b);
}	

