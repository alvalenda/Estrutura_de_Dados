/* Leia duas matrizes de inteiros com linhas 4 e colunas 4. Calcule a matriz produto, segundo as regras matemáticas, e mostre as três matrizes. */
//este programa calcula de maneira errada o produto das matrizes, pq o caminmha passou errado na aula. Ele faz a soma da coluna e multiplica pela soma da linha. Fico devendo a forma correta.
#include <stdio.h>
#define L 4
#define C 4
main()
{
	int m1[L][C], m2[L][C],p[L][C], l, c, soma=0, vl[L], vc[C];
	for(l=0; l<L; l++)
	{
		soma=0;
		for(c=0; c<C; c++)
		{
			printf("\nMatriz 1, elemento [%d][%d]: ", l, c);
			scanf("%d", &m1[l][c]);
			soma+=m1[l][c];			
			if (c==(C-1))
			vl[l]=soma;
			
			
		}
	}
	for(l=0; l<L; l++)
	{
				
		for(c=0; c<C; c++)
		{
			printf("\nMatriz 2, elemento [%d][%d]: ", l, c);
			scanf("%d", &m2[l][c]);
			
		}
	}
	
		for(c=0; c<C; c++)
	{
		soma=0;
		for(l=0; l<L; l++)
		{
			soma+=m2[l][c];
			if (l==(L-1))
			vc[c]=soma;
			
		}
	}

	printf("\n\nAs matrizes lidas foram:\n\nMatriz 1:\n");
	for(l=0; l<L; l++)
	{
		printf("\n\n");
		for(c=0; c<C; c++)
			printf("\t%d ", m1[l][c]);
	}
	printf("\n\nMatriz 2:\n");
	for(l=0; l<L; l++)
	{
		printf("\n\n");
		for(c=0; c<C; c++)
			printf("\t%d ", m2[l][c]);
	}
	printf("\n\nA matriz produto é:\n");
	for(l=0; l<L; l++)  //calcular Produto
	{
		for(c=0; c<C; c++)
		{
						
			p[c][l]=vl[l]*vc[c];
		}	
	}
	for(l=0; l<L; l++)  //imprimir Produto
	{
		printf("\n\n");
		for(c=0; c<C; c++)
			printf("\t%d ", p[l][c]);
	}
	printf("\n\n");
}
