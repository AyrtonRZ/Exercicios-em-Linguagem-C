/*Exer18) Faça um programa C que leia dez números que representam as notas de dez alunos de
uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada
de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma
que as notas são informadas corretamente no intervalo de 1 a 10*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int cont;
	float nota, soma=0, maior=0,menor=10;
	for(cont=1;cont<=10;cont++){
		printf("Digite a %d.a nota: ",cont);
		scanf("%f",&nota);
		if(nota<0||nota>10){
			printf("\nValor invalido!\nA nota deve ser entre 0 e 10: ");
			scanf("%f",&nota);
		}
		soma=soma+nota;
		if(nota>maior){
			maior=nota;
		}	
		else if(nota<menor){
		menor=nota;
		}
	}
	printf("\nSoma das notas:%.1f",soma);
	printf("\nMedia das notas:%.1f",soma/10);
	printf("\nMaior nota:%.1f",maior);
	printf("\nMenor nota:%.1f\n",menor);
    
system("pause");
return(0);
}
