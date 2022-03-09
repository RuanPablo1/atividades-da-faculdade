/******************************************************************************

Equação de Bháskara

*******************************************************************************/
#include <cstdio>
#include <cmath>
#include <cstring>

main()
{

float A, B, C, delta, x1, x2;


printf("Digite o valor de A: ");
scanf("%f", &A);
printf("Digite o valor de B: ");
scanf("%f", &B);
printf("Digite o valor C: ");
scanf("%f", &C);
printf("\n");

delta = (B*B)-4*A*C;

if(delta>=0){
printf("O delta e igual a: %f\n\n", delta);
}

else{
printf("\n");	
printf("Delta invalido!\n\n");
}


printf("Calculando as raizes de delta...\n\n");


x1 = (-B+sqrt(delta))/(2*A);
x2 = (-B-sqrt(delta))/(2*A);

printf("O x1 é igual a: %f\n", x1);
printf("O x2 é igual a: %f\n", x2);


return 0;
}
