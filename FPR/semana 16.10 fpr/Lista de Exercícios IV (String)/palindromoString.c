/*Questão 02: 
Dada uma string s, desenvolver uma função 
que determine se s é ou não um palíndromo. 
Observação: uma string s será um palíndromo 
quando seus caracteres formarem a mesma 
sequência, independente se s é percorrida da 
esquerda para direita ou vice-versa. */

#include <stdio.h>
int determinarPalindomo (char s[]);
int tamanho (char s[]);

void main()
{
	char string[30];
	
	printf ("Insira um nome: ");
	gets (string);
	
	if (determinarPalindomo (string) == 0)
	{
		printf ("\nNao eh palindromo!");
	}
	else
	{
		printf ("\nEh palindromo");
	}


	
}
int tamanho (char s[])
{
	int i;
	
	for (i=0; s[i]; i++);
	
	return i;
}
int determinarPalindomo (char s[])
{
	int i, j;
	//pq essa primeira condição tem que existir?
	for (i=0, j=tamanho(s)-1;i<j; i++, j--)
	{
		if (s[i]!=s[j])
		{
			return 0;
		}	
	}
	return 1;
}


