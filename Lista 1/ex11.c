//11) Faça um programa em C que leia a idade, peso, altura e o sexo de uma pessoa e imprimir cada dado numa linha.

#include <stdio.h>
main()
{
	int idade, peso;
	float altura;
	char sexo;
	printf("\nEntre com sua idade:");
	scanf("\n%d",&idade);
	printf("\nEntre com seu peso em KG:");
	scanf("\n%d",&peso);
	printf("\nSexo (M)asculino ou (F)eminino?");
	fgetc(stdin); //zerar memória pra entrada de caracter
	scanf("\n%c",&sexo);
	printf("\nAltura em metros:");
	scanf("\n%f",&altura);
	printf("\nIdade: %d ano(s).",idade);
	printf("\nPeso: %d Kg.",peso);
	printf("\nSexo: %c.",sexo);
	printf("\nAltura: %.2f metros.\n\n",altura);
}
