/******************************************************************************

Posições maior pro menor

*******************************************************************************/
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

int main()
{

	int i, maior, menor, posMaior, posMenor, vetor[20];
	
	printf("Digite os numeros:\n");
	
	//Preenche e lê os vetores
	for( i = 0; i<20; i++){
		scanf("%d", &vetor[i]);
	}
	
	//Maior valor
	maior = vetor[0];
    posMaior = 0;
    
    for (i = 1; i < 20; i++) {
        if (vetor[i] > maior) {
            maior    = vetor[i];
            posMaior = i;
        }
    }
 
 	//Menor valor
    menor = vetor[0];
    posMenor = 0;
    
    for (i = 1; i < 20; i++) {
        if (vetor[i] < menor) {
            menor    = vetor[i];
            posMenor = i;
        }
    }
 	
 	//Printa os vetores
    printf("\nVetor: ");
    for (i = 0; i < 20; i++) {
        printf("%i ", vetor[i]);
    }
 
    printf("\n\nMaior valor: %i", maior);
    printf("\n\nMenor valor: %i", menor);

return 0;
}
