/*Calcular o n-Èsimo termo da sequ ncia de fibonacci
(1,1,2,3,5,8,13,21,...)

Casa base : a e b = 1

*/
#include <stdio.h>

void main()
{
	int posicao;
	
	printf ("Posicao do numero que deseja na sequencia de fibonacci: ");
	scanf ("%d", &posicao);
		
	printf ("%d",fibonacci (posicao));
}

int fibonacci (int n)
{
	if (n<=2)
	{
		printf ("\nCaso base: retornando\n");
		return 1;
	}
	else
	{	
//		printf ("\nChamando a funcao recursiva: multiplicacao (%d, %d)\n", a, b-1);
		return fibonacci (n-1) + fibonacci (n-2);
	}
}


