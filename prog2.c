/* Escreva um programa que leia 10 números inteiros e insira-os numa lista sequencial sem repetição. 
Imprima os elementos da através da função percurso(). Remova um elemento, lido no teclado, da lista. 
Imprima novamente a lista através da função percurso. */ 

#include <stdio.h>
#define TAM 10

struct no{ int chave;}; 
struct tlista{ int qtnos; struct no lista[TAM];};

void inicializa (struct tlista *pl)
		{
			pl->qtnos=0;
		}

void percurso(struct tlista l)
	{
		int i;
		printf("\n\n");
		for(i=0; i<l.qtnos; i++)
			printf("%d\t",l.lista[i].chave);
	}

int insere_sem(struct tlista *pl, int elem)
	{
		int i;
		if (pl->qtnos==TAM)
			return(-1);
		i=busca(*pl, elem);
		if(i>=0)
			return(0);
		pl -> lista[pl -> qtnos++].chave=elem;
		return(1);
	}

int busca (struct tlista l, int elem)
	{
		int i;
		for (i=0; i<l.qtnos; i++)
			if(elem==l.lista[i].chave)
				return(i); //achar
		return(-1); //não achar
	}
	
int retira (struct tlista *pl, int elem)
	{
		int i;
		if(pl->qtnos==0)
			return(-1);
		i=busca(*pl, elem);
		if(i<0)
			return(0);
		pl -> qtnos--;
		pl -> lista[i].chave=pl -> lista[pl -> qtnos].chave;
		return(1);
	}

main()
{
	int elem, i;
	struct tlista lista;
	
	inicializa(&lista);
	for (i=0; i<TAM; i++)
	{
		printf("\nInsira o Vetor[%d]:",i);
		scanf("%d",&elem);
		insere_sem(&lista,elem);
	}

	percurso(lista);
	
	printf("\n\nDigite Elemento a ser retirado: \n");
	scanf("%d",&elem);
	retira(&lista, elem);
	
	percurso(lista);
	printf("\n\n");
	
}
	
