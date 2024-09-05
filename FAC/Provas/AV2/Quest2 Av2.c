#include <stdio.h>

//declarando o prototipo
int comparar(int numUsuario);

//Chamando a main
int main() {
    int numUsuario, resultado;

    printf("Digite o numero desejado: ");
    scanf("%d", &numUsuario);

    resultado = comparar(numUsuario);

    if (resultado) {
        printf("Os algarismos estao ordenados crescentemente.\n");
    } else {
        printf("Os algarismos nao estao ordenados crescentemente.\n");
    }

    return 0;
}

//chamando a fun��o que vai comparar
int comparar(int numUsuario) {
    
    int ultimoDigito, Proxdigito; 
    
    ultimoDigito = numUsuario % 10; // �ltimo n�mero
    numUsuario /= 10; // Remover o �ltimo n�mero

    while (numUsuario > 0) {
        Proxdigito = numUsuario % 10; // Pr�ximo d�gito do n�mero
        numUsuario /= 10; // Remover o pr�ximo n�mero

        if (Proxdigito > ultimoDigito) {
            return 0; //n�o est�o ordenados crescentemente
        }

        ultimoDigito = Proxdigito;
    }

    return 1; //est�o ordenados crescentemente
}

