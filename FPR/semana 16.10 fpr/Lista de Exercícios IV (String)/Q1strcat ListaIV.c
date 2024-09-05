/*Questão 01:
Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas. 

1) strlen - Retorna o tamanho de uma string. 
2) strcpy - Copia uma string em outra. 
3) strcat - Concatena n caracteres da string2 na string1.
4) strcmp - Compara duas strings e
determina a ordem (alfabetica) das duas as

DUVÍDA: COMO DECLARAR O TAMANHO DE UMA STRING 
*/

void concanacao (char s1[], char s2[]);
void exibir (char nome[]);
int tamanho (char nome[]);


int main ()
{
	char s1[]="anna", s2[]=" julia";
	
	exibir (s1);
	exibir (s2);
	
	concanacao (s1, s2);
	exibir (s1);

}

void concanacao (char s1[], char s2[])
{
	int i, j;
	
	for (i=tamanho(s1), j=0; s2[j]!='\0'; i++,j++)
	{
		s1[i]=s2[j];
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

int tamanho (char nome[])
{
	int i;
	//int cont;
	for (i=0; nome[i]; i++);
	
	return i;
}
