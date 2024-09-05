#include <stdio.h>

void apresentSequencia (int n) {
    // Verifica se o valor de n � v�lido
    if (n < 3) {
        printf("O valor de n deve ser no m�nimo 3.\n");
        return;
    }
    
    int i, j, k;
    
    // Loop para o primeiro valor da sequ�ncia
    for (i = 1; i <= n - 2; i++) {
        // Loop para o segundo valor da sequ�ncia
        for (j = i + 1; j <= n - 1; j++) {
            // Loop para o terceiro valor da sequ�ncia
            for (k = j + 1; k <= n; k++) {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
}

void main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("Combinacoes possiveis:\n");
    apresentSequencia(numero);
    
}
