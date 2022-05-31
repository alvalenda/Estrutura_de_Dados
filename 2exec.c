/* Escreva um programa para ler 10 numeros inteiros e inseridos numa lista sequencial ordenada. 
Imprima a lista atraves da função percurso. Remova um elemento da lista lido via teclado. Imprima novamente a lista.

2)Refaça o exercício usando a Busca Binária.
*/

#include <stdio.h>
#define tam 10

struct tno{int chave;};
struct tlista{int qtnos; struct tno lista[tam];};

void inicializa (struct tlista *pl)
		{
			pl->qtnos=0;
		}

int busca_bin(struct tlista l, int chave)
{
	int i, ini=0, fim=l.qtnos-1, meio;
	while(ini<=fim)
	{
			meio=(ini+fim)/2;
			if(chave==l.lista[meio].chave)
				return(meio); //achou
			else if(chave>l.lista[meio].chave)
			ini=meio+1;
			else 
				fim=meio-1;
	}
	return(-1); //não achou
}

int insere_ord(struct tlista *pl, int elem)
{
		int i, posicao;
		if(pl->qtnos==tam)
			return(0);
		posicao=busca_bin(*pl,elem);		
		if(posicao!=-1)
			return(-1);
		for(i=pl->qtnos; i>=0; i--)
		{
			
			if(elem < pl->lista[i-1].chave && i!=0)
				pl->lista[i].chave=pl->lista[i-1].chave;
			else {
				pl->lista[i].chave=elem;
				pl->qtnos++;
				return(1);
				   }
		}
		pl->lista[posicao].chave=elem;
		pl->qtnos++;
		return(1);
}

void percurso(struct tlista l)
	{
		int i;
		printf("\n\n");
		for(i=0; i<l.qtnos; i++)
			printf("%d\t",l.lista[i].chave);
	}

int remove_ord(struct tlista *pl, int elem)
{
		int i, posicao;
		if(pl->qtnos==0)
			return(0);
		posicao=busca_bin(*pl,elem);
		if(posicao==-1)
			return(1);
		for(i=posicao;i<pl->qtnos-1;i++)
		{
			pl->lista[i].chave=pl->lista[i+1].chave;
		}	
		pl->qtnos--;
		return(1);
}

main()
{
	int i, elem;
	struct tlista lista;
	
	inicializa(&lista);
	
	for(i=0; i<tam; i++)
	{	
		printf("Insira o elemento %d: ",i);
		scanf("%d",&elem);
		insere_ord(&lista, elem);
	}
	percurso(lista);
	
	printf("\n\nEscolha um elemento para remover:");
	scanf("%d",&elem);
	remove_ord(&lista, elem);	
	printf("\n\n");
	percurso(lista);
	printf("\n\n");
} 
		