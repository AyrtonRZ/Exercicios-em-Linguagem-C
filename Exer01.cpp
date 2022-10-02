/*1) Faça um programa que solicite 2 números e informe: a soma dos números, o produto do
primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadrada
da soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulo
do primeiro número.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

int main(){
	float num1, num2, soma, qua_num1, prod_qua, raiz, seno, modulo;


	printf("Numero 1: ");
	scanf("%f", &num1);

	printf("Numero 2: ");
	scanf("%f", &num2);
   
	soma = num1 + num2;
	prod_qua = num1 * (num2*num2);
	qua_num1 = num1*num1;
	raiz = sqrt(soma);
	seno = sin(num1-num2);
	//modulo
	if (num1 <= 0) num1 = (num1 * -1);
		printf ("\nO modulo do numero e %.2f\n", num1);
	

	printf("\nSoma dos numeros: %.2f\n", soma);
	printf("Primeiro numero pelo quadrado do segundo: %.2f\n", prod_qua);
	printf("O quadrado do primeiro numero: %.2f\n",qua_num1);
	printf("A raiz quadrada da soma eh: %.2f\n",raiz);
	printf("O seno da diferenca do primeiro pelo segundo eh: %.3f\n",seno);
	
	return 0;
}
