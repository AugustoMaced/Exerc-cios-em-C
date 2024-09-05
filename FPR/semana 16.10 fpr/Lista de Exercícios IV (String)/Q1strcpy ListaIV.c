/*Questão 01:
Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas. 

1) strlen - Retorna o tamanho de uma string. 
2) strcpy - Copia uma string em outra. 
3) strcat - Concatena n caracteres da string2 na string1.
4) strcmp - Compara duas strings e determina a ordem (alfabetica) das duas


DUVIDA: PRECISA DECLARAR O TAMANHO DA STRING???????????
*/

#include <stdio.h>

void copiar (char s1[], char s2[]);
void exibir (char nome[]);

void main()
{
	char s1[]="anna", s2[]="julia";
	
	exibir (s1);
	exibir (s2);

	copiar (s1, s2);
	exibir (s1);

}

void copiar (char s1[], char s2[])
{
	int i;
	
	for (i=0; s2[i]!='\0'; i++)
	{
		s1[i] = s2[i];
	}
	s1[i]='\0';
}

void exibir (char nome[])
{
	//declaração de variáveis
	int i;
	
	printf ("\nNome: ");
	for (i=0;nome[i];i++)
	{
		printf ("%c", nome[i]);
	}
	
	printf ("\n\n");
}
