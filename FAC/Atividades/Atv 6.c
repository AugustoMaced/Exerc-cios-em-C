#include <stdio.h>

void compararVetores(float vetA[], float vetB[], int tamanho) {
    float temp;
    int i;
   
    for (i = 0; i < tamanho; i++) {
        if (vetA[i] > vetB[i]) {
            // Troca os valores se o elemento de vetA for maior que o de vetB
            temp = vetA[i];
            vetA[i] = vetB[i];
            vetB[i] = temp;
        }
    }
}

int main() {
    // Definir os vetores vetA e vetB
    float vetA[] = {1.5, 2.7, 3.1, 4.2};
    float vetB[] = {0.8, 2.9, 3.5, 4.0};
    
    int tamanho = sizeof(vetA) / sizeof(vetA[0]);
    int i;
    
    printf("Antes da comparação:\n");
    printf("vetA: ");
    
    for (i = 0; i < tamanho; i++) {
        printf("%.2f ", vetA[i]);
    }
    printf("\n");
    
    printf("vetB: ");
  
    for (i = 0; i < tamanho; i++) {
        printf("%.2f ", vetB[i]);
    }
    printf("\n");
    
    compararVetores(vetA, vetB, tamanho);
    
    printf("\nDepois da comparação:\n");
    printf("vetA: ");
   
    for (i = 0; i < tamanho; i++) {
        printf("%.2f ", vetA[i]);
    }
    printf("\n");
    
    printf("vetB: ");
    for (i = 0; i < tamanho; i++) {
        printf("%.2f ", vetB[i]);
    }
    printf("\n");
    
    return 0;
}

