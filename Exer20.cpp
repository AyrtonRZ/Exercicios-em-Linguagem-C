//20) Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char palavra1[10];
    char palavra2[10];
    int retorno;
    
	printf("Digite um nome: ");
    scanf("%s", &palavra1);
    printf("Digite outro nome: ");
	scanf("%s", &palavra2);

    retorno = strcoll(palavra2, palavra1);

    if(retorno==1){
    	printf("%s\n%s\n\n", palavra1,palavra2);
    }
	else{
        printf("%s\n%s\n\n", palavra2,palavra1);
    }
	
    
system("pause");
return(0);
}
