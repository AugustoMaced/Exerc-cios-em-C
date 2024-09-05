/*O que é armazenado na variável x quando o 
comando x = funcao (32, 6); for executado?*/
#include <stdio.h>

void main()
{	
	funcao (32, 6);

	printf ("%d", funcao (32, 6));
}
int funcao (int A, int B)
{
	if (A >= B)
	{
		return funcao (A-B, B);
	}
	else
	{
		return A;
	}
}

/*
int funcao (int 32, int 6)
{
	if (32 >= 6) // <===
	{
		return funcao (32-6, 6); // (26, 6)
	}
	else
	{
		return A;
	}
}

int funcao (int 26, int 6)
{
	if (26 >= 6) // <===
	{
		return funcao (26-6, 6); // (20, 6)
	}
	else
	{
		return A;
	}
}

int funcao (int 20, int 6)
{
	if (20 >= 6) // <===
	{
		return funcao (20-6, 6); // (14, 6)
	}
	else
	{
		return A;
	}
}

int funcao (int 14, int 6)
{
	if (14 >= 6) // <===
	{
		return funcao (14-6, 6); // ( 8, 6)
	}
	else
	{
		return A;
	}
}

int funcao (int 8, int 6)
{
	if (8 >= 8) // <===
	{
		return funcao (8-6, 6); // ( 2, 6)
	}
	else
	{
		return A;
	}
}

int funcao (int 2, int 6)
{
	if (A >= B)
	{
		return funcao (A-B, B);
	}
	else
	{
		return 2; // <===
	}
}*/
