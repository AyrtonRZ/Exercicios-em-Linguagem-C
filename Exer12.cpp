/*Exer12) Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e
informar quem é o mais velho. Considere que essas pessoas possuem idades diferentes*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int idade_pedro, idade_joana, idade_ismael;
	//entrada - 
	printf("ATENCAO: as idades devem ser diferntes!\n");
	printf("Digite a idade de Pedro: ");
	scanf("%d",&idade_pedro);
	printf("Digite a idade de Joana: ");
	scanf("%d",&idade_joana);
	printf("Digite a idade de Ismael: ");
	scanf("%d",&idade_ismael);
	
	//processo -
	if(idade_pedro>idade_joana && idade_pedro>idade_ismael){
		printf("Pedro e o mais velho!\n");
	}
	else if(idade_joana>idade_pedro && idade_joana>idade_ismael){
		printf("Joana e a mais velha!\n");
	}
	else if(idade_ismael>idade_pedro && idade_ismael>idade_joana){
		printf("Ismael e o mais velho!\n");
	}
	else{
		printf("Erro!!\nOs participantes tem que ter idades diferentes!\n");
	}
    
system("pause");
return(0);
}
