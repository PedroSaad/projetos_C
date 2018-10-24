#include <stdio.h>
int main (void){
	float x=0, y=0, resultado=0;
	int op;
	do
	{
		printf("#################### CALCULADORA ###################");
		printf("\n");
		printf("\nInforme a operecao desejada:");
		printf("\n");
		printf("\n1 - SOMA");
		printf("\n2 - SUBTRACAO");
		printf("\n3 - MULTIPLICACAO");
		printf("\n4 - DIVISAO");
		printf("\n");
		scanf("%d", &op);
		printf("\n Digite o primeiro numero: ");
		scanf("%f", &x);
		printf("\n Digite o segundo numero: ");
		scanf("%f", &y);
		switch(op){
			case 1:
				resultado = x+y;
				break;
			case 2:
				resultado = x-y;
				break;
			case 3:
				resultado = x*y;
				break;
			case 4:
				resultado = x/y;
				break;
			default:
				printf("\n Digite uma opcao valida\n");
				break;
		}
		printf("\n O resulatado e:  %0.2f", resultado);
		printf("\n Digite 1 para continuar: ");
		scanf ("%i", &op);
	}
	while(op==1);
}
