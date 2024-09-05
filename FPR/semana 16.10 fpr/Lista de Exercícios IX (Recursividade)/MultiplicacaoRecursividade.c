/*Calcular o valor de a x b, através de sucessivas somas, onde a e b
são inteiros nao negativos.

5 x 3 = 5 + 5 + 5 = 15
5 x 1 = 5 + 0 = 5
5 x 0 = 0
5 + 5 * (3-1)
5 + 5 * 2 = 15
*/
#include <stdio.h>

void main()
{
	int numA,  numB;
	
	printf ("Num1: ");
	scanf ("%d", &numA);
	
		
	printf ("Num2: ");
	scanf ("%d", &numB);
	
	printf ("%d",multiplicacao (numA,numB));
}

int multiplicacao (int a, int b)
{
	if ((b==0) || (a==0))
	{
//		printf ("\nCaso base: retornando\n");
		return 0;
	}
	else
	{	
//		printf ("\nChamando a funcao recursiva: multiplicacao (%d, %d)\n", a, b-1);
		return a + multiplicacao (a, b-1);
	}
}

/*
5 x 3 
5 + 5 * (5-3)
a + a * (a-b)

int multiplicacao (int 5, int 3)
{
	if ((b==0) || (a==0))
	{
		return 0;
	}
	else
	{	
		return 5 + multiplicacao (5, 3-1);  (5, 2) <===
	}
}

int multiplicacao (int 5, int 2)
{
	if ((b==0) || (a==0))
	{
		return 0;
	}
	else
	{	
		return 5 + multiplicacao (5, 2-1);  (5, 1) <===
	}
}

int multiplicacao (int 5, int 1)
{
	if ((b==0) || (a==0))
	{
		return 0;
	}
	else
	{	
		return 5 + multiplicacao (5, 1-1);  (5, 0) <===
	}
}

int multiplicacao (int 5, int 0)
{
	if ((b==0) || (a==0))
	{
		return 0; <===
	}
	else
	{	
		return 5 + multiplicacao (5, 1-1);  
	}
}*/
