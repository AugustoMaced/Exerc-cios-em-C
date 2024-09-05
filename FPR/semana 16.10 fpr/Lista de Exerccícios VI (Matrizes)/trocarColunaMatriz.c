/*Questão 02: 
Dada uma matriz MLxC, onde L e C são constantes, desenvolver uma função que “troque” os elementos de duas colunas 
c1 e c2, respeitadas as seguintes regras: 
a. A troca só será possível se as colunas c1 e c2 existirem na matriz. Caso existam, a troca será realizada e o valor 1 
retornado pela função; por outro lado, 0 será retornado se uma ou as duas colunas forem inválidas; 
b. Após a troca, a coluna c2 conterá exatamente os elementos originais da coluna c1, na mesma ordem. Porém, os 
valores da coluna c1 serão os originais da c2, na ordem inversa. */

#include <stdio.h>
#define linha 4
#define coluna 5

void preencherAleatorio (int matriz[linha][coluna]);
void exibirMatriz (int matriz[linha][coluna]);
int trocarColuna (int m[linha][coluna], int c1, int c2);

void main()
{
	int mat[linha][coluna];
	int col1, col2;
	
	preencherAleatorio (mat);
	exibirMatriz (mat);
	
	printf ("Coluna 'a': ");
	scanf ("%d", &col1);
	
	printf ("\nColuna 'b': ");
	scanf ("%d", &col2);
	
	if (trocarColuna (mat, col1, col2) == 0)
	{
		printf ("\nColuna Invalida!");
	}
	else
	{
		printf ("\n\n");
		exibirMatriz (mat);
	}
	
}

int trocarColuna (int m[linha][coluna], int c1, int c2)
{
	int i, j, vetAux[30];
	
	//Validando se c1 e c2 existem
	if ((c1<0 || c1>coluna-1) || (c2<0 || c2>coluna-1))
	{
		return 0;
	}
	
	else
	{
		for (i = 0; i < linha; i++) 
		{
			vetAux[i] = m[i][c1];
		}
		
		for (i = 0; i < linha; i++) 
		{
			m[i][c1] = m[i][c2];
		}
		
		for (i = 0, j=linha-1; i < linha; i++, j--) 
		{
			m[j][c2] = vetAux[i];
		}
		return 1;	
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
