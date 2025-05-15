#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

 // Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.

// Função recursiva para mover a Torre para a direita.
void moverTorre(int casas){
    if (casas <= 0) return;
    printf("Direita.\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha para a esquerda.
void moverRainha(int casas){
    if(casas <= 0) return;
    printf("Esquerda.\n");
    moverRainha(casas - 1);
}
// Implementação de Movimentação do Bispo.
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Movimentação do Bispo na diagonal direita.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Função recursiva para mover o Bispo para a diagonal direita.
void moverBispoRecursivo(int casas){
    if(casas <= 0) return;
    printf("Diagonal direita.\n");
    moverBispoRecursivo(casas - 1);
}

// Função com loops aninhados para representar o Bispo.
void moverBispoComLoops(int casas) {
    for(int i = 0; i < casas; i++) { // vertical
        for(int j = 0; j < 1; j++) { // horizontal, mantido fixo pois diagonal casas = 1 vertical
            printf("Diagonal Direita (Vertical %d, Horizontal %d)\n", i + 1 , j +1);

        }

    }
}
     // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
     // Inclua o uso de continue e break dentro dos loops.

    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // Função de loops aninhados e controle avançado para o Cavalo.
void moverCavalo(){
    printf("Movimento do cavalo (2 para cima, 1 para direita):\n");
    for(int i = 0; i < 3; i++) { // loop externo para simular tentativas
        for(int j = 0; j < 3; j++) {
            if (i == 2 && j != 1) {
                continue; // só interessa quando for 2 para cima e 1 para a direita
            }
            if (i == 2 && j == 1){
                printf("Cima.\n");
                printf("Cima.\n");
                printf("Direita.\n");
                break; // Movimento válido feito, encerramos
            }

        }


    }


}


int main() {

    printf("### Desafio Xadrez ###\n");

    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Constante de movimentação
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;


    // Nível Novato - Movimentação das Peças

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
   
   
   
    // Nível novato: Movimentação da Torre
    printf("\nTorre:\n");
    moverTorre(casasTorre);

    // Nível novato: Movimentação da Rainha
    printf("\nRainha:\n");
    moverRainha(casasRainha);

    // Nível Mestre: Movimentação recursiva do Bispo
    printf("\nBispo (com recursividade):\n");
    moverBispoRecursivo(casasBispo);

    // Nível Mestre: Movimentação do Bispo com loops aninhados
    printf("\nBispo (com loops aninhados):\n");
    moverBispoComLoops(casasBispo);
    
    // Nível Aventureiro: Movimentação complexa do Cavalo
    printf("\nCavalo:\n");
    moverCavalo();
       
    
    return 0;
}
