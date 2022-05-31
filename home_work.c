/*
Ler dois vetores e mostrar o vetor soma usando alocação dinâmica de funções. Siga os seguintes passos.:
-leia tamanho
-para cada vetor:
	-Aloque o espaço de memória
	-chame uma função p/ ler o vetor passando o vetor e o tamanho
-chame uma função que:
	-recebe dois vetores e o tamanho
	-aloca o vetor soma
	-efetua os calculos e imprima o retorna soma
-imprimir usando alocação de ponteiro
*/
#include <stdio.h>
#include <stdlib.h>
void lerVetor (float *b, float *c,int a)
{	
	int i;
	for(i=0;i<a;i++)
	{
		printf("\nElemento %d vetor:1:",i);
		scanf("%f",b+i);
		printf("\t\tlido %f",*(b+i));
		printf("\nElemento %d vetor:2:",i);
		scanf("%f",c+i);
		printf("\t\tlido %f",*(c+i));
		
	}
}

/*void imprimirVetor (float *b, float *c,float *soma, int a)
{	
	int i;
	for(i=0;i<a;i++)
	{
		*soma=(*c+i)+(*b+i);
		soma++;
		printf("\tSoma %f",*((soma--)+i));
		
	}
}
*/
float *soma(float *a, float *b, int s);
main()
{
	float	*v1,*v2,*p;
	int i,tam;
	//leitura
	printf("\n\nTamanho do vetor:");
	scanf("%d",&tam);
	//alocação dinâmica
	v1=(float *)malloc(tam*sizeof(float));
	v2=(float *)malloc(tam*sizeof(float));
	p=(float *)malloc(tam*sizeof(float));
	//tratamento de erro
	if(!v1)//if(v==null)
	{
		printf("\nNão foi possível alocar memória.\n");
		return 1;//terminar execução (abortar);
	}
	if(!v2)//if(v==null)
	{
		printf("\nNão foi possível alocar memória.\n");
		return 1;//terminar execução (abortar);
	}
	if(!soma)//if(v==null)
	{
		printf("\nNão foi possível alocar memória.\n");
		return 1;//terminar execução (abortar);
	}
	//leitura dos valores do vetor
	lerVetor(v1,v2,tam);
	//lerVetor(v2,tam);
	
	//impressão
	printf("\n\nVetor 1\n:");
	for(i=0;i<tam;i++)
		printf("%f\t",*(v1+i));
	printf("\n\nVetor 2\n:");
	for(i=0;i<tam;i++)
		printf("%f\t",*(v2+i));

	printf("\n\n");
	//imprimirVetor(v1,v2,soma,tam);
	
	p=soma(v1,v2,tam);

		
	for(i=0;i<tam;i++)
		printf("%f\t",*p++);

	printf("\n\n");	
	free(v1);
	free(v2);
	//free(p);
}
float *soma(float *a, float *b, int d)
	{
		float *c, *aux; 
		int i;
		c=(float*)malloc(d*sizeof(float));
		//aux=(float*)malloc(d
		if(!c)
		{
			printf("\nNão foi possível alocar memória.\n");
			return;//terminar execução (abortar)	
		}
	
	aux=c;
	for (i=0;i<d;i++)
	{
		*c=*(a+i)+*(b+i);
		c++;
	}
	return aux;
	free(c);
	}	
