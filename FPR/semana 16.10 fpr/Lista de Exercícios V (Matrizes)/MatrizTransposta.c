//Faça uma função que, dada uma matriz M8×5 de
//reais, gere a matriz Mt, sua transposta.

#include <stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>
#define linha 8
#define coluna 5

void matrizTransposta (int matriz[linha][coluna], int matrizTransposta[coluna][linha]);
void preencherAleatorio (int matriz[linha][coluna]);
void exibirMatriz (int matriz[linha][coluna]);
void exibirMatrizTransposta(int matrizTransposta[coluna][linha]);

void main()
{
	int i,j;
	int m[linha][coluna];
	int mTransposta[coluna][linha];
	
	preencherAleatorio (m);
	exibirMatriz (m);
	
	matrizTransposta (m, mTransposta);
	
	exibirMatrizTransposta(mTransposta);

}

void matrizTransposta (int matriz[linha][coluna], int matrizTransposta[coluna][linha])
{
	int i,j;
	
	for (i=0; i<linha; i++)
	{
		for (j=0; j<coluna; j++)
		{
			matrizTransposta[j][i]=matriz[i][j];
		}
	}
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

void exibirMatrizTransposta(int matrizTransposta[coluna][linha])
{
    int i, j;

    printf("Matriz Transposta:\n\n");

    for (i = 0; i < coluna; i++)
    {
        for (j = 0; j < linha; j++)
        {
            printf("%5d", matrizTransposta[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
