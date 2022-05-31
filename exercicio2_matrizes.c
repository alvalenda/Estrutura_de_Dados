//Ler e imprimir duas matrizes 3x2. Calcular e imprimir a matriz soma.

#include <stdio.h>
#define L 3
#define C 2
main()
{
	int m1[L][C], m2[L][C], l, c;
	for(l=0; l<LIN; l++)
		for(c=0; c<C; c++)
		{
			printf("\nMatriz 1, elemento [%d][%d]: ", l, c);
			scanf("%d", &m1[l][c]);
		}
	for(l=0; l<L; l++)
		for(c=0; c<C; c++)
		{
			printf("\nMatriz 2, elemento [%d][%d]: ", l, c);
			scanf("%d", &m2[l][c]);
		}
	printf("\n\nAs matrizes lidas foram:\n\nMatriz 1:\n");
	for(l=0; l<L; l++)
	{
		printf("\n");
		for(c=0; c<C; c++)
			printf("\t%d", m1[l][c]);
	}
	printf("\n\nMatriz 2:\n");
	for(l=0; l<L; l++)
	{
		printf("\n");
		for(c=0; c<C; c++)
			printf("\t%d", m2[l][c]);
	}
	printf("\n\nA matriz soma é:\n");
	for(l=0; l<L; l++)
	{
		printf("\n");
		for(c=0; c<C; c++)
			printf("\t%d", m1[l][c]+m2[l][c]);
	}
	printf("\n\n");
}
