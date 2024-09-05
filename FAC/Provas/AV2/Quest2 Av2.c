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

//chamando a função que vai comparar
int comparar(int numUsuario) {
    
    int ultimoDigito, Proxdigito; 
    
    ultimoDigito = numUsuario % 10; // Último número
    numUsuario /= 10; // Remover o último número

    while (numUsuario > 0) {
        Proxdigito = numUsuario % 10; // Próximo dígito do número
        numUsuario /= 10; // Remover o próximo número

        if (Proxdigito > ultimoDigito) {
            return 0; //não estão ordenados crescentemente
        }

        ultimoDigito = Proxdigito;
    }

    return 1; //estão ordenados crescentemente
}

