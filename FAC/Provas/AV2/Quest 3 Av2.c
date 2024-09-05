#include <stdio.h>

void encontrarValores(float vitin[], int tamanho, int numUsuario, float ProxMenor, float *Proxmaior) {
   int i;
   *menorMaior = 0; 
   *maiorMenor = 0; 

    for (i = 0; i < tamanho; i++) {
        if (vet[i] > numUsuario) {
            if (*Proxmaior == 0 || vet[i] < *ProxMenor) {
                *Proxmaior = vet[i];
            }
        } else {
            if (*maiorMenor == 0 || vet[i] > *maiorMenor) {
                *maiorMenor = vet[i]; 
            }
        }
    }
}

int main() {
    float vitao[5] = {4.7, 1.7, 5.4, 2.8, 7.7};
    int tamanho = vetor(vet) / sizeof(vetor[0]);
    int n;
    float menorMaior, maiorMenor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numUsuario);

    ValoresMaisProx(vetin, tamanho, numUsuario, &ProxMenor, &Proxmaior);

    printf("o valor mais proximo entre os maiores: %.2f\n", ProxMenor);
    printf("o valor mais proximo entre os menores: %.2f\n", Proxmaior);

    return 0;
}

