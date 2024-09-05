/*Questão 01:
Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas. 

strlen - Retorna o tamanho de uma string. 
strcpy - Copia uma string em outra. 
strcat - Concatena n caracteres da string2 na string1.
strcmp - Compara duas strings e
determina a ordem (alfabetica) das duas
*/

#include <stdio.h>

int tamanho (char nome[]);

int main ()
{
	char nome[30];
	int quantidade;
	
	printf ("Insira um nome: ");
	gets (nome);
	
	quantidade = tamanho (nome);
	
	printf ("\n%d letras");
}

int tamanho (char nome[])
{
	int i;
	//int cont;
	for (i=0; nome[i]; i++);
	
	return i;
	
	/*for (i=0; nome[i]!=0; i++)
	{
		cont ++;
	}	
	return cont;
	
	while (nome[i]!='\0')
	{
		i++;
	}
	return i;*/
}

