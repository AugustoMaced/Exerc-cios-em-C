#include <stdio.h>

int mesmoSentido(float vetor[], int tamanho) {
    int i, j;

    // Percorre o vetor do in�cio para o fim e do fim para o in�cio
    for (i = 0, j = tamanho - 1; i < tamanho; i++, j--) {
        if (vetor[i] != vetor[j]) {
            return 0; // Os elementos s�o diferentes
        }
    }

    return 1; // Os elementos s�o os mesmos
}

int main() {
    float vetor[] = {1.2, 3.4, 5.6, 7.8, 5.6, 3.4, 1.2}; // Exemplo de vetor com elementos iguais nos extremos

    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    if (mesmoSentido(vetor, tamanho)) {
        printf("Os elementos do vetor s�o os mesmos quando percorridos do in�cio para o fim ou do fim para o in�cio.\n");
    } else {
        printf("Os elementos do vetor s�o diferentes quando percorridos do in�cio para o fim ou do fim para o in�cio.\n");
    }

    return 0;
}

