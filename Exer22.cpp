/*22) Desenvolva um programa que leia dez n�meros do tipo inteiro ao usu�rio armazene esses
dez n�meros em um vetor. Para os valores dos elementos inseridos nas posi��es pares desse
vetor, calcule o somat�rio deles, para os demais calcule a subtra��o desses valores. Em
seguida, o programa dever� apresentar na tela os resultados*/
#include <stdio.h>
#include <stdlib.h>
#define max 10
int main(){
	int num[max],som_casa_par=0,val_total=0,sub_total=0,i;
	
	for(i=1;i<=max;i++){
		printf("%d - Digite um numero: ",i);
		scanf("%d",&num[i]);
		
	}
	for(i=2;i<=max;i=i+2){
		som_casa_par=som_casa_par+num[i];
	}
	val_total=val_total+num[i];
	sub_total=val_total - som_casa_par;

	printf("A soma dos valores das casas par: %d\n",som_casa_par);
	printf("A subtracao dos valores das casas pares do valor total foi: %d\n",sub_total);
	
	
	system("pause");
	return 0;
}
