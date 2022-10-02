//Exer04 - Faça um programa que lê dois valores e imprime: (0,1)
//a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
//b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiroem ordem decrescente
//c) se ambos forem iguais a mensagem "valores iguais".
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num1, num2, i;
	//entrada - ler dois valores e apresentalos
	printf("Informe o primeiro valor: ");
	scanf("%d",&num1);
	printf("Informe o segundo valor: ");
	scanf("%d",&num2);
	printf("Primeiro valor: %d\nSegundo valor: %d\n",num1,num2);
	
	if(num1<num2){
		printf("O primeiro valor eh menor que o segundo \n");
		for(i=num1; i<=num2; i++){
			printf("%d\n",i);
		}
	}
	else if(num1>num2){
		printf("O segundo valor eh menor que o primeiro\n");
    	for(i=num1;i>=num2;i--){
      		printf("%d\n",i);
		}
	}
	else{
		printf("Valores iguais!\n");
	}
	system("pause");
	return 0;
}
