#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CNPJ_TAMANHO 14

// Função para validar dígitos verificadores
int validarDigitos(char *cnpj) {
    int tamanho = strlen(cnpj);
    int i, j, soma1, soma2, restoOperador;
    char armaz;

    soma1 = 0;
    for (i = 0, j = tamanho - 1; i < tamanho / 2; i++, j--) {
      armaz = cnpj[j];
        soma1 += (armaz - 48) * (i + 1);
    }

  restoOperador = soma1 % 11;
    if (restoOperador < 2) {
      restoOperador = 0;
    } else {
          restoOperador = 11 - restoOperador;
    }

  armaz = cnpj[tamanho - 2];
    if (armaz != (restoOperador + 48)) {
        return 0;
    }

    soma2 = 0;
    for (i = 0, j = tamanho - 2; i < tamanho / 2; i++, j--) {
      armaz = cnpj[j];
        soma2 += (armaz - 48) * (i + 2);
    }

  restoOperador = soma2% 11;
    if (restoOperador < 2) {
      restoOperador = 0;
    } else {
      restoOperador = 11 - restoOperador;
    }

  armaz = cnpj[tamanho - 1];
    if (armaz != (restoOperador + 48)) {
        return 0;
    }

    return 1;
}

void parse_cnpj(char* cnpj) {
    char inscricao[9];
    char filial[5];
    int matriz;
    char verificador[3];

    strncpy(inscricao, cnpj, 8);
    inscricao[8] = '\0';

    strncpy(filial, cnpj + 9, 4);
    filial[4] = '\0';

    matriz = strcmp(filial, "0001") == 0 ? 1 : 0;

    strncpy(verificador, cnpj + 14, 2);
    verificador[2] = '\0';

    printf("Inscrição: %s\n", inscricao);
    printf("Filial: %s\n", filial);
    printf("É matriz: %d\n", matriz);
    printf("Dígitos verificadores: %s\n", verificador);
}

int main() {
    char cnpj[CNPJ_TAMANHO + 3];
    int Valido;

    printf("Digite o CNPJ: ");
    scanf("%s", cnpj);

    if (strlen(cnpj) != CNPJ_TAMANHO + 2) {
        printf("CNPJ inválido. Digite exatamente 14 dígitos e os dois dígitos verificadores.\n");
        return 1;
    }

    Valido = validarDigitos(cnpj);

    if (Valido) {
        printf("CNPJ válido.\n");
        parse_cnpj(cnpj); // Chama a função para analisar o CNPJ
    } else {
        printf("CNPJ inválido.\n");
    }

    return 0;
}
