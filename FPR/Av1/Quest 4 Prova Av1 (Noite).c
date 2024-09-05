/*
Questão 04:
  Desenvolver uma função recursiva que, dados um 
  vetor com quant inteiros e dois números num1 e num2, 
  calcule a média dos valores do vetor que estão no 
  intervalo de num1 a num2, inclusive
*/


#include <stdio.h>
#define QUANT 5

float calcularMedia(float vetor[], int num1, int num2, int count, float sum);

void main(){
  float vetor[QUANT] = {1.0,2.0,3.0,4.0,5.0}, media;
  int num1=1, num2=3;
  
  media = calcularMedia(vetor,num1,num2, 0, 0.0);

  printf("%f", media);
}

float calcularMedia(float vetor[], int num1, int num2, int count, float sum){
  if(num1 > num2){
    return sum / count;
  }
  else{
    return calcularMedia(vetor, num1 + 1, num2, count+1, sum + vetor[num1]); 
  }
}

