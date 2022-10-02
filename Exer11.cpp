/*Exer11) Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse
programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma
possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos é igual a de alunas. */
#include <stdio.h>
#include <stdlib.h>
int main(){
	int qnt_alunos,qnt_alunas;
	//entrada - 
	printf("Digite a quantidade de alunos: ");
	scanf("%d",&qnt_alunos);
	printf("Digite a quantidade de alunas: ");
	scanf("%d",&qnt_alunas);
	//processo -
	if(qnt_alunos>qnt_alunas){
		printf("\nNa turma tem mais alunos do que alunas.\n");
	}
	else if(qnt_alunas>qnt_alunos){
		printf("\nNa turma tem mais alunas do que alunos.\n");
	}
	else if(qnt_alunas==qnt_alunos){
		printf("\nNa turma tem o mesmo numero de alunas e alunos: %d e %d.\n",qnt_alunos,qnt_alunas);
	}
	
    
system("pause");
return(0);
}
