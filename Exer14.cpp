/*Exer14) A convers�o de graus Fahrenheit para Celsius � obtida por Tc={(Tf-32)x(5/9)}, em que Tc
� a temperatura em Celsius e Tf em Fahrenheit. Fa�a um programa C que calcule e que
imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de
1 em 1.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	float tc;
	
	for(tc=40;tc<=75;tc++){
		printf(" %.1f %cC = %.1f %cF\n",tc,248,(((tc*9.0)/5.0)+32.0), 248);
	}	
    
system("pause");
return(0);
}
