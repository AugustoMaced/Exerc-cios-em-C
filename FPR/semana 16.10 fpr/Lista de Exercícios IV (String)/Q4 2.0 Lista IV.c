/*Quest�o 04:
Implementar uma fun��o que remova todas as
ocorr�ncias de determinado caracter em uma
string.*/

#include <stdio.h>

void removerCaracter (char nome[], char caracter);
void exibir (char nome[]);
void main ()
{
	char nome[]="anna", caracter;
	
	exibir (nome);
	printf ("Qual caracter deseja remover? ");
	scanf ("%c", &caracter);
	removerCaracter (nome, caracter);
	exibir (nome);
}

void removerCaracter (char nome[], char caracter)
{
	int i, j;
	
	for (i=0; nome[i];)
	{
		if (nome[i]==caracter)
		{	
			for (j=i; nome[j]; j++)
			{
				nome[j]=nome[j+1];
			}		
		}
        else
        {
            i++;
        }
	}
}
void exibir (char nome[])
{
	//declara��o de vari�veis
	int i;
	
	printf ("\nNome: ");
	for (i=0;nome[i];i++)
	{
		printf ("%c", nome[i]);
	}
	
	printf ("\n\n");
}
