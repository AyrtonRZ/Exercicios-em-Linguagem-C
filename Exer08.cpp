#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (){
	int n, i, j, l, k;

	printf ("Digite um numero impar que sera o numero maximo do triangulo:\n");
	// imprimir o número enquanto a pessoa digitar um número par, mostrando a mensagem de erro
	do{
		scanf ("%d", &n);
		printf("");
	}while (n%2 == 0);
   		l = 0;
  		printf ("\n");

	for (i = 1; i <= n; i++){
    	for (k = 0; k < l; k++){
		printf(" ");
		}
		printf ("%d ", i);
 	for (j = i+1; j <= n; j++)
  		printf ("%d ", j);
 		 n -= 1;
  		printf ("\n");
           l += 2;
   	}
   printf ("\n\n\n");
	system("pause");
	return 0;
}
