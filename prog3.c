#include <stdio.h>
#define tam 100 

void inicializa (struct tlista *pl)
		{
			pl->qtnos=0;
		}

struct tno{
				int chave;
			 };

struct tlista{
					int qtnos;
					struct tno lista[tam];
				 };

/* Operações:
	
		As operações abaixo são as mesmas da lista não ordenada:
		1. Inicializa Lista;
		2. Verificar lista Vazia;
		3. Verificar Lista Cheia;
		4. Percurso;
		5.Busca Sequencial na lista Ordenada.
*/    
					
int busca_seq(struct lista l, int elem, int xpos)
{
	int i;
	for(i=0; i<l.qtnos&&elem>l.lista[i].chave;i++);      
	*pos=i;                                     // ponteiro p assume valor da posição de i.
	if((i==l.qtnos)||(elem!=l.lista[i].chave))
		return(0);  //não achou
	return(1); //achou 
}

//6. Busca Binária
int busca_bin(struct lista l, int chave)
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

/* 7. Inserção   */
int insere_ord(struct lista *pl, int elem)
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
// 8. Remoção 
int remove_ord(struct lista *pl, int elem)
{
		int i, posicao;
		if(pl->qtnos==0)
			return(0);
		if(!busca_seq(*pl, elem, &posicao)
			return(1);
		for(i=posicao;i<pl->qtnos-1;i++)
		{
			pl->lista[i].chave=pl->lista[i+1].chave;
		}	
		pl->qtnos--;
		return(1);
}