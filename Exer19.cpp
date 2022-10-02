//Exer19) Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo
//inteiro
#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main(){
	int vet[TAM], i, maior=0;
	
	for(i=0;i<TAM;i++){
		printf("Digite um valor inteiro positivo: ");
		scanf("%i",&vet[i]);
	}
	for(i=0;i<TAM;i++){
		if(vet[i]>maior){
			maior=vet[i];
		}
	}
	for(i=0;i<TAM;i++){
		printf(" %i ",vet[i]);
	}
	printf("\nMaior valor: %i\n",maior);
		
    
system("pause");
return(0);
}
