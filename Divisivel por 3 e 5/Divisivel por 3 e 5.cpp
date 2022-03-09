/******************************************************************************

Resto da divisão

*******************************************************************************/
#include <cstdio>
#include <cmath>
#include <cstring>

int main()
{

int dividendo, resto3, resto5 = 0;

printf("Digite um numero para saber se ele e divisor de 3 e 5: ");
scanf("%d", &dividendo);

resto3 = dividendo%3;
resto5 = dividendo%5;

if(resto3==0 && resto5==0){
	printf("\nO numero %d e divisivel por 3 e 5.\n", dividendo);
}

else{
	printf("\nO numero %d NAO e divisivel por 3 e 5.\n", dividendo);
}

return 0;
}
