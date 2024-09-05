/*Desenvolver uma função que remova de uma 
string s os caracteres compreendidos entre as 
posições p1 e p2. 
Caso p1 ou p2 seja uma posição inválida, a 
função deverá retornar o valor 0 e a remoção de 
caracteres solicitada não será realizada; caso 
contrário, deverá retornar 1 e proceder com o 
que foi pedido*/
#include <stdio.h>
void removerCaracteresIntervalo (char s[], char s2[], int p1, int p2);
void exibir (char nome[]);

void main()
{
	char string[20], string2[20];
	int po1, po2;
	
	printf ("Nome: ");
	gets(string);
	
	printf ("P1: ");
	scanf ("%d", &po1);
	
		
	printf ("P2: ");
	scanf ("%d", &po2);
	
	removerCaracteresIntervalo (string, string2, po1, po2);
	exibir (string2);

}

void removerCaracteresIntervalo (char s[], char s2[], int p1, int p2)
{
	int i, j=0;
 
	for (i=0; s[i]; i++)
	{
		if ((i<p1) || (i>p2))
		{
			s2[j]=s[i];
			j++;
		}
	}
	s2[j]='\0';
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

