/******************************************************************************

Posições maior para o menor

*******************************************************************************/
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

int main()
{

	int i, j, troca, vetor[5];
	
	printf("Digite os numeros:\n");
	
	//Preenche e lê os vetores
	for( i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
	}
	
    for(i=0; i < 5; i++){
        for(j=0; j < 5; j++){
            if(vetor[i] > vetor[j]){
                troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
        }
    }
    
    	for( i = 0; i < 5; i++){
		printf("%d|", vetor[i]);
	}

return 0;
}
