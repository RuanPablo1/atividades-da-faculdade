/******************************************************************************

C�lculo do desconto do plano de sa�de

*******************************************************************************/
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

int main()
{

float salario, descontomenor, descontomaior, liquido;
int dependentesmenor,dependentesmaior;
	
	printf("Digite aqui o seu salario: ");
	scanf("%f",&salario);
	
	
	printf("\nDigite a quantidade de dependentes menores de 18 anos que voce tem: ");
	scanf("%d",&dependentesmenor);
	
	
	printf("\nDigite a quantidade de dependentes entre 18 e 24 anos que voce tem: ");
	scanf("%d",&dependentesmaior);
	
	//Desconta os 3% do sal�rio do funcion�rio	
	liquido = salario - (salario * 0.03);
			
	//Desconta o valor dos dependentes at� 17 anos
	descontomenor = (salario*0.015)*dependentesmenor;		
	printf("\nO valor de desconto com seus dependentes menores fica %0.2f \n",descontomenor);
			
	//Desconta o valor dos dependentes entre 18 e 24 anos
	descontomaior = (salario*0.025)*dependentesmaior;			
	printf("\nO valor de desconto com seus dependentes maiores fica %0.2f \n",descontomaior);
	
	//D� o sal�rio l�quido final
	liquido = (liquido - descontomenor - descontomaior);
		
	printf("\nO valor do seu salario com desconto e: %0.2f \n", liquido);
		
	
	return 0;
}

