/******************************************************************************

Construa um programa que preenche um vetor de inteiros de 100 n�meros, colocando 0 nas posi��es par e 1 �mpar.

*******************************************************************************/
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

int main()
{
	int i, vetor[100];
	
	for (i = 0; i < 100; i++){
	vetor[i] = (i%2);
	
	printf("vetor[%d]\n");
}
	

return 0;
}
