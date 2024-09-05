#include <stdio.h>

void exibeMultiplos(int a, int b, int n);

void main (){
	
	int a, b, n, resultado;
	
	printf("insira o valor desejado de A : ", a);
	scanf("%d", &a);	
	
	printf("insira o valor desejado de B : ", b);
	scanf("%d", &b);	
	
	printf("insira o multiplo desejado : ", n);
	scanf("%d", &n);	
	
	exibeMultiplos(a, b, n);
	
}

void exibeMultiplos(int a, int b, int n) {
	
	int i;
	
	for (i=a;i<=b;i++){
		if(i%n==0){
			printf("%d ", i);
		}
		
	}
}
