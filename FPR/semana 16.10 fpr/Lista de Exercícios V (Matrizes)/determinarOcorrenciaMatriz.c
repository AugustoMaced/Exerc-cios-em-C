//Desenvolver uma função que determine o número de ocorrências de um número inteiro
//na matriz M50x20;
#include <stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>
#define linha 50
#define coluna 20

int determinarOcorrencias (int matriz[linha][coluna], int n);
void preencherAleatorio (int matriz[linha][coluna]);
void exibirMatriz (int matriz[linha][coluna]);

int main ()
{
  int m[linha][coluna];
  int n, ocorrencias;

  preencherAleatorio (m);
  exibirMatriz (m);

  printf ("\nEscolha um numero: ");
  scanf ("%d", &n);

  ocorrencias = determinarOcorrencias (m, n);

  printf ("\nO numero %d aparece %d vezes na matriz", n, ocorrencias);

}

void preencherAleatorio (int matriz[linha][coluna])
{
  int i, j;

  srand (time(NULL));

	for (i=0; i<linha; i++)
	{
    	for (j=0; j<coluna; j++)
    	{
			matriz[i][j] = 1+rand()%10; //preenchendo a matriz com valores aleatórios de 1 a 100
    	}
	}	
}


int determinarOcorrencias (int matriz[linha][coluna], int n)
{
  int i, j, cont=0;

	for (i=0; i<linha; i++)
	{
		for (j=0; j<coluna; j++)
    	{
			if (matriz[i][j]==n)
			{
        		cont++;
			}
    	}
	}
	return cont;
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
