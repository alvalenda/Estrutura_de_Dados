/* 
	Flávio Alvarenga Rodrigues                                                     06/05/2001
	Int. á Programação

 Exercício: crie um programa que calcule o Fatorial de um número, sendo que o!=1. */
#include <stdio.h>

main()
{
	int i,n,f=1;
	printf("\nInteiro: ");
	scanf("%d",&n);
	
		if (n>0)
			{
				for (i=n;i>1;i--)
					f*=i;
					printf("\n%d! vale: %d.\n\n",n,f);
			}	
			
		else if (n==0)
			printf("\n%d! é %d.\n\n",n,f);
		else 
			printf("\nNão Existe.\n\n");
}	
