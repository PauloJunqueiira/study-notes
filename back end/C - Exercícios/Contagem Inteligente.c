#include <stdio.h>

int main(){

    int inicio, fim;

    printf("Contagem Inteligente!\n");
    printf("Inicio: ");
    scanf("%d", &inicio);
    printf("Fim: ");
    scanf("%d", &fim);

    printf("CONTANDO!\n");

    if(inicio > fim){

        for(int i = inicio;i >= fim;i-- ){

        printf("%d.. ", i);

        }

    }else if(inicio < fim){
        
        for(int i = inicio;i <= fim;i++){

        printf("%d.. ", i);

        }
    }


    return 0;
}