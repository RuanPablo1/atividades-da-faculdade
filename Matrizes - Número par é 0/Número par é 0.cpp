/******************************************************************************

N�mero par � 0

*******************************************************************************/
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

int main()
{

int matriz[5][5], L, C;

printf("Digite os valores da matriz: \n");

//L� a matriz
for(L = 0; L < 5; L++){
	for(C = 0; C < 5; C++){
		scanf("%d", &matriz[L][C]);
		
	}
}

//Transforma os pares em 0
for(L=0; L < 5; L++){
    for(C = 0; C <5; C++){
        if(matriz[L][C]%2 == 0){
        matriz[L][C] = 0;
        }
        printf("%2d|", matriz[L][C]);
    }
    printf("\n");
}

return 0;
}
