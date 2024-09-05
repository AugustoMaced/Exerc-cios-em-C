
#include <stdio.h>
#define NUM_CHARS 256

int verifica_strings(char *s1, char *s2) {
    int contador1[NUM_CHARS] = {0};
    int contador2[NUM_CHARS] = {0};
    int i;

    for (i = 0; s1[i] && s2[i]; i++) {
        contador1[s1[i]]++;
        contador2[s2[i]]++;
    }

    if (s1[i] || s2[i])
        return 0;

    for (i = 0; i < NUM_CHARS; i++)
        if (contador1[i] != contador2[i])
            return 0;

    return 1;
}

int main() {
    char s1[] = "Augusto";
    char s2[] = "Marcos";
    printf("%d\n", verifica_strings(s1, s2));  // Deve imprimir: 1
    return 0;
}
