#include <stdio.h>

void encontrarValores(float vet[], int tamanho, int n, float *menorMaior, float *maiorMenor) {
    *menorMaior = *maiorMenor = -1; // Inicializar com valores inválidos

    for (int i = 0; i < tamanho; i++) {
        if (vet[i] > n && (*menorMaior == -1 || vet[i] < *menorMaior)) {
            *menorMaior = vet[i]; // Encontrou um valor maior que n menor do que o atual menorMaior
        }

        if (vet[i] < n && (*maiorMenor == -1 || vet[i] > *maiorMenor)) {
            *maiorMenor = vet[i]; // Encontrou um valor menor que n maior do que o atual maiorMenor
        }
    }
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float vet[tamanho];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &vet[i]);
    }

    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    float menorMaior, maiorMenor;
    encontrarValores(vet, tamanho, n, &menorMaior, &maiorMenor);

    if (menorMaior != -1) {
        printf("Menor valor maior que %d: %.2f\n", n, menorMaior);
    } else {
        printf("Nao ha valor maior que %d no vetor.\n", n);
    }

    if (maiorMenor != -1) {
        printf("Maior valor menor que %d: %.2f\n", n, maiorMenor);
    } else {
        printf("Nao ha valor menor que %d no vetor.\n", n);
    }

    return 0;
}

