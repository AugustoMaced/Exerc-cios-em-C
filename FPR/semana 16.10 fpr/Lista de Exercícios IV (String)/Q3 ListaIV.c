/*Questão 03:
Desenvolver uma função que, dada uma string
s, crie uma substring que inicie na posição p de
s e contenha n caracteres.
Observações: se p e/ou n forem inválidos, a
substring será vazia; ii) se s não possuir n
caracteres além de p, a substring a ser criada
começará em p e terminará no final de s.

DÚVIDA: PQ O TAMANHO DA SUBSTRING NÃO PODE SER DEFINIDO COMO QUANTCARACTERES+1
No código original, o tamanho da substring foi definido como quantCaracteres +
1. No entanto, esse tamanho não faz sentido porque a substring precisa armazenar 
apenas quantCaracteres caracteres e, em seguida, o caractere nulo de terminação '\0'. 
Portanto, defini o tamanho da substring como 100, para garantir espaço suficiente.
*/

#include <stdio.h>

void criarSubstring (char string[], char substring[], int p, int quantCaracteres);
void exibir (char nome[]);

void main ()
{
	int posicao, quantCaracteres;
	char string[]="casinha", substring[100];
	
	exibir (string);
	
	tamanho (string);

	printf ("Posicao da string: ");
	scanf ("%d", &posicao);
	
	printf ("Caracteres da nova string: ");
	scanf ("%d", &quantCaracteres);
	
	criarSubstring (string, substring, posicao, quantCaracteres);
	
	exibir (substring);	
}
void criarSubstring (char string[], char substring[], int p, int quantCaracteres)
{
	int i, j;
	if ((tamanho(string)-p)==quantCaracteres)
	{
		for (i=p, j=0; string[i]; i++, j++)
		{
		substring[j] = string[i];
		}
		substring[j] = '\0';
	}
	else
	{
		for (i=p, j=0; j<quantCaracteres; i++, j++)
		{
		substring[j] = string[i];
		}
		substring[j] = '\0';
	}
	
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
int tamanho (char nome[])
{
	int i;
	//int cont;
	for (i=0; nome[i]; i++);
	
	return i;
}
