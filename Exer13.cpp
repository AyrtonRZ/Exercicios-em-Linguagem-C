/*Exer13) Dado um n�mero positivo, crie um programa que escreva todos os n�meros �mpares
menores e/ou iguais a esse n�mero e maiores ou igual a um.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num,cont;
	//entrada - 
	printf("Digite um numero inteiro positivo: ");
	scanf("%d",&num);
	
	//processo -
	if(num%2==0){
		num--;
	}
	for(cont=num;cont>=1;cont=cont-2){
		printf(" %d\n",cont);
	}
	//saida - 	
    
system("pause");
return(0);
}
