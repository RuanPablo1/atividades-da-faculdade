/******************************************************************************

Diagonal principal e secundária da matriz

*******************************************************************************/
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

int main()
{

int matriz[5][5], L, C;

printf("Digite os valores da primeira matriz: \n");

//Lê a matriz
for(L = 0; L < 5; L++){
	for(C = 0; C < 5; C++){
		scanf("%d", &matriz[L][C]);
	}
}


//Printa a matriz
printf("\nMatriz completa: \n\n");
for(L = 0; L < 5; L++){
	for(C = 0; C < 5; C++){
		printf("%2d ", matriz[L][C]);
	}
	printf("\n");
}


//Printa a diagonal principal
printf("\nDiagonal principal:\n\n");
for(L = 0; L < 5; L++){
	for(C = 0; C < 5; C++){
		if(L==C){
			printf("%d", matriz[L][C]);
		}else
			printf("   ");
	}
	printf("\n");
}


//Printa a diagonal secundária
printf("\nDiagonal secundaria:\n\n");
for(L = 0; L < 5; L++){
	printf("%d|", matriz[L][C - 1 - L]);
}

printf("\n");

return 0;
}
