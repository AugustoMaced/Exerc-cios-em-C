#include <stdio.h>

void func(int vet1[], int vet2[], int tam, int vetR[]);
void exibirVetor(int v[], int tm);

int main()
{
    int vet1[3] = {1, 2, 3}, vet2[3] = {3, 2, 9},vetR[4] = {0}, tam = 3;
    func(vet1, vet2, tam, vetR);
    exibirVetor(vetR, (tam + 1));
    return 0;
}

void func(int vet1[], int vet2[], int tam, int vetR[])
{
    
    int result, i;
    for (i = 0; i < tam; tam--)
    {
        result = vet1[tam - 1] + vet2[tam - 1];
        if (result > 10)
        {
            vetR[(tam + 1) - 2]++;
            vetR[tam  += (result % 10)];
        }
        else
        {
            vetR[tam] += result;
        }
    }
}

void exibirVetor(int v[], int tm)
{
    int i;
    for (i = 0; i < tm; i++)
    {
        printf(" %d ", v[i]);
    }
}

