/*Quest�o 02: 
Dada uma string s, desenvolver uma fun��o 
que determine se s � ou n�o um pal�ndromo. 
Observa��o: uma string s ser� um pal�ndromo 
quando seus caracteres formarem a mesma 
sequ�ncia, independente se s � percorrida da 
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
	//pq essa primeira condi��o tem que existir?
	for (i=0, j=tamanho(s)-1;i<j; i++, j--)
	{
		if (s[i]!=s[j])
		{
			return 0;
		}	
	}
	return 1;
}


