// 12) Faça um programa em C que leia dois números inteiros e imprimir a soma. Antes do resultado, deverá aparecer a mensagem: SOMA.

#include <stdio.h>
main()
{
	int a,b;
	printf("\nEntre com o valor de um número inteiro:\n");
	scanf("%d",&a);
	printf("\nEntre com o valor de outro número inteiro:\n");
	scanf("%d",&b);
	printf("\nSOMA: %d.\n\n",a+b);
}
