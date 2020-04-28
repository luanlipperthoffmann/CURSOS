#include <stdio.h>

int main() {

	// imprime o cabecalho do nosso jogo
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("******************************************\n");

	// variaveis
	int numerosecreto = 42;
	int chute;

	// comando de lopp em 3 tentativas
	for (int i = 1; i<= 3; i++)
	{
		// corpo do código
		printf("\n Tentativa %d de 3 \n", i);
		printf("Qual é o seu chute? ");
		scanf ("%d", &chute);
		printf("Seu chute foi: %d \n", chute);

		int acertou = (chute == numerosecreto);
		if(acertou)
			{
				printf("Parabéns! Voçê acertou! \n");
				printf("Voçê é um bom jogador! Vamos jogar novamente? \n");
			}
		
		else
			{
				int maior = chute  > numerosecreto;
				if (maior)
					{
						printf("Seu chute foi maior que o número secreto! \n");
					}

				else
					{
						printf("Seu chute foi menor que o número secreto! \n");
					}
			}
	} /
	printf("\n Fim de jogo \n");
}