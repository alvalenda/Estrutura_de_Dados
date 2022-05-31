/* Escreva um programa que leia e imprima uma matriz 3x4. Logo após, gere a matriz dobro. Imprima a matriz dobro */

#include <stdio.h>
#define L 3
#define C 4
main()
{
	int a[L][C], i, c;
	//leitura
	for(i=0; i<L; i++)
		for(c=0; c<C; c++)
		{
			printf("\n[%d][%d]: ", i, c);
			scanf("%d", &a[i][c]);
		}
	//impressão da diagonal principal
	printf("\n\nDiagonal Principal:\n\n");
	for(i=0; i<L; i++)
	{
		printf("\n");
		for(c=0; c<C; c++)
		{
			if (i==c)
			printf("%d\t", a[i][c]);
		}
	}
	printf("\n");
	//impressão acima da diagonal principal
	printf("\n\nAcima da Diagonal Principal:\n\n");	
	for(i=0; i<L; i++)
	{
		printf("\n");
		for(c=0; c<C; c++)
		{
			if (i<c)
			printf("%d", a[i][c]);
		}
	}
	//impressão abaixo da diagonal principal
	printf("\n\nAbaixo da Diagonal Principal:\n\n");	
	for(i=0; i<L; i++)
	{
		printf("\n");
		for(c=0; c<C; c++)
		{
			if (i>c)
			printf("%d", a[i][c]);
		}
	}
	
	printf("\n\n");
}
