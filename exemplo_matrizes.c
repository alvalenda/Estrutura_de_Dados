//Ler e imprimir uma matriz de inteiros 3x3

#include <stdio.h>
main()
{
	int a[3][3], l, c;
	//leitura
	for(l=0; l<3; l++)
		for(c=0; c<3; c++)
		{
			printf("\n[%d][%d]: ", l, c);
			scanf("%d", &a[l][c]);
		}
	//impressão
	printf("\n\nMatriz lida:\n\n");
	for(l=0; l<3; l++)
	{
		for(c=0; c<3; c++)
		{
			printf("%d", a[l][c]);
		}
	}
	printf("\n\n");
}
