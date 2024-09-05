#include <stdio.h>

//Prototipo
int ContAlgarismo (int n);

//chamando a main
void main (){

int numero, QuantAlgarismo;

	//solicitando o numero inteiro 	
	printf("insira o numero inteiro solicitado : ");	
	scanf ("%d", &numero);
	
	QuantAlgarismo = ContAlgarismo (numero);
	
	printf("o numero %d tem %d algarismos", numero, QuantAlgarismo); 
	
	
}

//chamando a função contador de algarismo
int ContAlgarismo (int n){
	
	int contador = 0;
	
	if (n == 0){
		
		return 1 ;
	}
	
	while (n!= 0){
		
	n /= 10 ; //dividindo o numero por 10 para remover o ultimo algarismo 
	contador++ ;	// acrescentando um para contador 
	}
	
	return contador ; 
	
}
