#include <stdio.h>
//declarando o prototipo
int comparar(int numUsuario);
//chamando a main
int main() {
    int numUsuario, resultado;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numUsuario);

    resultado = comparar(numUsuario);

    if (resultado) {
        printf("Os algarismos estao ordenados crescentemente.\n");
    } else {
        printf("Os algarismos nao estao ordenados crescentemente.\n");
    }

    return 0;
}

int comparar(int numUsuario) {
	int proximoDigito;
    int ultimoDigito = numUsuario % 10; // �ltimo d�gito
    numUsuario /= 10; // Remover o �ltimo d�gito

    for (; numUsuario > 0; numUsuario /= 10) {
        proximoDigito = numUsuario % 10; // Pr�ximo d�gito

        if (proximoDigito > ultimoDigito) {
            return 0; // N�o est�o ordenados crescentemente
        }

        ultimoDigito = proximoDigito;
    }

    return 1; // Est�o ordenados crescentemente
}

