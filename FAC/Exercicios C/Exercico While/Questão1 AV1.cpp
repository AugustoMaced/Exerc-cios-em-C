/*Fazer um programa que, dadas duas datas (ambas
com dia, m�s e ano), determine a quantidade de dias
entre elas.
Observa��es:
1. Podem considerar (sem necessidade de
valida��o) que a primeira data n�o �
superior � segunda;
2. Para facilitar a resolu��o, considerem que
todos os meses possuem 30 dias e,
consequentemente, cada ano possui 360
dias;
3. Ignorem o fato do ano ser ou n�o bissexto;
todos ter�o 360 dias!*/

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
	

