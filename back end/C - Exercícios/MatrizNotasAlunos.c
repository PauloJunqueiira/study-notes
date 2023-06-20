#include <stdio.h>

int main(){

    float matrizAlunos[4][4];
    float mediaAlunos[4];
    float soma = 0;
    float media = 0;
      
    for (int aluno = 0; aluno < 4; aluno++)
    {   
        media = 0;
        soma = 0;
        printf("Digite a nota do aluno %d\n", aluno+1);
        for (int nota = 0; nota < 4; nota++)
        {
            printf("Nota %d:", nota+1);
            scanf("%f", &matrizAlunos[aluno][nota]);
            soma += matrizAlunos[aluno][nota];
            media = soma/4;
            mediaAlunos[aluno] = media;
        }
        
       
        printf("A soma das notas do aluno %d: %.2f\n", aluno+1, soma);
        printf("A media das notas do aluno %d: %.2f\n", aluno+1, media);
    }

    for (int aluno = 0; aluno < 4; aluno++)
    {
        printf("A media do aluno %d eh %.2f\n", aluno+1, mediaAlunos[aluno]);
    }

    return 0;
}
