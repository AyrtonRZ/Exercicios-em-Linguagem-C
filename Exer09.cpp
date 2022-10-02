/*Exer09 - Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dos
exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA =
(N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:
(0,1)
maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	float n1, n2, n3, media_exe, media_aprov=0;
	//entrada - recolher 3 notas e uma media
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);	
	printf("Digite a terceira nota: ");
	scanf("%f",&n3);
	printf("Digite a media das notas dos exercicios realizados: ");
	scanf("%f",&media_exe);
	//processamento - calcular a media de aproveitamento MA = (n1+n2*2+n3*3+ME)/7
	media_aprov = (n1+(n2*2)+(n3*3)+media_exe)/7;
	//saida -
	if(media_aprov >= 9.0){
		printf("Sua media foi %.1f, Tirou A.\n",media_aprov);
	}
	else if(media_aprov >= 7.5 && media_aprov<9.0){
		printf("Sua media foi %.1f, Tirou B.\n",media_aprov);
	}
	else if(media_aprov>=6.0 && media_aprov<7.5){
		printf("Sua media foi %.1f, Tirou C.\n",media_aprov);
	}
	else if(media_aprov>=4.0 && media_aprov<6.0){
		printf("Sua media foi %.1f, Tirou D.\n",media_aprov);
	}
	else if(media_aprov<4.0){
		printf("Sua media foi %.1f, Tirou E.\n",media_aprov);
	}
	else{
		printf("Resultado invalido.\nTente novamente!\n");
	}
    
system("pause");
return(0);
}
