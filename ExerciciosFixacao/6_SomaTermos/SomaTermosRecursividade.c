#include <stdio.h>

int lerNum()
{
	int num = 0;
	printf("Insira um numero inteiro: ");
	scanf("%i", &num);
	return num;
}

int calculo(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else
	{
		return n + calculo (n-1);
	}
}

void main()
{
	int n = lerNum();
	int total = calculo(n);
	printf("A soma dos termos eh: %i", total);
	printf("\n");
	system ("pause");
}
