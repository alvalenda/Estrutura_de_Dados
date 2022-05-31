#include <stdio.h>

#define N 10

/*void insercao(int v[])
	{
		int i, j;
		for (j=1; j<n; j++)
			for (i=j; i>0 && v[i-1]> v[i]; i--)
				troca(&v[i-1], &v[i]);
	}*/

main()
{
	int v[N], i, j;
	
	for (i=0; i<N; i++)
		//for (j=0; j<N; j++)
		{
			printf("\nEntre com o elemento [%d]: ",i);
			scanf("%d",&v[i]);
		}

	printf("\n\nMatriz impressa:\n");
	printf("\n");
	for (i=0; i<N; i++)
		//for (j=0; j<N; j++)
		{
			printf("%d\t",v[i]);
		}
		printf("\n\n");
}
