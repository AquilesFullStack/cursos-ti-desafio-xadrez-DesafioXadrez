#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //movimentações simples de peças de xadrez
   int torre = 5;
   int bispo;
   int rainha;

   printf("MOVIMENTAÇÃO DA TORRE\n");
   for (int i = 0; i <= torre; i++)
   {
    printf("Movimentando torre para direita - casa %d \n", i);
   }

   printf("MOVIMENTAÇÃO DO BISPO\n");
   int i = 0;   
   while (i <= 5 )
   {
    printf("Movimento bispo para CIMA, DIREITA na casa %d \n", i );
    i++;
   }

   printf("MOVIMENTAÇÃO DA RAINHA\n");
   int j = 0;
   do {
    printf("Movimento da rainha para a esquerda na casa %d \n", j);
    j++;
   }
   while(j <= 8);

   return 0;
}
