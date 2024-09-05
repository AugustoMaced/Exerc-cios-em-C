/*Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.
*/

#include <stdio.h>

int main () {

	
char operacao;
float metros, decimetros, centimetros, milimetros;

printf ("insira o valor desejado em metros :");
scanf ("%f", &metros);


printf ("insira a orperacao desejada : \n[d] decimetros \n[c] centimetros \n[m]milimetros : ");
scanf (" %c", &operacao);
Fflush("stdin");


	decimetros = metros * 10 ;
	centimetros = metros * 100 ;
	milimetros = metros * 1000 ;


switch (operacao){
	
	case'd':
		
		printf("o valor da operacao de metros para decimetros: %.2f", decimetros);
		break;
		
	case 'c':
		
		printf("o valor da operacao de metros para centimetros : %.2f", centimetros);
		break;
			
	case 'm':
		
		printf("o valor da operacao de metros para centimetros : %.2f", milimetros);
		break;
		
		}
}
