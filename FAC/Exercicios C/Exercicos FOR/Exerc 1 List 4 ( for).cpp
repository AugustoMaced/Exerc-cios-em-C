#include <stdio.h>

/*Faça um programa que leia um
número inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, onde N e Y são
fornecidos pelo usuário.*/



int main ()
{
	int y,n,i;
	// lendo o valor de N
			
	printf ( "insira o valor de N:\n" );
	scanf ("%d", &n);
	
	//lendo o valor de Y
	printf (" insira o valor de Y:");
	scanf ("%d", &y);

	for (i=y ; i<n ; i+=y)
	{
		printf (" %d",i);
	}
	
	return 0;
}
