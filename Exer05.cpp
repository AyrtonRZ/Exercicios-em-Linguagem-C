//Exer05 - Escreva um programa que imprime a tabela ASCII (c�digo decimal, c�digo hexa, caractere)para os c�digos de 0 a 127.
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	
	for(i=0; i<=127; i++){
		if(i%10==0)
			printf("\n");
			printf("%d = %c\t", i,i);
		
	}
	
	system("pause");
	return 0;
}
