/*Questão 04: 
Implementar uma função que remova todas as 
ocorrências de determinado caracter em uma 
string*/
#include <stdio.h>
void removerCaracter (char s[], char c);
void exibir (char nome[]);

void main()
{
	char string[30];
	char c;
	
	printf ("Entre com a string: ");
	gets(string);
	
	exibir (string);

	printf ("Entre com o caracter que deseja remover: ");
	scanf ("%c", &c);

	removerCaracter (string, c);
	exibir (string);

}
void removerCaracter (char s[], char c)
{
	int i, j=0;
	
	for (i=0; s[i]; i++)
	{
		if (s[i]!=c)
		{
			s[j]=s[i];
			j++;
		}
	}
	s[j] = '\0';
	
}
/* OU
void remover(char s[], char c)
{
    int i, j;

    for (i = 0; s[i]; i++)
    {
        if (s[i] == c)
        {
            for (j = i; s[j]; j++)
            {
                s[j] = s[j + 1];
            }
            s[j] = '\0';
            i--;
        }
    }
}*/

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


