/*  Considere a existência de um vetor de structs com quant posições, onde cada uma destas 
	armazena os seguintes dados sobre um grupo de pessoas: nome (string), gênero (char) e 
	idade (int). Pede-se uma função que determine se os elementos deste vetor estão ordenados 
	e retorne 1, caso estejam ordenados, e 0, caso contrário. 
	
	Observação: o vetor será considerado ordenado se estiver organizado crescentemente em função 
	da idade. Porém, no caso de pessoas com a mesma idade, estas devem estar ordenadas 
	crescentemente pelo nome */
	
#include <stdio.h>
#include <string.h>
#define QUANT 5

typedef struct {
	char nome[30];
	char genero;
	int idade;
} TPessoas;

int determinarOrdenacao (TPessoas vetor[], int quantidade);


void main()
{
	TPessoas pessoa[QUANT]; 
	
	
	//inicializando o vetor de structs
	strcpy (pessoa[0].nome, "ANNA");
	pessoa[0].genero = 'F';
	pessoa[0].idade = 16;
	
	strcpy (pessoa[1].nome, "JULIA");
	pessoa[1].genero = 'F';
	pessoa[1].idade = 18;

	strcpy (pessoa[2].nome, "CARLA");
	pessoa[2].genero = 'F';
	pessoa[2].idade = 19;

	strcpy (pessoa[3].nome, "JULIANA");
	pessoa[3].genero = 'F';
	pessoa[3].idade = 20;

	strcpy (pessoa[4].nome, "JOAO");
	pessoa[4].genero = 'M';
	pessoa[4].idade = 21;
	

	if (determinarOrdenacao (pessoa, QUANT)==0)
	{
		printf ("O vetor nao esta ordenado! ");
	}
	else
	{
		printf ("O vetor esta ordenado! ");
	}

}

int determinarOrdenacao (TPessoas vetor[], int quantidade)
{
	//O vetor será considerado ordenado se estiver organizado crescentemente em função da idade.Porém, no caso de pessoas com 
	// a mesma idade, estas devem estar ordenadas crescentemente pelo nome 
	
	int i, j;

    for (i = 0; i < quantidade - 1; i++) 
	{
        // Se a idade do elemento atual for maior que a idade do próximo elemento, não está ordenado.
        if (vetor[i].idade > vetor[i + 1].idade) 
		{
            return 0;
        }
		else
		{
			if (vetor[i].idade == vetor[i + 1].idade) 
			{
            // Se as idades são iguais, verifique a ordenação pelo nome.
            	if (strcmp(vetor[i].nome, vetor[i + 1].nome) > 0)
				{
                	return 0;
           	 	}
        	}
		} 
    }
    return 1; // Ordenado
}
    
    

