// 20) Faça um programa em C que entre com um número e a base em que se deseja calcular o logaritmo desse número e imprima o resultado.

#include <stdio.h>
#include <math.h>
main()
{
	//float b, n, x;
	double b, n, x;
	printf("\nEntre com o valor do número que deseja calcular o log: ");
	scanf("%lf",&n);
	printf("\nEntre com a base desse logarítmo: ");
	scanf("%lf",&b);
	x=logb(n);
	printf("\nLog(%.2f)%.2f vale: %.3lf \n\n",b,n,x);
}
	


