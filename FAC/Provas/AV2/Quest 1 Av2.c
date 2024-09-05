/*Desenvolver uma função que, dado um número real
n, arredonde-o para o valor inteiro mais próximo.*/

#include <stdio.h>

//Declarando Prótotipo
int arredondando(float numUsuario);

//chamando a main
int main() {
    float numUsuario;
    int resultado;

    printf("Digite um numero real: ");
    scanf("%f", &numUsuario);

    resultado = arredondando(numUsuario);
    printf("Resultado: %d\n", resultado);

    return 0;
}

//chamando a função q vai arredondar 
int arredondando(float numUsuario) {
    int numInt = (int)numUsuario; // Parte inteira de numUsuario

    
    if (numUsuario - numInt >= 0.5)
        return numInt + 1; // Arredondando para o inteiro mais proximo
    else
        return numInt; // Arredondando para o inteiro mais proximo
}


