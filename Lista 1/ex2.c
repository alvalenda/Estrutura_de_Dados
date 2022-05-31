//2) Faça um programa em C que imprima o sucessor e o antecessor de 614.

#include <stdio.h>

main()
{
	int x=614,s,a;
	s=a=x;
	printf("\nSucessor %d.\n",++s);
	printf("\nAntecessor %d.\n",--a);
}

