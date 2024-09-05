#include <stdio.h>

//Dexlarando o prototipo
void criarVetorB(int vetA[], int tamanhoA, int vetB[]);

//chamando a main
int main() {
    int vetA[] = {9, 5, 2, 7, 3, 5};
    int tamanhoA = 6;
    int vetB[tamanhoA];

    criarVetorB(vetA, tamanhoA, vetB);

    printf("vetA: ");
    for (int i = 0; i < tamanhoA; i++) {
        printf("%d ", vetA[i]);
    }

    printf("\nvetB: ");
    for (int i = 0; i < tamanhoA; i++) {
        printf("%d ", vetB[i]);
    }

    return 0;
}
// chamando a função q irá criar o segundo vetor 
void criarVetorB(int vetA[], int tamanhoA, int vetB[]) {
    // Variáveis auxiliares
    int i, j, max, posicaoMax;

    // Copiar vetA para vetB
    for (i = 0; i < tamanhoA; i++) {
        vetB[i] = vetA[i];
    }

    // Encontrar o maior elemento de vetA e colocá-lo na primeira posição de vetB
    max = vetB[0];
    posicaoMax = 0;
    for (i = 1; i < tamanhoA; i++) {
        if (vetB[i] > max) {
            max = vetB[i];
            posicaoMax = i;
        }
    }
    vetB[posicaoMax] = vetB[0];
    vetB[0] = max;

    // Localizar os demais maiores elementos e colocá-los nas posições seguintes de vetB
    for (i = 1; i < tamanhoA; i++) {
        max = vetB[i];
        posicaoMax = i;
        for (j = i + 1; j < tamanhoA; j++) {
            if (vetB[j] > max) {
                max = vetB[j];
                posicaoMax = j;
            }
        }
        vetB[posicaoMax] = vetB[i];
        vetB[i] = max;
    }
}


