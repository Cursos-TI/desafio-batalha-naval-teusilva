#include <stdio.h>

int main()
{
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char tabuleiro[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = '0';
        }
    }

    char navioHorizontal[3] = {'3', '3', '3'};
    char navioVertical[3] = {'3', '3', '3'};

    int linhaHorizontal = 2;
    int colunaHorizontal = 4;

    int linhaVetical = 6;
    int colunaVertical = 1;

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
    }

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaVetical + i][colunaVertical] = navioVertical[i];
    }
    printf("\n   "); // Espaço inicial antes das letras para ficar alinhado

    // Imprime as letras do topo
    for (int c = 0; c < 10; c++)
    {
        printf(" %c ", linha[c]);
    }
    printf("\n");

    // Imprime as linhas numeradas de 1 a 10
    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1); // Números das linhas 1 a 10
        for (int j = 0; j < 10; j++)
        {
            printf(" %c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}