/*Exer17) O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares
consecutivos. Por exemplo, 12=1, 22=1+3, 32=1+3+5, 4
2=1+3+5+7, etc. Dado um n�mero n,
calcule seu quadrado usando a soma de �mpares ao inv�s de produto.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,i,impar,soma;
  soma=0;
  printf("Digite o valor\n");
  scanf("%d",&n);
  i=0;
  impar=-1;
  do{
          impar=impar+2;
          soma+=impar;         
          i++;}
  while (i<n);{
         printf("Quadrado=%d\n",soma);}

  system("pause");	
  return 0;
}
