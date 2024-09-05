/* Questão 01:
Implementar uma função que, dada uma string
s, determine a quantidade de caracteres 
distintos em s.*/
#include <stdio.h>

void main()
{
	char nome[30];	
	int resultado;
	
	printf ("Insira um nome: ");
	gets (nome);
	
	resultado = caracteresDistintos (nome);
	
	printf("O nome tem %d caracteres diferentes! ", resultado);

}
int caracteresDistintos (char s[])
{
	int i, j, cont=0;
	
	for (i=0; s[i]; i++)
	{
		if (s[i]!= s[i+1])
		{
			cont++;
		}
	}
	return cont;
}
