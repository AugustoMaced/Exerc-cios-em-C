MATRIZ

- Nao precisa percorrer a matriz toda para soma elementos
acima da diagonal

for(i=0; i<linha-1; i++)
{
	for (j=i+1; j<coluna; j++)
	{
		somaAcima += m[i][j]
	}
}

abaixo da diagonal
for(i=1; i<linha; i++)
{
	for (j=0; j<i; j++)
	{
		somaAbaixo += m[i][j]

	}
}

- criar matriz 
	int m1[5][5] = {{6,3,1,2,6},
	                {1,3,5,4,2},
	                {3,4,4,2,2},
	                {5,9,1,9,3},
	                {4,0,2,1,8}};
