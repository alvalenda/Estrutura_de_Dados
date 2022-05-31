// 9) Escreva um programa em C que leia um número inteiro e imprima o valor do seu antecessor e do seu sucessor.

#include <stdio.h>
main ()
{
	int x,s,a;
	printf("\nEntre com um valor inteiro pra variável x:\n");
	scanf("%d",&x);
	s=a=x;
	//a--;
	//s++;
	printf("\nSucessor: %d.\nAntecessor: %d.\n\n",++s,--a);
}

