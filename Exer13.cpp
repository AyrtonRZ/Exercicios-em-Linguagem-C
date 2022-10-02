/*Exer13) Dado um número positivo, crie um programa que escreva todos os números ímpares
menores e/ou iguais a esse número e maiores ou igual a um.*/
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
