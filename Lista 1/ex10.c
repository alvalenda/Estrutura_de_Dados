//10) Faça um programa em C que leia dois números inteiros e imprima a soma, a diferença , o produto, a divisão inteira, a divisão real e o resto da divisão entre eles.

#include <stdio.h>
main()
{
	int a,b;
	float c,d;
	printf("\nEntre com o valor da primeira variável:\n");
	scanf("%d",&a);
	printf("\nEntre com o valor da segunda variável:\n");
	scanf("%d",&b);
	c=a;
	d=b;	
	printf("\nSoma entre eles: %d.",a+b);
	printf("\nDiferença 1: %d-%d = %d.\nDiferença 2: %d-%d = %d.",a,b,a-b,b,a,b-a);
	printf("\nO produto entre eles: %d.",a*b);
	printf("\nDivisão Inteira 1: %d/%d = %d.\nDivisão Inteira 2: %d/%d = %d.",a,b,a/b,b,a,b/a);
	printf("\nDivisão Real 1: %d/%d = %f.\nDivisão Real 2: %d/%d = %f.",a,b,c/d,b,a,d/c);
	printf("\nResto da divisão 1: %d.\nResto da divisão 2: %d.\n\n",a%b,b%a);
}

