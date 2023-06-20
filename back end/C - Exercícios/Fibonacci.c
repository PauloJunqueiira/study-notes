#include <stdio.h>

int main(){

int ant1 = 34, ant2 = 55, atual;


    for(int i = 0; i < 1000; i++){
        
        atual = ant1 + ant2;
        
        printf("%d ", ant1);
        
        ant1 = ant2;
        ant2 = atual;

}

printf("\n");

    return 0;
}
