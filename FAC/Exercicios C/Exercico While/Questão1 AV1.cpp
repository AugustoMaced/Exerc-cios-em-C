/*Fazer um programa que, dadas duas datas (ambas
com dia, mês e ano), determine a quantidade de dias
entre elas.
Observações:
1. Podem considerar (sem necessidade de
validação) que a primeira data não é
superior à segunda;
2. Para facilitar a resolução, considerem que
todos os meses possuem 30 dias e,
consequentemente, cada ano possui 360
dias;
3. Ignorem o fato do ano ser ou não bissexto;
todos terão 360 dias!*/

#include <stdio.h>

void main ()
{
	int dia1, dia2, mes1, mes2, ano1, ano2, data1, data2;
	
	printf (" insira a primeira data desejada (dd/mm/aaaa)");
	scanf("%d %d %d", &dia1 &&mes1 &&ano1);
	
	printf ("insira a segunda data desejada (dd/mm//aaaa)");
	scanf("%d %d %d", &dia2 &&mes2 &&ano2);
	
	data1 = dia1 + mes1*30 + ano1*360;
	data2 = dia2 + mes2*30 + ano1*360;
	
	
	if (data1>data2){
		
		data1 = (data1-data2);
		
		printf ("a diferenca das datas solicitadas:\n %d", data1);
		
	}
		else{
		  data2	= (data2-data1);
			
			printf ("a diferenca das datas solicitadas:\n %d", data2);
		}
		

    return 0;
	}
	

