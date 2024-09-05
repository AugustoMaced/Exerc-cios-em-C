#include <stdio.h>
#define TAM 5

// Declarando os protótipos das funções
void acharPosicoes(float vetor[], float tamanho, float p1, float p2, float *posMaior, float *posMenor);
void trocarValores(float vetor[], float pos1, float pos2, float posMaior, float posMenor);

// Função principal
int main() {
    float vetor[TAM] = {10, 5, 8, 2, 7}; // Exemplo de vetor
    float tamanho = TAM;
    float p1 = 1; // Posição inicial
    float p2 = 4; // Posição final
    float posMaior, posMenor;
    
    acharPosicoes(vetor, tamanho, p1, p2, &posMaior, &posMenor);
    trocarValores(vetor, p1, p2, posMaior, posMenor);
    
    printf("Vetor modificado: ");
    
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}

// Função para encontrar as posições
void acharPosicoes(float vetor[], float tamanho, float p1, float p2, float *posMaior, float *posMenor) {
    int i;
    *posMaior = p1;
    *posMenor = p1;
    
    for (i = p1; i <= p2; i++) {
        if (vetor[i] > vetor[*posMaior]) {
            *posMaior = i;
        }
        if (vetor[i] < vetor[*posMenor]) {
            *posMenor = i;
        }
    }
}

// Função para trocar os valores
void trocarValores(float vetor[], float pos1, float pos2, float posMaior, float posMenor) {
    float temp1, temp2;
    temp1 = vetor[pos1];
    temp2 = vetor[pos2];
    vetor[pos1] = vetor[posMenor];
    vetor[pos2] = vetor[posMaior];
    vetor[posMenor] = temp1;
    vetor[posMaior] = temp2;
}

