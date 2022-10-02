/*Exer24) Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma
dada quantia. Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais.*/
#include <stdio.h>
#include <stdlib.h>

int main (){
	int valor,v100,v50,v20,v10,v5,v2,v1;
	
	printf("Digite o valor: ");
	scanf("%d",&valor);
	
	v100 = valor / 100;
	valor = valor - v100*100;
	
	v50 = valor / 50;
	valor = valor - v50*50;
	
	v20 = valor / 20;
	valor = valor - v20*20;
	
	v10 = valor / 10;
	valor = valor - v10*10;
	
	v5 = valor / 5;
	valor = valor - v5*5;
	
	v2 = valor / 2;
	valor = valor - v2*2;
	
	v1 = valor / 1;
	
	printf(" %d notas de R$ 100.00.\n",v100);
	printf(" %d notas de R$ 50.00.\n",v50);
	printf(" %d notas de R$ 20.00.\n",v20);
	printf(" %d notas de R$ 10.00.\n",v10);
	printf(" %d notas de R$ 5.00.\n",v5);
	printf(" %d notas de R$ 2.00.\n",v2);
	printf(" %d notas de R$ 1.00.\n",v1);
	
	
  system("pause");
  return 0;
}
