#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentarBispo(){
    int i = 0;
    printf("Bispo andando: \n");
    
    while(i < 5){
        printf("cima, direita \n");
        i++;
    }

    printf("\n");
    
}

void movimentarTorre(){
    printf("Torre andando: \n");
    
    for(int i = 0; i < 5; i++){
        printf("direita \n");
    }
    printf("\n");
}

void movimentarRainha(int movimentoRestante){
    if(movimentoRestante > 0){
        printf("esquerda \n");
        movimentoRestante = movimentoRestante - 1;
        movimentarRainha(movimentoRestante);
    }
}

void movimentarCavalo(){
    int movimentos = 0;
    printf("Cavalo andando: \n");
    
    while (movimentos < 1)
    {
        for(int i = 0; i < 3; i++){
            printf("baixo, ");
        }
        printf("esquerda");
        movimentos++;
    }
    
    printf("\n");
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    movimentarBispo();

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    movimentarTorre();

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Rainha andando: \n");
    movimentarRainha(8);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    movimentarCavalo();

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
