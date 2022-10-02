/*Exer21) Escreva um programa que leia doze números do tipo inteiro ao usuário. Separe esses
números em pares e ímpares e os armazenem em dois outros vetores separando pares e
ímpares, exibindo os resultados na tela.*/
#include <stdio.h>
#include <stdlib.h>
#define max 12
int main(){
	int num[max],par[max],impar[max],i,contpar=0,contimpar=0;
	
	for(i=0;i<max;i++){
		printf("Digite um %d numero: ",i + 1);
		scanf("%d",&num[i]);	
	}
	for(i=0;i<max;i++){
		if(num[i]%2==0){
			par[contpar]=num[i];
			contpar++;
		}
		else{
			impar[contimpar]=num[i];
			contimpar++;
		}
	}
	
	printf("\nTodos os valores: \n");
	for(i=0;i<max;i++){
		printf(" %d\n",num[i]);
			
	}
	
	printf("\nValores PARES:\n");
	for(i=0;i<contpar;i++){
		printf(" %d\n",par[i]);
			
	}
	
	printf("\nValores IMPARES\n");
	for(i=0;i<contimpar;i++){
		printf(" %d\n",impar[i]);
				
	}
	


system("pause");
return(0);
}
