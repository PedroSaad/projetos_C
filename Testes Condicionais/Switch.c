#include <stdio.h>

int lervalor()
{
	int valor = 0;
	printf("Digite um numero: ");
	scanf("%i", &valor);
	return valor;
}

int calculo (int a)
{
	int resto = a % 5;
	return resto;
}

void caso (opcao)
{

}

int main()
{
	int n1 = lervalor();
	int op = calculo(n1);
	switch (op)
	{
		case 0:
			printf("Este numero e divisivel por 5.");
		break;
		case 1:
			printf("O resto da divisao de %i por 5 eh %i", n1, op);
		break;
		case 2:
			printf("O resto da divisao de %i por 5 eh %i", n1, op);
		break;
		case 3:
			printf("O resto da divisao de %i por 5 eh %i", n1, op);
		break;
		case 4:
			printf("O resto da divisao de %i por 5 eh %i", n1, op);
		break;
		default:
			printf("\n Digite uma opcao valida!\n");
		break;
			
			
	}
	
}
