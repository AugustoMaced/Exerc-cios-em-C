#include <stdio.h>

/*Fa�a um programa que leia um
n�mero inteiro positivo N e exiba todos os
m�ltiplos de Y inferiores a N, onde N e Y s�o
fornecidos pelo usu�rio.*/



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
