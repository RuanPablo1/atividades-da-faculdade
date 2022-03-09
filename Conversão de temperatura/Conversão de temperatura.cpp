/******************************************************************************

Conversão de temperatura

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{

int op = 0;
float tc, tk, tf, res = 0;

printf("Para qual temperatura deseja converter?\n\n");

printf("1- Celsius para Kelvin\n");
printf("2- Celsius para Fahrenheit\n");
printf("3- Kelvin para Celsius\n");
printf("4- Kelvin para Fahrenheit\n");
printf("5- Fahrenheit para Celsius\n");
printf("6- Fahrenheit para Kelvin\n\n");

printf("Opcao: ");
scanf("%d", &op);
printf("\n");

if(op == 1){
printf("Digite o valor de Celsius: ");
scanf("%f", &tc);
res = (tc-273);
}else

if(op == 2){
printf("Digite o valor de Celsius: ");
scanf("%f", &tc);
res = (tc*9/5)+32;
}else

if(op == 3){
printf("Digite o valor de Kelvin: ");
scanf("%f", &tk);
res = (tk+273);
}else

if(op == 4){
printf("Digite o valor de Kelvin: ");
scanf("%f", &tk);
res = (tk-273)*9/5+32;
}else

if(op == 5){
printf("Digite o valor de Fahrenheit :");
scanf("%f", &tf);
res = (tf-32)*5/9;
}else

if(op == 6){
printf("Digite o valor de Fahrenheit: ");
scanf("%f", &tf);
res = (tf-32)*5/9+273;
}

else{
printf("Opcao invalida!\n\n");
}

printf("O resultado e: %f",res,".");

return 0;

}

