/*Jo�ozinho investiu Q reais em
uma aplica��o com rendimento fixo de R% ao
m�s. Pede-se a implementa��o de um
programa que calcule o valor (e exiba-o)
dispon�vel na conta de Jo�ozinho ap�s A anos
de investimento.*/

#include <stdio.h>

int main (){
	
	float reais, rendFix;
	int anos, i , meses;
	
	printf("Ponha a quaantidade do investimento em Reais");
	scanf("%f", &reais);
	
	printf("Ponha o rendimento fixo mensal da sua aplicacao");
	scanf("%f", &rendFix);
	
	printf("quantos anos ira investir");
	scanf ("%d", &anos);
	
	
		meses = anos*12;
	
		rendFix /= 100;
	

		for (i=1; i<=meses; i++)
		{
			
			reais*=(1 + rendFix);
		
		}
	
		printf("\n\nO valor final : %.2f", reais);
	
}
