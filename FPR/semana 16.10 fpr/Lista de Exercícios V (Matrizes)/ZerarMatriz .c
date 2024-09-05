/*Desenvolver uma função que zere os elementos de uma matriz 10x5*/

#include <stdio.h>
#define linha 10
#define coluna 5

void zerarMatriz (int matriz[linha][coluna]);
void exibirMatriz (int matriz[linha][coluna]);

void main()
{
	int m[linha][coluna];
	
	exibirMatriz (m);

	zerarMatriz (m);
	
	exibirMatriz (m);	
}

void zerarMatriz (int matriz[linha][coluna])
{
	int i,j;
	
	for (i=0; i<linha; i++)
	{
		for (j=0; j<coluna; j++)
		{
			matriz[i][j]=0;
		}
	}
}

void exibirMatriz (int matriz[linha][coluna])
{
	int i,j;
	
	printf ("Matriz:\n\n");

	for (i=0; i<linha; i++)
	{ 
		for (j=0; j<coluna; j++)
		{
			printf ("%15d", matriz[i][j]);
		}
		printf ("\n");
	}
	printf ("\n\n");
}

