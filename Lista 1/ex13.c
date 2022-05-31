// 13) Faça um programa em C que leia um número real e imprima a quinta parte deste número.

#include <stdio.h>
main ()
{
	float x;
	printf("\nEntre com o valor de um número real: \n");
	scanf("%f",&x);
	printf("\nA quinta parte de %.2f é: %.2f.\n\n",x,x/5);
}
