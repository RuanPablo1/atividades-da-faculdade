/******************************************************************************

JUROS COMPOSTO

*******************************************************************************/
#include <cstdio>
#include <cmath>
#include <cstring>

int main()
{

float conta, mont, juros = 0;
int loop, meses = 0;

printf("Digite o valor inicial\n");
scanf("%f", &conta);
printf("\n");
printf("Digite a taxa de juros\n");
scanf("%f", &juros);
printf("\n");
printf("Digite o tempo em meses\n");
scanf("%d", &meses);
printf("\n");


juros = juros/100;
mont = conta*(1+juros);

while(loop==0 || loop<meses){
loop = loop+1;
printf("Montante: %f\n", mont);
mont = mont+(mont*juros);
}

return 0;
}

