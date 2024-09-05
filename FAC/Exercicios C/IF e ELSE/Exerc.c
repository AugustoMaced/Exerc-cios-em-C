#include <stdio.h>

int main() {
    int valor;

    printf("Digite o valor em centavos: ");
    scanf("%d", &valor);

    int qtd_100 = valor / 100;
    valor = valor % 100;

    int qtd_50 = valor / 50;
    valor = valor % 50;

    int qtd_20 = valor / 20;
    valor = valor % 20;

    int qtd_10 = valor / 10;
    valor = valor % 10;

    int qtd_5 = valor / 5;
    valor = valor % 5;

    int qtd_2 = valor / 2;
    valor = valor % 2;

    int qtd_1 = valor;

    printf("Decomposição:\n");
    if (qtd_100 > 0) {
        printf("%d nota(s)/moeda(s) de 100\n", qtd_100);
    }
    if (qtd_50 > 0) {
        printf("%d nota(s)/moeda(s) de 50\n", qtd_50);
    }
    if (qtd_20 > 0) {
        printf("%d nota(s)/moeda(s) de 20\n", qtd_20);
    }
    if (qtd_10 > 0) {
        printf("%d nota(s)/moeda(s) de 10\n", qtd_10);
    }
    if (qtd_5 > 0) {
        printf("%d nota(s)/moeda(s) de 5\n", qtd_5);
    }
    if (qtd_2 > 0) {
        printf("%d nota(s)/moeda(s) de 2\n", qtd_2);
    }
    if (qtd_1 > 0) {
        printf("%d nota(s)/moeda(s) de 1\n", qtd_1);
    }

    return 0;
}


