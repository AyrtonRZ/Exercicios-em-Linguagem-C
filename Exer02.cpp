//Exer02 - Crie um programa que receba o valor da temperatura em Fahrenheit e imprime ocorrespondente em Celsius e em Kelvin:
#include <stdio.h>
#include <stdlib.h>
int main(){
	float F, C, K;
	
	//entrada - receber um valor em Fahrenheit 
	printf("Informe a temperatura em Graus Fahrenheit: ");
	scanf("%f", &F);
	
	//processamento - transformar o valor recebido para celsius e kelvin
	C = (F - 32) / 1.8;
	K = (F + 459.67) * 5/9;
	
	//saida - apresentar o resultado na tela
	printf("Para %.2f Fahrenheit, temos %.2f Celsius\n", F, C);
	printf("Para %.2f Fahrenheit, temos %.2f Kelvin\n", F, K);
	
	system("pause");
	return 0;
}
