#include <stdio.h>
#include <stdlib.h>
int main(){
	int opcao, valor;
	
	//entrada - ler um número na base decimal
	printf("Conversor Bases Numericas.\n");
	printf("1: Decimal para Hexadecimal.\n");
	printf("2: Decimal para Octal.\n");
	printf("Informe sua escolha: ");
	scanf("%d", &opcao);
	
	//processamento - trasnformar o valor recebido em octal e hexadecimal.
	if(opcao == 1){
		printf("\nInfome o valor em Decimal: ");
		scanf("%d", &valor);
		printf("%d em Hexadecimal eh: %x\n",valor,valor);
	}
	else if(opcao == 2){
		printf("\nInfome o valor em Decimal: ");
		scanf("%d", &valor);
		printf("%d em Octal eh: %o\n",valor,valor);
	}
	else
	{
		printf("Valor invalido!!\n");
	}
	
	
	system("pause");
	return 0;
}