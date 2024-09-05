/*Questão 01: 
Considerando a existência de uma matriz de inteiros M, de ordem N (ou seja, o nº de linhas e o nº de colunas são iguais a
N), onde N é uma constante, desenvolver uma função que retorne 1 se a seguinte regra for atendida por M (caso contrário, 
o valor 0 deverá ser retornado): 
A soma dos elementos da diagonal principal deve ser igual à soma dos elementos que estão acima desta 
diagonal, assim como à soma dos elementos abaixo da diagonal. */

#include <stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>
#define n 5 //n=linha n= coluna 

int verficarSoma (int matriz[n][n]);
void exibirMatriz (int matriz[n][n]);
//void preencherAleatorio (int matriz[n][n]);

void main()
{
	int m[n][n] = { 6, 3, 1, 2, 6,
					1, 3, 5, 4, 2, 
					3, 4, 4, 2, 2, 
					5, 9, 1, 9, 3, 
					4, 0, 2, 1, 8, };
	
//	preencherAleatorio (m);
	exibirMatriz (m);
	
	if (verficarSoma(m)==1)
	{
		printf ("As regras sao atendidas");
	}
	else
	{
		printf ("As regras NAO sao atendidas");
	}

}
int verficarSoma (int matriz[n][n])
{
	int i, j, somaDiagonal=0, somaInferior=0,somaSuperior=0;
	
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			if (i==j)
			{
				somaDiagonal+=matriz[i][j];
			}
			if (i<j)
			{
				somaInferior+=matriz[i][j];
			}
			if (i>j)
			{
				somaSuperior+=matriz[i][j];
			}
		}	
	}
	if ((somaDiagonal==somaInferior)&&(somaDiagonal==somaSuperior))
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
/*
void preencherAleatorio (int matriz[n][n])
{
  int i, j;

  srand (time(NULL));

	for (i=0; i<n; i++)
	{
    	for (j=0; j<n; j++)
    	{
			matriz[i][j] = 1+rand()%10; //preenchendo a matriz com valores aleatórios de 1 a 100
    	}
	}	
}*/

void exibirMatriz (int matriz[n][n])
{
  int i,j;

  printf ("Matriz:\n\n");

	for (i=0; i<n; i++)
	{ 
		for (j=0; j<n; j++)
		{
			printf ("%5d", matriz[i][j]);
    	}
    	printf ("\n");
	}
	printf ("\n\n");
}
