// 15) Faça um programa que entre com o número de milhas e imprima o número de milha lido convertido para metros (Uma milha é igual a 1609 metros).

#include <stdio.h>
main()
{
	float m;
	printf("\nEntre com uma distância em milhas:\n");
	scanf("%f",&m);
	printf("\nEquivalente a %.2f metros.\n\n",1609*m);
}

