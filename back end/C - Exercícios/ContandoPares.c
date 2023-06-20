#include <stdio.h>

int main(){

  int soma = 0, inicio, fim;
  int resposta =0;

  printf("Digite o inicio: ");
  scanf("%d", &inicio);

  printf("Digite o fim: ");
  scanf("%d", &fim);

  for(int i = inicio; i <= fim; i++ ){

    resposta = i%2;

  if (resposta == 0){
    printf("O numero %d e par\n", i);
    soma = soma + 1;

  }else{
    printf("O numero %d e impar\n", i);
  }

  }

  printf("Foram encontrados %d numeros pares.", soma);

  return 0;
}