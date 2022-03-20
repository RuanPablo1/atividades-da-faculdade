/******************************************************************************

Construa um programa que preenche um vetor de inteiros de 100 números, colocando 0 nas posições par e 1 ímpar.

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
