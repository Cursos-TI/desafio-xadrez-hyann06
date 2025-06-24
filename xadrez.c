#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.


    int b = 1;
    do //loop pra movimentar o bispo
    {
        printf("Bispo pra Cima e Esquerda\n");
        b++;

    } while (b <= 5);

    printf("\n\n");




    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.


    for (int t = 1; t <= 5; t++) //loop pra movimentar a torre 
    {
        printf("Torre pra Direita\n");
    }
    printf("\n\n");





    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.


    int r = 1; 
    while (r <= 8) // loop pra movimentar a rainha
    {
        printf("Rainha pra Esquerda\n");
        r++; // final do loop 
    }
    printf("\n\n");
    printf("------------------------------------------------------------------------------------------------------------\n\n");


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.


    int c = 1; //movimentação do caavalo 
    while (c--) //loop unico para movimentar a peaça na horizontal 
    {
        for (int C = 1; C <=2; C++) // loop duplo pra mivimentar a peça na vertical
        {
            printf("Cavalo pra Baixo\n");
        }
        printf("Cavalo pra Esquerda\n");
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
