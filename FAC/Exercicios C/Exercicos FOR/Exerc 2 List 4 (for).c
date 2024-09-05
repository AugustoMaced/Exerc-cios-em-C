/*Faça um programa que exiba
todos os elementos da seguinte série, assim
como a soma destes elementos:
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1*/

#include <stdio.h>

int main (){

	
	int i=1, f=50;
	
	printf("Os numeros exibidos sao:\n");
	
	for (i=1,f=50; i<=50 ; i++ )
	{
		
		printf(" %d %d ", i, f);
		f--;
	}
	
  return 0;
}
