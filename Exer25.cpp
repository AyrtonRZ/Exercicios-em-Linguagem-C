/*Exer25) Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos
valores é igual a média dos mesmos.*/
#include <stdio.h>
#include <stdlib.h>
#define max 4
int main(){
	int num[max],soma,media;
	int i;
	
	
	for(i=1;i<=max;i++){
		printf("Digite um numero:");
		scanf("%d",&num[i]);
	}
	for(i=1;i<=max;i++){
		soma = soma+num[i];
	}
	media = soma / max;
	printf("\nA media dos valores foi: %d\n",media); 
	for(i=1;i<=max;i++){
		if(num[i]==media){
			printf("O numero %d eh igual a media.\n\n",num[i]);
		}
	}
	
	

	
	system("pause");
	return 0;
}
