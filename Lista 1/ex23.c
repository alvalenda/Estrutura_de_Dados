// 23) Tendo os dados de entrada a altura e o sexo de uma pessoa. Construa um programa em C que calcule seu peso ideal, utilizando as seguintes regras:
// i. Para homens: (72.7 * h) – 58
// ii.Para mulheres: (62.1 * h) – 44.7
// 0nde: h é a altura

#include <stdio.h>
main()
{
	float altura;
	char sexo;
	printf("\nEntre com sua altura em METROS: ");
	scanf("%f",&altura);
	printf("\nSexo (M)asculino ou (F)eminino: ");
	fgetc(stdin);
	scanf("%c",&sexo);

		if (sexo=='m'||sexo=='M')
			printf("\nSeu peso ideal é de %.2f KG.\n\n",((altura*72.7)-58));
		else if (sexo=='f'||sexo=='F')
			printf("\nSeu peso ideal é de %.2f KG.\n\n",((altura*62.1)-44.7));
		else
			printf("\nImpossível calcular para o sexo determinado.\nPor favor digite M para masculino ou F para feminino.\n\n");
} 			

