/*Exer23) Escreva um programa que solicite seis n�meros do tipo inteiro ao usu�rio e os armazene
em um vetor, depois o programa dever� apresentar na tela os n�meros na ordem inversa do
qual foram digitados.*/
#include <stdio.h>
#include <stdlib.h>
#define max 6
int main(){
	int num[max],i;
	for(i=1;i<=max;i++){
		printf("Digite um numero: ");
		scanf("%d",&num[i]);
	}
	printf("Numeros em ordem inversa:\n");
	for(i=max;i>=1;i--){
		printf(" %d\n",num[i]);
	}
	
	
	system("pause");
	return 0;
}
