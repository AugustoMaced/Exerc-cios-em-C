//Desenvolver uma fun��o que determine o n�mero de ocorr�ncias de um n�mero na linha L da
//matriz.
#include <stdio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include <time.h>
#define linha 5
#define coluna 5

int ocorrenciasLinha (int matriz[linha][coluna], int n, int l);
void preencherAleatorio (int matriz[linha][coluna]);
void exibirMatriz (int matriz[linha][coluna]);

void main ()
{
	int m[linha][coluna];
	int n, l, ocorrencia;
	
	preencherAleatorio (m);
	exibirMatriz (m);
	
	printf ("\n\nEscolha um numero: ");
	scanf ("%d", &n);
	
	printf ("\n\nEscolha uma linha: ");
	scanf ("%d", &l);

	ocorrencia = ocorrenciasLinha (m, n, l);
	
	printf ("\n\nO total de ocorrencia do num %d na linha %d eh %d", n, l, ocorrencia);

}


int ocorrenciasLinha (int matriz[linha][coluna], int n, int l)
{
  int i=0, j, cont=0;

    for (j=0; j<coluna; j++)
    {
		if (matriz[l][j]==n)
		{
        	cont++;
		}
    }
	return cont;
}


void preencherAleatorio (int matriz[linha][coluna])
{
  int i, j;

  srand (time(NULL));

	for (i=0; i<linha; i++)
	{
    	for (j=0; j<coluna; j++)
    	{
			matriz[i][j] = 1+rand()%10; //preenchendo a matriz com valores aleat�rios de 1 a 100
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
