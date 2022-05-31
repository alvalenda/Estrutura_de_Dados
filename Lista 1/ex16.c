// 16) Faça um programa em C que entre com os valores dos catetos de um triângulo retângulo e imprima a hipotenusa(Lembrando: hipotenusa = cateto 12cateto 2 ).

#include <stdio.h>
#include <math.h>
main()
{
	float c1,c2,h;
	printf("\nEste programa calcula a hipotenusa do triângulo retângulo.\nInsira o valor do cateto 1:\n");
	scanf("%f",&c1);
	printf("\nInsira o valor do cateto 2:\n");
	scanf("%f",&c2);
	h=sqrt((c1*c1)+(c2*c2));
	printf("\nA hipotenusa deste triângulo retângulo tem valor igual a: %.4f.\n\n",h);
}
