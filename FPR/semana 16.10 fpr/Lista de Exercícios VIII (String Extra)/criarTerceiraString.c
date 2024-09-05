/*Questão 02:
Implementar uma função que, dadas duas 
strings s1 e s2, crie uma nova string – s3 –
contendo todos os caracteres de s1 que não 
estejam em s2.
Nota: em s3, não devem existir caracteres 
repetidos.
*/
#include <stdio.h>
#include <string.h>  // Inclua esta biblioteca para usar a função gets.

void exibir (char nome[]);
void criarString (char s1[], char s2[], char s3[]);

void main()
{
	char string1[30], string2[30], string3[30];
	
	printf ("S1: ");
	gets (string1);
	
	printf ("\nS2: ");
	gets (string2);
	
	criarString (string1, string2, string3);
	exibir (string3);

}


void criarString(char s1[], char s2[], char s3[])
{
    int i, j, k = 0, cont;

    for (i = 0; s1[i]; i++)
    {
        cont = 0;  
        for (j = 0; s2[j]; j++)
        {
            if (s1[i] == s2[j])
            {
                cont = 1;  
                break;      
            }
        }
        if (cont == 0)
        {
            s3[k] = s1[i];
            k++;
        }
    }
    s3[k] = '\0';
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
