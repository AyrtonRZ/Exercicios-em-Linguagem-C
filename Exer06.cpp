//6) Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: não use o comando "if"ou o operador de condição "?". (0,1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float valor, v10, v20;
	int op;
	v10 = v20 = 0;
	
	//entrada - ler o preço de um produto 
	printf("Digite o valor do produto: R$");
	scanf("%f",&valor);

	printf("\n 1: Valor menor que R$100.");
	printf("\n 2: Valor maior ou igual a R$100.\n");
	printf("Digite sua opcao:");
	scanf("%d",&op);
	//processamento - inflacionar o valor em 10% se for < 100 ou em 20% se => 100.
	switch(op)
	{
		case 1:
			v10 = (valor * 10/100) + valor;
			printf(" O valor do produto fica: R$%.2f\n",v10);
			break;
		case 2:
			v20 = (valor * 20/100) + valor;
    		printf("O valor do produto fica: R$%.2f\n",v20);
    		break;
    	default:
        	printf("\nValor invalido!!"); 
        	break;
    }
	
	system("pause");
	return 0;
}
