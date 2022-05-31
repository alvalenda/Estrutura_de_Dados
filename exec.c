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

int busca_seq(struct tlista l, int elem, int *pos)
{
	int i;
	for(i=0; i<l.qtnos&&elem>l.lista[i].chave;i++);      
	*pos=i;                                     // ponteiro p assume valor da posição de i.
	if((i==l.qtnos)||(elem!=l.lista[i].chave))
		return(0);  //não achou
	return(1); //achou 
}

int insere_ord(struct tlista *pl, int elem)
{
		int i, posicao;
		if(pl->qtnos==tam)
			return(0);
		if(busca_seq(*pl, elem, &posicao))
			return(-1);
		for(i=pl->qtnos; i>posicao; i--)
		{
			pl->lista[i].chave=pl->lista[i-1].chave;
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
		if(!busca_seq(*pl, elem, &posicao))
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
		