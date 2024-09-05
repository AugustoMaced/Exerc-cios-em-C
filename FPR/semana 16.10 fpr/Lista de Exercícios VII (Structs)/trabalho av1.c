#include <stdio.h>

// função para trocar 

void trocar(int *a, int *b){
	
	int temp = *a;
	*a =*b;
	*b = temp;
}

// função de particionamento 

int particionar (int vet[], int menor, int maior){
	
	int pivo = vet[maior]; //pivo do ultimo elemento
	int i = (menor -1); //indice do menor elemento
	
	for (int j = menor; j<= maior - 1; j++){
		
		if(vet[j] <= pivo){
			i++ //incrementar o indice do menor elemento
			trocar(&vet[i], &vet[j]);
		}
	}
	trocar(&vet[i + 1], &vet[maior]);
	return (i + 1);
}

//função principal do Quicksort
void quicksort (int vet[], int menor, int maior){
	
	if(menor < maior){
		int pi = particiona(vet, menor, maior);
		
		//ordenar elementos de antes e depois da partição
		quicksort (vet, menor, pi - 1);
		quicksort (vet, pi+1, maior);		
	}
}

//função para imprimir esse vetor
void imprimevetor(int vet[], int tamanho){

for(int i =0; i< tamanho; i++){
printf("%d",vet[i])	
}
print("\n");
}

//função principal 
int main() {
	int vet[] = {3,6,8,10,1,2,1};
	int n = sizeof(vet)/sizeof(vet[0]);
	
	printf ("vetor original: \n")
	imprimevetor(vet,n);
	
	quicksort (vet, 0, n- 1);
	printf ("vetor ordenado: \n")
}
