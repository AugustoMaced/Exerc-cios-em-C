#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 6

// declarando os pprototipos 
sao_multiplos(int vet[], int tamanho, int num);

preencherVet(int vet[], int tamanho);


int main() {
    int vet[TAM];
    int num, i;
    
    preencherVet(vet, TAM);
    
    printf("Defina o numero a ser verificado:\n");
    scanf("%d", &num);
    
    int resultado = sao_multiplos(vet, TAM, num);
    
    if (resultado == 1) {
        printf("Todos os valores do vetor sao multiplos de %d\n", num);
    } else {
        printf("Pelo menos um valor do vetor nao e multiplo de %d\n", num);
    }
    
    return 0;
}



int sao_multiplos(int vet[], int tamanho, int num) {
    int i;
    
    for(i = 0; i < tamanho; i++) {
        if (vet[i] % num != 0) {
           
		   printf("Todos os valores do vetor sao multiplos de %d\n", num);
		    return 0;
        }
    }
    printf("Pelo menos um valor do vetor nao e multiplo de %d\n", num);
	return 1;
}

// Função para preencher o vetor
void preencherVet(int vet[], int tamanho) {
    int i;
    srand(time(NULL));
    for (i = 0; i < tamanho; i++) {
        vet[i] = rand() % 10;
    }
}



