#include <stdio.h>
#include <conio.h>

float calculo(int a, int b, int c, int d)
{
	float soma = a + b + c + d;
	float media = soma / 4;
	return media;
}

int lervalor()
{
	int valor = 0;
	printf("Digite um numero: ");
	scanf("%i", &valor);
	return valor;
}

int teste(int x1, float medi)
{
	int maior = 0;
	if(x1 > medi)
	{
		maior = x1;
	}
	return maior;
}

void InformarParOuImpar (int a)
{
	if((a%2 == 0))
	{
		printf("Par\n");
	}
	else
	{
		printf("Impar\n");
	}
}

int main()
{
	float med;
	int n1 = lervalor();
	int n2 = lervalor();
	int n3 = lervalor();
	int n4 = lervalor();
	med = calculo(n1, n2, n3, n4);
	int maior1 = teste(n1, med);
	int maior2 = teste(n2, med);
	int maior3 = teste(n3, med);
	int maior4 = teste(n4, med);
	printf("\n");
	printf("A media dos valores e: %0.2f", med);
	if(maior1 != 0)
	{
	printf("\n");
	printf("Este valor e maior que a media: %i\n\n", maior1);		
	}
	if(maior2 != 0)
	{
	printf("\n");
	printf("Este valor e maior que a media: %i\n\n", maior2);
	}
	if(maior3 != 0)
	{
	printf("\n");
	printf("Este valor e maior que a media: %i\n\n", maior3);
	}
	if(maior4 != 0)
	{
	printf("\n");
	printf("Este valor e maior que a media: %i\n\n", maior4);
	}
	printf("\n");



}
