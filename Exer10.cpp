/*Exer10 -  Faça um programa que receba um número inteiro e que verifique se esse número é par
ou ímpar. O programa deve informar se o número é par, caso afirmativo informar também se
é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menor
que 50.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	
	//entrada - recolher um numero inteiro
	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	
	//processo - verifique se esse número é par ou ímpar. O programa deve informar se o número é par, caso afirmativo informar também se é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menor
	if(num%2==0){
		printf("O numero %d eh PAR!\n",num);
		if(num>15){
			printf("O numero %d eh maior que 15.\n",num);
		}
		else{
			printf("O numero %d eh menor que 15.\n",num);
		}
	}
	else if(num%2!=0){
		printf("O numero %d eh IMPAR.\n",num);
		if(num>50){
			printf("O numero %d eh maior que 50.\n",num);
		}
		else{
			printf("O numero %d eh menor que 50.\n",num);
		}
	}
	
	//saida - 	
    
system("pause");
return(0);
}
