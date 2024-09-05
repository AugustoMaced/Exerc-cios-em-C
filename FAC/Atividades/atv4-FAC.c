#include <stdio.h>

int converterBase(int numero, int base, int *resultado) {
    int numeroConvertido = 0;
    int digito, fator = 1;

    // Verifica se a base está dentro do intervalo permitido
    if (base < 2 || base > 8) {
        return 0;
    }

    // Verifica se o número é negativo
    if (numero < 0) {
        return 0;
    }

    // Realiza a conversão para a base especificada
    while (numero != 0) {
        digito = numero % base;
        if (digito >= base) {
            return 0;
        }
        numeroConvertido += digito * fator;
        fator *= 10;
        numero /= base;
    }

    *resultado = numeroConvertido;
    return 1;
}

int main() {
    int numero, base, resultado;

    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

    for (base = 2; base <= 8; base++) {
        int conversaoBemSucedida = converterBase(numero, base, &resultado);
        if (conversaoBemSucedida == 0) {
            printf("Erro: Conversao nao foi possivel.\n");
        } else {
            printf("Numero convertido: %d\n", resultado);
        }
    }

    return 0;
}
