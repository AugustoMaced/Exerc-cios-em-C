/*Questão 01: 
Uma loja de automóveis mantém os carros à 
venda sob a forma de um vetor de structs 
contendo as seguintes informações, para cada 
veículo: placa, modelo, marca, cor, 
quilometragem, ano modelo/fabricação (deve 
ser um struct), valor e tipo (usado ou 0 km, 
conforme o valor do campo quilometragem). 
Pede-se a declaração de uma variável que 
represente o estoque de veículos da loja, 
incluindo todas as declarações de tipos que 
possam ser necessárias. 
Além disso, implementar as seguintes funções: 
i. Exibir todos os carros do modelo m, ano de 
fabricação entre a1 e a2 (inclusive), com 
valor não superior a x reais; 
ii. Reajustar os valores de todos os carros 0 
km, considerando um aumento de p %; 
iii. Retirar do estoque um determinado veículo, 
dada a sua placa. */

#include <stdio.h>

typedef struct{
	int modelo;
	int fabricacao;
} TAno;

typedef struct{
	char placa[10];
	char modelo[30];
	char marca[30];
	char cor[15];
	float quilometragem;
	TAno ano; 
	float valor;
	char tipo[10] //0KM OU USADO 
} TCarro;

void exibeFiltrarCarros (TCarro vetor[], int quantidade, char m, int a1, int a2, float reais);
void reajustarValor (TCarro vetor[], int quantidade, float p);
int retirarCarro (TCarro vetor[], int *quantidade, char placa[]);

void main()
{
	TCarro agencia[5];
}

//i. Exibir todos os carros do modelo m, ano de fabricação entre a1 e a2 (inclusive), com 
//valor não superior a x reais; 
void exibeFiltrarCarros (TCarro vetor[], int quantidade, char m, int a1, int a2, float reais)
{
	int i;
	
	for (i=0; i<quantidade; i++)
	{
		if ((strcmp (vetor[i].modelo, m)==0) && (vetor[i].ano.fabricacao >=a1) && 
		(vetor[i].ano.fabricacao, a2<=a2) && (vetor[i].valor <= reais))
		{
			printf ("\nPlaca: %s", vetor[i].placa);
			printf ("\nModelo: %s", vetor[i].modelo);
			printf ("\nMarca: %s", vetor[i].marca);
			printf ("\nCor: %s", vetor[i].cor);
			printf ("\nAno: %d/%d", vetor[i].ano.modelo, vetor[i].ano.fabricacao);
			printf ("\nQuilometragem: %.1f", vetor[i].quilometragem);
			printf ("\nValor: %.2f", vetor[i].valor);
			printf ("\nTipo: %s", vetor[i].tipo);
		}
	}
}

//ii. Reajustar os valores de todos os carros 0 km, considerando um aumento de 2.5 %; 
void reajustarValor (TCarro vetor[], int quantidade, float p)
{
	int i;
	float aumento = (p/100); // 2.5/100
	for (i=0; i<quantidade; i++)
	{
		if (strcmp (vetor[i].tipo, "0KM") == 0)
		{
			vetor[i].valor += vetor[i].valor * aumento; 
		}
	}
}

//iii. Retirar do estoque um determinado veículo, dada a sua placa.
int retirarCarro (TCarro vetor[], int *quantidade, char placa[])
{
	int i;
	
	for (i=0; i<*quantidade; i++)
	{
		if (strcmp(vetor[i].placa, placa)==0)
		{
			vetor[i] = vetor[(*quantidade)-1];
			(*quantidade)--;
			return 1;
		}
	}
	return 0;
 } 
 

