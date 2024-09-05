#include <stdio.h>

int escreverPorExtenso(int n) {
    // Verifica se o número está no intervalo permitido
    if (n < 1 || n > 999) {
        return 0;
    }

    // Arrays para armazenar as palavras correspondentes aos números
    char *unidades[] = {"", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
    char *dezenas[] = {"", "", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
    char *centenas[] = {"", "cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"};

    // Variáveis auxiliares para armazenar as partes do número
    int centena, dezena, unidade;
    centena = n / 100;
    dezena = (n % 100) / 10;
    unidade = (n % 100) % 10;

    // Verifica se o número possui centenas
    if (centena > 0) {
        printf("%s ", centenas[centena]);
    }

    // Verifica se o número possui dezenas especiais (10 a 19)
    if (dezena == 1) {
        printf("%s ", unidades[dezena * 10 + unidade]);
    } else {
        // Verifica se o número possui dezenas
        if (dezena > 0) {
            printf("%s ", dezenas[dezena]);
        }

        // Verifica se o número possui unidades
        if (unidade > 0) {
            printf("%s ", unidades[unidade]);
        }
    }

    // Imprime o número por extenso
    printf("\n");

    return 1;
}

int main() {
    int numero;
    printf("Digite um número entre 1 e 999: ");
    scanf("%d", &numero);

    if (escreverPorExtenso(numero)) {
        printf("Retorno: 1\n");
    } else {
        printf("Número inválido. Retorno: 0\n");
    }

    return 0;
}

