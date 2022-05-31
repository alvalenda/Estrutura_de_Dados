/*Ler e imprimir uma matriz de inteiros 3x4 e preencha da seguinte forma:
m[l][c]=(l*4)+c+1
LOGO Após imprima a matriz m e a média aritmética dos valores gerados */

#include <stdio.h>
#define L 3
#define C 4
main()
{
	int m[L][C], l, c; 
	float soma=0;
	
	for(l=0; l<L; l++)
		for(c=0; c<C; c++)
		{
			m[l][c]=(l*4)+(c)+1;      //leitura
		}
	
	printf("\n\nMatriz lida:\n\n");
	for(l=0; l<L; l++)
	{
		printf("\n\n");
		for(c=0; c<C; c++)
		{
			printf("\t%d ", m[l][c]);      //impressão
			soma+=m[l][c];                //somatório
		}
	}
	printf("\n\n\nMédia aritmética:\t%.2f.", soma/(L*C));
	printf("\n\n");
}
