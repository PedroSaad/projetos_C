#include <stdio.h>

int lersalario()
{
	int valor = 0;
	printf("Digite o salario: ");
	scanf("%i", &valor);
	return valor;
}

float calculo (float sal, float imp)
{
	if (sal < 1903.98)
		imp = (sal * 0) - 0;
	return imp;		
}
	
int main()
{
	float imposto;
	float salario = lersalario();
	if (salario < 1903.98)
	{
		printf ("Com o salario de R$%0.01f esta isento de pagar o imposto", salario);
	}
	if (salario >= 1903.99 &&  salario <= 2826.65)
	{
		imposto = (salario * 0.075) - 142.80;
		printf ("Com o salario de: R$%0.01f \nCom alquota de: 7.5%%\nE deducao de: R$142.80\nDeve pagar: %0.01f de imposto", salario, imposto);
	}
	if (salario >= 2826.66 && salario <= 3751.05)
	{
		imposto = (salario * 0.15) - 354.80;
		printf ("Com o salario de: R$%0.01f\nCom aliquota de: 15.00%%\nE deducao de: R$354.80\nDeve pagar: R$%0.01f de imposto", salario, imposto);
	}
	if (salario >= 3751.06 && salario <= 4664.68)
	{
		imposto = (salario * 0.225) - 636.13;
		printf ("Com o salario de: R$%0.01f\nCom aliquota de: 22.5%%\nE deducao de: R$354.80\nDeve pagar: R$%0.01f de imposto", salario, imposto);
	}
	if (salario > 4664.68)
	{
		imposto = (salario * 0.275) - 869.36;
		printf ("Com o salario de: R$%0.01f\nCom aliquota de: 27.5%%\nE deducao de: R$869.36\nDeve pagar: R$%0.01f de imposto", salario, imposto);
	}
	printf("\n");
	system("pause");	
}
