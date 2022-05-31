// 17) Faça um programa em C que entre o salário de um funcionário, calcule e imprima o valor do imposto de renda a ser pago, sabendo que o valor do imposto de renda equivale
// a 5% do salário.
	
#include <stdio.h>
main()
{
	float salario;
	printf("\nEntre com o valor do salário: R$ ");
	scanf("%f",&salario);
	printf("O valor do imposto de renda a ser pago é de: R$ %.2f.\n\n",0.05*salario);
}

