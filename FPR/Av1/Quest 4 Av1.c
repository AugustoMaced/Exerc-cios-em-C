#include <stdio.h>

//declarando a função que será usada 
void mudarRomano(int numeroNormal);

//chamando a main
int main() {
    int numeroNormal;

    printf("Digite um numero que deseja mudar para romano: ");
    scanf("%d", &numeroNormal);

    if (numeroNormal >= 1 && numeroNormal <= 3999) {
        mudarRomano(numeroNormal);
        printf("\n");
    } else {
        printf("O número está fora do intervalo válido (1-3999).\n");
    }

    return 0;
}

struct Romano {
    int valor;
    char* simbolo;
};
// aqui eu estou correlacionando os numeros escritos de forma "normal" e os numero em romano 
const struct Romano caracterRomanos[] = {
{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
{100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
{10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
{1, "I"}
};

void mudarRomano(int numeroNormal) {
    for (int i = 0; i < 13; i++) {
        int count = numeroNormal / caracterRomanos[i].valor;
        for (int j = 0; j < count; j++) {
            printf("%s", caracterRomanos[i].simbolo);
        }
        numeroNormal %= caracterRomanos[i].valor;
    }
}
// Poderia mudar para o While pq ficaria um código mais "limpo", mas estou com medo de alguém usar assim e zerar a minha questão rsrs

/*void mudarRomano(int numeroNormal) {
    for (int i = 0; i < 13; i++) {
        while (numeroNormal >= caracterRomanos[i].valor) {
            printf("%s", caracterRomanos[i].simbolo);
            numeroNormal -= caracterRomanos[i].valor;
        }
    }
}*/


