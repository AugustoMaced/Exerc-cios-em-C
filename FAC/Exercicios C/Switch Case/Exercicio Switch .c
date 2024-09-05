# include <stdio.h>

void main () {
	
	int  horas, minutos , segundos;
	char  operacao;
	
	printf("insira o valor desejado em segundos\n");
	scanf("%d", &segundos);
	
	printf ("escolha a operacao desejada : \n [/] horas \n [*] minutos \n [+] segundos\n");
	scanf ("%d", &operacao);
	
	horas = segundos * 3600;
	minutos= segundos * 60;
	segundos = segundos;
	
	switch(operacao){
		
		case'/':
			
			printf("o valor da operacao de segundos para horas eh : %d", horas);
			break;
					
		case'*':
			
			printf("o valor da operacao de segundos para minutos eh : %d", minutos);
			break;
			
		case'+':
		
			printf ("o valor da operacao de segundos para segundos nao mudou : %d", segundos);
			break;
			
		default :
			
			printf("operacao invalida"); 	
	} 
}
