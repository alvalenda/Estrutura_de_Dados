/* Escreva um programa que leia um inteiro e mostre as seguintes opções:
	1- dobro
	2- cubo
	3- raiz quadrada
	4- sair
Use o do... while testando se a opção não é a de saída.
Mostre o resultado de acordo com a opção usando o switch.
*/
#include <stdio.h>
#include <math.h>
main()
{
	int n,sc;
	do{
	printf("\nInteiro:");
	scanf("%d",&n);
	printf("\nEntre com \n1-DOBRO\n2-CUBO\n3-RAIZ QUADRADA\n4-Sair.\n");
	scanf("%d",&sc);
	
	switch (sc){
	case 1:
		printf("\nDobro= %d.\n\n",n*2);
		break;
	case 2:
		printf("\nCubo= %.2f.\n\n",pow(n,3));
		break;
	case 3:
		printf("\nRaizQuadrada= %f.\n\n",sqrt(n));
		break;
	
	default:
		printf("\nOpção invávilda!\n\n");}
	} while (sc!=4);
	printf("\nFIM!\n\n");
}
