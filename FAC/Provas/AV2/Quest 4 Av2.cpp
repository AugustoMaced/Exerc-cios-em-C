#include <stdio.h>

void somaVetores(int vetin1[], int vetin2[], int Gutao, int resultado[]) {
    int vaiUm = 0;
    for (int i = Gutao - 1; i >= 0; i--) {
        int soma = vetin1[i] + vetin2[i] + vaiUm;
        resultado[i + 1] = soma % 10;
        vaiUm = soma / 10;
    }
    resultado[0] = vaiUm;
}

int main() {
    int vetin1[] = {7, 2, 3};
    int vetin2[] = {4, 5, 6};
    int Gutao = sizeof(vetin1) / sizeof(vetin1[0]);
    int resultado[Gutao + 1];
    
    somaVetores(vetin1, vetin2, Gutao, resultado);
    	for (int i = 0; i <= Gutao; i++) printf("%d", resultado[i]);
    printf("\n");
    return 0;
}
