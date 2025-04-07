#include <stdio.h>

int main(){
    printf("Desafio do Xadrez!\n");

    int i;

    // Movimento da Torre: 5 casas para a direita.
    
    printf("Movimento da torre:\n");
    for(i = 0; i < 5; i++){
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal pra cima e à direita.

    printf("Movimento do Bispo:\n");
    i = 0;
    while (i < 5){
        printf("Cima, direita\n");
        i++
    }

    // Movimento da Rainha 8 casas para a esquerda.

    printf("Movimento da Rainha:\n");
    i = 0;
    do{
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    return 0;
    
    

    
}