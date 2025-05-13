#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    printf("### Desafio Xadrez ###\n");

    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casasTorre = 5;
    int casasBispo = 4;
    int casasRainha = 3;

    // Nível Novato - Movimentação das Peças

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Mover a Torre 5 casa para direita
    for (int i = 0; i < casasTorre; i++) 
    {

        printf("Direita.\n"); //imprime a direção do movimento.
    }
    
    // Implementação de Movimentação do Bispo.
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Movimentação do Bispo na diagonal direita.
    for (int i = 0; i < casasBispo; i++)
    {
        printf("Diagonal Direita.\n"); //imprime a direção do movimento
    }

    // Implementação de Movimentação da Rainha.
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // Movimentação da Rainha para a esquerda.
    for (int i = 0; i < casasRainha; i++)
    {
        printf("Esquerda.\n"); //imprime a direção do movimento
    }


   
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
