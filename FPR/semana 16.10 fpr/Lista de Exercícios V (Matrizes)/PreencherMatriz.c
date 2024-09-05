// Desenvolver uma função que armazene o valor 1 em todas as posições da 1ª linha
// de uma matriz 20x15, o número 2 na 2ª, e assim por diante

#include <stdio.h>
#define linha 20 
#define coluna 15

void preencher (int matriz[linha][coluna]);
void exibirMatriz (int matriz[linha][coluna]);


void main ()
{
	int m[linha][coluna];
	
	preencher (m);
	exibirMatriz (m);
}

void preencher (int matriz[linha][coluna])
{
	int i, j, aux=1;
	
	for (i=0; i<linha; i++)
	{
		for (j=0; j<coluna; j++)
		{
			matriz[i][j]=aux;
		}
		aux++;
	}
}

/*
void preencher (int matriz[linha][coluna])
{
	int i, j;
	
	for (i=0; i<linha; i++)
	{
		for (j=0; j<coluna; j++)
		{
			matriz[i][j]=i+;
		}
	}
}
*/

void exibirMatriz (int matriz[linha][coluna])
{
	int i,j;
	
	printf ("Matriz:\n\n");

	for (i=0; i<linha; i++)
	{ 
		for (j=0; j<coluna; j++)
		{
			printf ("%5d", matriz[i][j]);
		}
		printf ("\n");
	}
	printf ("\n\n");
}
