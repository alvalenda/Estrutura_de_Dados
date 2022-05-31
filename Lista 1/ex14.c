// 14) Faça um programa em C que leia dois números reais e imprima a média aritmética com a mensagem: MEDIA: antes do resultado.

#include <stdio.h>
main()
{
	float x,y;
	printf("\nEntre com um número real:\n");
	scanf("%f",&x);
	printf("\nEntre com mais um número real:\n");
	scanf("%f",&y);
	printf("\nMEDIA: %.3f.\n\n",(x+y)/2);
}
