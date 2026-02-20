#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void movPiece(int n, char *nome)
{
    if (n  > 0)
    {
        printf("Movimentando a peça: %s - %d \n", nome, n);
        movPiece(n - 1, nome);
    }
}

void movBispo(int h, int v)
{
    int i = 0;
    while(i < h)
    {
        i++;
        printf("CIMA\n");
        if(i < v)
        {
            printf("DIREITA\n");
            continue;
        }
        if(i ==v){
            break;
        }
        // while(i < v)
        // {
        //     printf("CIMA\n");
        //     if(i == v)
        //     {
        //         break;
        //     }
        // }
    }
}

int main()
{
    // movimentações simples de peças de xadrez
    int torre = 5;
    int bispo;
    int rainha;

    printf("MOVIMENTANDO A TORRE\n");
    movPiece(5, "Torre");
    printf("MOVIMENTANDO A RAINHA\n");
    movPiece(8, "Rainha");
    printf("MOVIMENTANDO O BISPO\n");
    movBispo(4,4);

    //MOVIMENTAÇÃO CAVALO 

    int i = 0;
    while (i < 2 )
    {
        printf("cavalo - CIMA\n");
        i++;
        if(i >= 2)
        {
            printf("cavalo - DIREITA\n");
            break;
        }
    }



    // printf("MOVIMENTAÇÃO DA TORRE\n");
    // for (int i = 0; i <= torre; i++)
    // {
    //     printf("Movimentando torre para direita - casa %d \n", i);
    // }


    // printf("MOVIMENTAÇÃO DO BISPO\n");
    // int i = 0;
    // while (i <= 5)
    // {
    //     printf("Movimento bispo para CIMA, DIREITA na casa %d \n", i);
    //     i++;
    // }

    // printf("MOVIMENTAÇÃO DA RAINHA\n");
    // int j = 0;
    // do
    // {
    //     printf("Movimento da rainha para a esquerda na casa %d \n", j);
    //     j++;
    // } while (j <= 8);

    // printf("MOVIMENTAÇÃO DO CAVALO \n");
    // int c = 0;
    //    while (int c = 0 < 2)
    //    {
    //         printf("BAIXO\n");
    //         c++;
    //    }

    // for (int ca = 0; ca < 1; ca++)
    // {
    //     for (int c = 0; c < 2; c++)
    //     {
    //         printf("bispo - BAIXO\n");
    //     }
    //     printf("bispo - ESQUERDA \n");
    // }
    return 0;
}
