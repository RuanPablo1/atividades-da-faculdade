/******************************************************************************

MATRIZ 20X20

*******************************************************************************/
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <time.h>
int main()
{

int num, linha, coluna = 0;
int L,C;
int matriz[20][20];
char verificador = 'n';

srand(time(NULL));

for(C = 0; C < 20; C++){
for(L = 0; L< 20; L++){
   matriz[L][C]=rand() %400;
}
}
for(C = 0; C < 20; C++){
for(L = 0; L< 20; L++){
    printf("%3d|", matriz[L][C]);
}
printf("\n");
}

//Entrada do número a ser procurado
    printf("\nEntre com o numero a ser procurado: ");
    scanf("%d", &num);
    printf("\n");
    
	/*verifica em toda matriz o valor procurado, caso encontrado armazanar sua linha e coluna
	   Também altera o verificador para s*/
    for(C = 0; C < 20 ; C++){
        for(L = 0; L < 20 ; L++){
            if(matriz[C][L] == num){
               linha = L;
               coluna = C;
               verificador = 's';
            }
        }
    }
    
	/*Se o número foi encontrado (verificador == 's'), imprima a linha e coluna em que o número está armazenado,
	  caso contrário imprima "número não encontrado"*/
    if(verificador == 's'){
        printf("Numero %d encontrado na linha %d e  %d coluna", num, linha, coluna);
    }else{
        printf("Numero nao encontrado");
    }

return 0;
}
