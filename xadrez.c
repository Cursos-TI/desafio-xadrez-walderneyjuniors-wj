#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
     // Variáveis para controlar a quantidade de movimentos
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int cavalo = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
     // --- MOVIMENTAÇÃO DO BISPO ---
    // Usando WHILE: checa a condição antes de cada passo
    printf("Movimento do Bispo:\n");
    int b = 1;
    while (b <= bispo   ) {
        printf("Cima, Direita\n");
        b++; // Incrementa para não criar um loop infinito
    }
    printf("\n"); // Pula linha para organizar a saída

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // --- MOVIMENTAÇÃO DA TORRE ---
    // Usando FOR: inicialização; condição; incremento
    printf("Movimento da Torre:\n");
    for (int t = 1; t <= torre; t++) {
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // --- MOVIMENTAÇÃO DA RAINHA ---
    // Usando DO-WHILE: executa pelo menos uma vez e depois checa a condição
    printf("Movimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= rainha);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
     printf("Movimento do Cavalo:\n");
    while (cavalo --) {
        for (int c = 0; c < 2; c++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
