// ler 10 reais e imprimir o quadrado de cada um.
#include <stdio.h>
main()
{	
	int i=10;
	float n;
	
	do 
	{	
		printf("\nReal:");
		scanf("%f",&n);
		printf("\tQuadrado=%f\n",n*n);
		i--;
	}while(i>0);
}
