/*Exer10 -  Fa�a um programa que receba um n�mero inteiro e que verifique se esse n�mero � par
ou �mpar. O programa deve informar se o n�mero � par, caso afirmativo informar tamb�m se
� ou n�o maior que 15 ou se o n�mero � �mpar, caso afirmativo informar se � ou n�o menor
que 50.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	
	//entrada - recolher um numero inteiro
	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	
	//processo - verifique se esse n�mero � par ou �mpar. O programa deve informar se o n�mero � par, caso afirmativo informar tamb�m se � ou n�o maior que 15 ou se o n�mero � �mpar, caso afirmativo informar se � ou n�o menor
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
