// 18) Faça um programa em C que entre o salário de um funcionário, -> calcule e imprima <-  o novo salário sabendo-se que este sofreu um aumento de 25%.

#include <stdio.h>
main()
{
	float salario;
	printf("\nEntre com o valor do salário: R$ ");
	scanf("%f",&salario);
	salario=salario*1.25;
	printf("O valor do salário com reajuste é de R$ %.2f.\n\n",salario);
}

