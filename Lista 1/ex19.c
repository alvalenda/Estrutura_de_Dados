// 19) Faça um programa em C para entrar com dois números inteiros e imprimir a seguinte saída: quociente:... resto:...

#include <stdio.h>
main()
{
	int a,b;
	printf("\nEntre com o primeiro número: ");
	scanf("%d",&a);
	printf("\nEntre com o segundo número: ");
	scanf("%d",&b);
	printf("\nQuociente: %d e %d. Resto: %d e %d.\n\n",a/b,b/a,a%b,b%a);
}
	



