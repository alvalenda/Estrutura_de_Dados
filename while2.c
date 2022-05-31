/*escreva um programa que leia vários números inteiros positivos.
Imprimir quantos números foram digitados e a soma deles. Condição de parada 0 ou negativo.*/

#include <stdio.h>
main()
{
int x, cont=0, soma=0;
printf("\nInteiro:\n");
scanf("%d",&x);

	while (x>0)
		{	cont++;
			soma+=x;
			printf("\nOutro inteiro (0 ou negativo para fim):");
			scanf("%d",&x);
		}
printf("\nForam digitados %d números e a soma entre eles vale %d.\n\n",cont, soma);
}
