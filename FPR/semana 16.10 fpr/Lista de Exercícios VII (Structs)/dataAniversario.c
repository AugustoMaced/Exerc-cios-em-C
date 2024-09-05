/*Questão 02: 
Suponha a existência de um vetor de tamanho 
TAM, cada posição armazenando o nome da 
pessoa e a sua data de aniversário
(representada por um struct do tipo TData, 
contendo os campos dia e mes). Pede-se o 
desenvolvimento das seguintes funções: 
? Determinar a quantidade de pessoas que 
fazem aniversário no mês M; 
? Exibir os nomes de todas pessoas que fazem 
aniversário entre as datas d1 e d2, ambas 
do tipo TData. */

typedef struct {
	int dia, mes;
}TData;

typedef struct {
	char nome[30];
	TData dataAniversario;
} TPessoa;

void main()
{
	TPessoa pessoas[5];
}

int determinarAniversariantesMes (TPessoa vetor[], int tamanho, int m)
{
	int i, cont=0;
	
	for (i=0; i<tamanho; i++)
	{
		if (vetor[i].dataAniversario.mes == m)
		{
			cont++;
		}
	}
	return cont;
}
//Exibir os nomes de todas pessoas que fazem aniversário entre as datas d1 e d2, ambas o tipo TData. 
void exibirAniversariantes (TPessoa vetor[], int tamanho, TData d1, TData d2)
{
	int i;
	
	for (i=0; i<tamanho; i++)
	{	
		if (verificarDataIntervalo (d1, d2, vetor[i].dataAniversario) == 1)
		{
			printf("\n\nNome: %s", vetor[i].nome);
		}
	}
}


// d1 26/05                d2 17/08  
int verificarDataIntervalo (TData d1, TData d2, TData data)
{
	// mes entre os meses de d1 e d2
	if ((data.mes > d1.mes) && (data.mes < d2.mes))
	{
		return 1;
	}
	else
	{
		// mes igual a d1
		if (data.mes == d1.mes)
		{
			if (data.dia >= d1.dia)
			{
				return 1;
			}
		}
		else
		{
			// mes igual a d2
			if (data.mes == d2.mes)
			{
				if (data.dia <= d2.dia)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}
