STRING OBSERVACOES

- A funcao tamanho (char nome[]) OU strlen (char nome[]) retorna a quantidade de caracteres de uma string 
EXEMPLO:
	   A N N A /0
	   0 1 2 3  4
	 tamanho (nome) retornara 4
	 
- Se voce precisa do valor da string da ultima posicao sera tamanho (char nome[]) - 1, para conseguir excluir o /0
EXEMPLO:
	   A N N A /0
	   0 1 2 3  4
	 tamanho (nome) retorna 4, mas vc quer s[3]; entao tem que tirar 1*/
	 for (i=0, j= tamanho(s)-1; s[i]; i++, j--)
	 
- Percorrer uma ou duas strings, mas o 'i' e o 'j' irao andar juntos, entao so precisa de 1 for
EXEMPLO:
	Questao do palindromo
	for (i=0, j= tamanho(s)-1; s[i]; i++, j--)
	
 - Percorrer uma ou duas strings, mas o 'i' e o 'j' NAO irao andar juntos, entao eh preciso de 2 for
EXEMPLO:
	

- Questao do palindromo
Para comparar apenas uma ves os caractes e nao perder tempo esse for eh necessario:
	for (i=0, j=tamanho(s)-1; s[i]==s[j]&&i<j; i++, j--)

s[i]==s[j]&&i<j ==> 	a n k n a
						0 1 2 3 4
						i i   j j 

- Funcao exibir:

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

- Remover caracter: Fazer uma noca string apenas com os caractes que n eh igual 
