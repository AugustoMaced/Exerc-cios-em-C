/* Desenvolver uma função que gere a seguinte
matriz M5x5:
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9 */

#include <stdio.h>
void exibirMatriz (int linha, int coluna, int matriz[linha][coluna]);
void gerarMatriz (int linha, int coluna, int matriz[linha][coluna]);

void main()
{
	int m[5][5];
	
	gerarMatriz (5, 5, m);
	
	exibirMatriz (5, 5, m);
}

void gerarMatriz (int linha, int coluna, int matriz[linha][coluna])
{
	int i, j, aux=1, k=1;
	
	for (i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{	
			matriz[i][j]=aux;	
			aux+=1;
		}
		k++;
		aux=k;
	} 	
}

void exibirMatriz (int linha, int coluna, int matriz[linha][coluna])
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
