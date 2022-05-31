//22) Escreva um programa em C para ler um número inteiro n e imprimi-lo caso seja maior que 100. Caso contrário, multiplique o número por 3 e imprima o valor.

#include <stdio.h>
main()
{
	int n;
	printf("\nEntre com um valor inteiro para um número: ");
	scanf("%d",&n);
	
	if (n>100)
				{
					printf("\n%d é maior do que 100.\n\n",n);
				} 		
	else	
					printf("\nNúmero*3: %d.\n\n",n*3);	
}

