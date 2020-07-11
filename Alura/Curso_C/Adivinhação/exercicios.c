#include <stdio.h>
int main()
{

	// variaveis
	int x;
	int y;
	int resultado;

	//corpo do codigo
	printf("Dígite um número X: \n");
	scanf("%d", &x);
	printf("Dígite um número Y: \n");
	scanf("%d", &y);
	resultado = x * y;
	printf("O resultado da multiplicação de %d por %d é: %d \n", x, y, resultado);
}