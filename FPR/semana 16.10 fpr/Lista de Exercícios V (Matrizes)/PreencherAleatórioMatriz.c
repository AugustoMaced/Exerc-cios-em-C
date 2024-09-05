//Desenvolver uma fun��o que preencha uma matriz 30x20 com n�meros aleat�rios (fun��o rand)
#include <stdio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include <time.h>
#define linha 30
#define coluna 20

void preencherAleatorio (int matriz[linha][coluna]);
void exibirMatriz (int matriz[linha][coluna]);

void main()
{
	int m[linha][coluna];
	
	preencherAleatorio (m);
	exibirMatriz (m);

}

void preencherAleatorio (int matriz[linha][coluna])
{
	int i, j;
	
	srand (time(NULL));
	
	for (i=0; i<linha; i++)
	{
		for (j=0; j<coluna; j++)
		{
			matriz[i][j] = 1+rand()%100; //preenchendo a matriz com valores aleat�rios de 1 a 100
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
			printf ("%5d", matriz[i][j]);
    	}
    	printf ("\n");
	}
	printf ("\n\n");
}
