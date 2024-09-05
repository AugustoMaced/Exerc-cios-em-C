#include <stdio.h>

int main() {
    int binario, decimal= 0, expoente = 0, valido = 1, numero, i, temp;

    printf("Digite um numero binario: ");
    scanf("%d", &binario);
	
	temp = binario;
     numero = temp % 10;
    
    while (temp > 0) {
        
        if ( numero != 0 &&  numero != 1) {
            valido = 0;
            break;
        }
        decimal += numero << expoente;
        expoente++;
        temp /= 10;
    }

    if (valido) {
        printf("Decimal: %d\n", decimal);
    } else {
        printf("Valor nao representa um numero binario!\n");
    }

    return 0;
}
