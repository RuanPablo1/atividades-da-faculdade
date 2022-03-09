/******************************************************************************

Programa de calcular médias

*******************************************************************************/
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

int main()
{

char aluno[100], matri[100];
float nota1, nota2, nota3, nota4, media = 0;

printf("Nome do aluno: ");
scanf("%s", &aluno);
printf("\n");

printf("Matricula do aluno: ");
scanf("%s", &matri);
printf("\n");

printf("Digite a nota 1: ");
scanf("%f", &nota1);
printf("\n");
printf("Digite a nota 2: ");
scanf("%f", &nota2);
printf("\n");
printf("Digite a nota 3: ");
scanf("%f", &nota3);
printf("\n");
printf("Digite a nota 4: ");
scanf("%f", &nota4);
printf("\n");

media = ((nota1+nota2+nota3+nota4)/4);

printf ("A media e: %f\n\n", media);

if(media<5){
    printf("O aluno %s de matricula %s teve como media %f e esta REPROVADO!", aluno,matri,media);
}else

if(media>=5 && media<6){
    printf("O aluno %s de matricula %s teve como media %f e esta de RECUPERACAO!", aluno,matri,media);
}else

if(media>=6 && media<=10){
    printf("O aluno %s de matricula %s teve como media %f e esta APROVADO!", aluno,matri,media);
}else

if(media<0 || media>10){
    printf("Media invalida!");
}

return 0;
}
