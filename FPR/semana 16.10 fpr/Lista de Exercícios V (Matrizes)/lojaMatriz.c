/*Considere uma loja que mantém em uma
matriz o total vendido por cada funcionário
pelos diversos meses do ano. Ou seja, uma
matriz de 12 linhas (uma por mês) e 10 colunas
(10 funcionários). Pede-se o desenvolvimento
de uma função para cada item abaixo:
a. Calcular o total vendido durante o ano;
b. Dado um mês fornecido pelo usuário,
determinar o total vendido nesse mês;
c. Dado um funcionário fornecido pelo
usuário, determinar o total vendido por ele
durante o ano;
d. Determinar o mês com maior índice de
vendas;
e. Determinar o funcionário que menos
vendeu durante o ano.*/

#include <stdio.h>
#define linha 12 //meses 
#define coluna 10 //funcionários 

float totalVendido (float matriz[linha][coluna]);
float totalMesEscolhido (float matriz[linha][coluna], int mes);
float totalFuncionarioEscolhido (float matriz[linha][coluna], int funcionario);
int melhorMes (float matriz[linha][coluna]);
int piorFuncionario (float matriz[linha][coluna]);
void preencherAleatorio (float matriz[linha][coluna]);
void exibirMatriz (float matriz[linha][coluna]);

void main()
{
	float mat[linha][coluna];
	int m, func;
	
	preencherAleatorio (mat);
	exibirMatriz (mat);
	
	printf ("Insira um mes: ");
	scanf ("%d", &m);
	
	printf ("\nInsira um funcionario: ");
	scanf ("%d", &func);
	
	printf ("\nTotal vendido em todo o ano = R$ %.2f", totalVendido (mat));
	
	printf ("\nTotal vendido durante o mes %d = R$ %.2f", m, totalMesEscolhido (mat, m));

	printf ("\nTotal vendido pelo funcionario %d durante o ano = R$ %.2f", func, totalFuncionarioEscolhido (mat, func));
	
	printf ("\nMes com mais vendas = %do mes", melhorMes (mat));
	
	printf ("\nFuncionario com menos vendas = %do funcionario", piorFuncionario (mat));
	

}

float totalVendido (float matriz[linha][coluna])
{
	int i, j;
	float soma, totalVendidoAno=0;
	
	//dessa forma vai somar os valores de cada funcionário no mesmo mes
	for (i=0; i<linha; i++)
	{
		soma=0;
		for (j=0; j<coluna; j++)
		{
			soma += matriz[i][j];
		}
		totalVendidoAno+=soma; //soma de todos os meses 
	}
	return totalVendidoAno;
}

/*
OU
float totalVendido (float matriz[linha][coluna])
{
	int i, j;
	float totalVendidoAno=0;
	
	//dessa forma vai varre toda a matriz
	for (i=0; i<linha; i++)
	{
		for (j=0; j<coluna; j++)
		{
			totalVendidoAno+=matriz[i][j];
		}
	}
	return totalVendidoAno;
}	
*/

float totalMesEscolhido (float matriz[linha][coluna], int mes)
{
	int j;
	float somaMes=0;
	
	//parou no mes escolhido, só variando os funcionários (coluna)
	for (j=0; j<coluna; j++)
	{
		somaMes+=matriz[mes][j];
	}
	return somaMes;
}

float totalFuncionarioEscolhido (float matriz[linha][coluna], int funcionario)
{
	int i, j;
	float somaFuncionario=0;
	
	//parou no funcionario escolhido, só variando os meses (linha)
	for (i=0; i<linha; i++)
	{
		somaFuncionario+=matriz[i][funcionario];
	}
	return somaFuncionario;
}


int melhorMes (float matriz[linha][coluna])
{
	int m, melhorMes=0, mes;
	float total, maior=-1;
	
	for (m=0; m<=linha; m++)
	{
		total = totalMesEscolhido (matriz, mes);
		
		if (total > maior)
		{
			maior = total;
			melhorMes = mes;
		}
	}
	return melhorMes;

}

int piorFuncionario (float matriz[linha][coluna])
{
	int f, piorFuncionario = 0, funcionario;
	float total, menor=100000000;
	
	for (f=0; f<=funcionario; f++)
	{
		total = (matriz, funcionario);
		
		if (total < menor)
		{
			menor = total;
			piorFuncionario = funcionario;
		}
	}
	return piorFuncionario;
}

void preencherAleatorio (float matriz[linha][coluna])
{
  int i, j;

  srand (time(NULL));

	for (i=0; i<linha; i++)
	{
    	for (j=0; j<coluna; j++)
    	{
			matriz[i][j] = 1+rand()%1000; //preenchendo a matriz com valores aleatórios de 1 a 100
    	}
	}	
}

void exibirMatriz (float matriz[linha][coluna])
{
  int i,j;

  printf ("Matriz:\n\n");

	for (i=0; i<linha; i++)
	{ 
		for (j=0; j<coluna; j++)
		{
			printf ("%10.2f", matriz[i][j]);
    	}
    	printf ("\n");
	}
	printf ("\n\n");
}
