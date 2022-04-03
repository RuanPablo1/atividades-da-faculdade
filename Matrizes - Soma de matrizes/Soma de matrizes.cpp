/******************************************************************************

Soma de matrizes - Matrizes 3x5

*******************************************************************************/
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

int main()
{

int matriz1[3][5], matriz2[3][5], resultado[3][5], L, C;

printf("Digite os valores da primeira matriz: \n");

//Lê a primeira matriz
for(L = 0; L < 3; L++){
	for(C = 0; C < 5; C++){
		scanf("%d", &matriz1[L][C]);
	}
}

printf("\nDigite os valores da segunda matriz: \n");

//Lê a segunda matriz
for(L = 0; L < 3; L++){
	for(C = 0; C < 5; C++){
		scanf("%d", &matriz2[L][C]);
	}
}

printf("\nO resultado e: \n\n");

//Soma e mostra o resultado
for(L = 0; L < 3; L++){
	for(C = 0; C < 5; C++){
		resultado[L][C] = matriz1[L][C] + matriz2[L][C];
		printf("%d|", resultado[L][C]);
	}
	printf("\n");
}

return 0;
}
