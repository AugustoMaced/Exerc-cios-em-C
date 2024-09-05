/* Questão 01:
Implementar uma função que, dada uma string
s, determine a quantidade de caracteres 
distintos em s. */

#include <stdio.h>
int carateresDistintos(char s[]);
void main()
{
	char string[30];
	
	printf ("String: ");
	gets (string);
	
	printf("%d", carateresDistintos (string));

}
int carateresDistintos(char s[])
{
	int i, j, cont, quant=0;
	
	for (i=0; s[i]; i++)
	{
		cont=0;
		for (j=i+1; s[j]; j++)
		{
			if (s[i]==s[j])
			{
				cont=1;
				break;
			}
		}
		if (cont==0)
		{
			quant++;
		}
	}
	return quant;
}
