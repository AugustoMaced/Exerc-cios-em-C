/*Implementar uma função que, dada uma matriz
M10×8, gere um vetor V de tamanho 8, onde
cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o
elemento V[0] consiste na soma dos elementos
da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda
coluna de M, e assim por diante.*/
#include <stdio.h>
#define linha 10
#define coluna 8

void gerarVetor (int matriz[linha][coluna], int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);
void preencherAleatorio (int matriz[linha][coluna]);
void exibirMatriz (int matriz[linha][coluna]);

void main ()
{
	int m[linha][coluna];
	int vet[coluna], tamanho;
	
	preencherAleatorio (m);
	exibirMatriz (m);

	gerarVetor (m,vet, 8);
	exibir (vet, 8);

}

void gerarVetor (int matriz[linha][coluna], int vetor[], int tamanho)
{
	int i, j, k=0, soma;
		
	for (j=0; j<coluna; j++)
	{
		soma=0;
		for (i=0; i<linha; i++)
		{
			soma+=matriz[i][j];
		} 
		vetor[k]=soma;
		k++;
	}
}

void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
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
