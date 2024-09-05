/*O conceito de matriz simétrica baseia-se na verificação
se o elemento aij é igual a aji, para todos os possíveis
valores de i e j. Desta forma, podemos afirmar que a
simetria é observada em relação à diagonal principal.
Neste contexto, pede-se a implementação de uma
função que, dadas uma matriz M e a sua ordem1 n,
determine se M é simétrica em relação à diagonal
secundária (e retorne 1 se for ou 0, caso contrário).*/
#include <stdio.h>

//declarando a função
int simetrico(int n, int Matr[n][n]);
// estou chamando a main já inicializando ela
int main() {
  //obs: essa matriz é a que foi utilizada como exemplo no quadro
    int M[3][3] = {{1, 2, 3}, 
                  {2, 4, 8}, 
                  {3, 8, 7}};
    printf("%d\n", simetrico(3, M)); // Imprime 0
    return 0;
}

//usei como exeplo exerciocios feitos em aula 
int simetrico(int n, int Matr[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (Matr[i][j] != Matr[n-j-1][n-i-1]) {
                return 0;
            }
        }
    }
    return 1;
}
/*int simetrica(int matriz[100][100])//E' bom que voce passe parametros para esta funcao
{
    for (i=0; i<n; i++)
         for (j=0; j<n; j++){
             if (matriz[i][j] != matriz[j][i])
                return -1; //este e' um valor para seu proprio controle, o valor do controle e' independente.
             else if (matriz[i][j] == matriz[j][i])
                return 1;
                }

}*/
