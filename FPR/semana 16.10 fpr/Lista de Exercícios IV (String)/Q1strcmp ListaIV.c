/*Questão 01:
Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas. 

1) strlen - Retorna o tamanho de uma string. 
2) strcpy - Copia uma string em outra. 
3) strcat - Concatena n caracteres da string2 na string1.
4) strcmp - Compara duas strings e
determina a ordem (alfabetica) das duas

s1        s2
alex      alexandre <0, pois s1 vem primeiro em ordem alfabetica
casarao   casa      >0, pois s2 vem primeiro em ordem alfabética
FPR       FPR       =0, pois são iguais 
*/

#include <stdio.h>

int comparar (char s1[], char s2[]);

void main ()
{
	char nome1[30], nome2[30];
	
	printf ("Insira um nome: ");
	gets (nome1);	
	
	printf ("Insira um nome: ");
	gets (nome2);
	
	if (comparar (nome1, nome2)<0)
	{
		printf ("\nO primeiro nome vem antes no alfabeto");	
	}
	else
	{
		if (comparar (nome1, nome2)>0)
		{
			printf ("\nO primeiro nome vem depois no alfabeto");	
		}
		else
		{
			printf ("\nOs nomes sao iguais");	
		}
	}
	
}

int comparar (char s1[], char s2[])
{
	int i;
	
	for (i=0; s1[i]&&s2[i]&&(s1[i]==s2[i]); i++);
	if (s1[i]<s2[i])
	{
		return -1;
	}
	else
	{
		if (s1[i]>s2[i])
		{
			return 1;
		}
		else 
		{
			return 0;
		}
	}

	
	/*
		return s1[i]-s2[i];
	*/
}
