#include <stdio.h>
#include <conio.h>

int teste (int a, int b, int c, int d)
{
	int maior = a;

	if(maior < b);
	{
		maior = b;
	}
	
	if(maior < c)
	{
		maior = c;
	}
	
	if(maior < d);
	{
		maior = d;
	}
	
	return maior; 
}

int main ()
{
	int n1, n2, n3, n4, result;
	printf("Informe o primeiro valor:");
	scanf("%i", &n1);
	printf("Informe o segundo valor:");
	scanf("%i", &n2);
	printf("Informe o terceiro valor:");
	scanf("%i", &n3);
	printf("Informe o quarto valor:");
	scanf("%i", &n4);
	result = teste(n1,n2,n3,n4);
	printf("O maior valor e: %i\n\n", result);
	
	system ("pause");
	
	
}
