/* Exerc�cio:
Considere a exist�ncia de um vetor no qual cada posi��o pode armazenar o nome do aluno,
as notas de AV1 e AV2, sua m�dia e a situa��o (aprovado, reprovado ou em AVF). Pede-se:

A declara��o do vetor, assim como de todos os tipos de dados necess�rios, caso
existam;

Uma fun��o que leia os dados de todos os alunos da turma;

Uma fun��o que calcule a m�dia de cada aluno (e a armazene no vetor), assim como a
sua situa��o;

Uma fun��o que, dado um n�mero inteiro (1-aprovado;2-reprovado;3-em AVF), exiba
todos os alunos que est�o nesta situa��o. */

#include <stdio.h>
#include <string.h>
#define TAM 5

typedef struct {
	char nome[30];
	float av1;
	float av2;
	float media;
	char situacao[15]; 
} TAluno;

void lerDados (TAluno vetor[], int tamanho);
void calcularMediaSituacao (TAluno vetor[], int tamanho);
void situacaoAlunos (TAluno vetor[], int tamanho, int sit);

void main()
{
	TAluno turma[TAM];
	
	lerDados (turma, TAM);
	
	calcularMediaSituacao (turma, TAM);
	
	printf ("\n\nAluno aprovados:\n\n");
	situacaoAlunos (turma, TAM, 1);
	
	printf ("\n\nAluno reprovados:\n\n");
	situacaoAlunos (turma, TAM, 2);
	
	printf ("\n\nAluno avf:\n\n");
	situacaoAlunos (turma, TAM, 3);
}

void lerDados (TAluno vetor[], int tamanho)
{
	int i;
	
	for (i=0; i<tamanho; i++)
	{
		fflush (stdin);
		printf ("\nNome: ");
		gets (vetor[i].nome);
	
		printf ("\nAV1: ");
		scanf ("%f", &vetor[i].av1);
		
		printf ("\nAV2: ");
		scanf ("%f", &vetor[i].av2);
	}
}

//Uma fun��o que calcule a m�dia de cada aluno (e a armazene no vetor), assim como a
//sua situa��o;
void calcularMediaSituacao (TAluno vetor[], int tamanho)
{
	int i;
	
	for (i=0; i<tamanho; i++)
	{
		vetor[i].media = (vetor[i].av1 + vetor[i].av2)/2;
	
		if (vetor[i].media >= 6)
		{
			strcpy (vetor[i].situacao, "APROVADO");
		}
		else
		{
			if (vetor[i].media<4)
			{
				strcpy (vetor[i].situacao,"REPROVADO");
			}
			else
			{
				strcpy (vetor[i].situacao, "AVF");
			}
		}
	}
}

//Uma fun��o que, dado um n�mero inteiro (1-aprovado;2-reprovado;3-em AVF), exiba
//todos os alunos que est�o nesta situa��o. 
void situacaoAlunos (TAluno vetor[], int tamanho, int sit)
{
	int i;
	char busca[15];
	
	switch (sit)
	{
		case 1: strcpy (busca, "APROVADO");
				break;
		case 2: strcpy (busca, "REPROVADO");
				break;
		case 3: strcpy (busca, "AVF");
				break;
	}
	
	for (i=0; i<tamanho; i++)
	{
		if (strcmp (vetor[i].situacao, busca) == 0)
		{
			printf ("\nNome: %s\nAV1: %.1f - AV2: %.1f - Media: %.1f\n", 
					vetor[i].nome, vetor[i].av1, vetor[i].av2, vetor[i].media );
		}
	}
}
