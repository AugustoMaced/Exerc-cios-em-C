#include <stdio.h>

int mesmoSentido(float vetor[], int tamanho) {
    int i, j;

    // Percorre o vetor do início para o fim e do fim para o início
    for (i = 0, j = tamanho - 1; i < tamanho; i++, j--) {
        if (vetor[i] != vetor[j]) {
            return 0; // Os elementos são diferentes
        }
    }

    return 1; // Os elementos são os mesmos
}

int main() {
    float vetor[] = {1.2, 3.4, 5.6, 7.8, 5.6, 3.4, 1.2}; // Exemplo de vetor com elementos iguais nos extremos

    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    if (mesmoSentido(vetor, tamanho)) {
        printf("Os elementos do vetor são os mesmos quando percorridos do início para o fim ou do fim para o início.\n");
    } else {
        printf("Os elementos do vetor são diferentes quando percorridos do início para o fim ou do fim para o início.\n");
    }

    return 0;
}

