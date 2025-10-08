#include <stdio.h>

#define TAM 10
#define AGUA 0
#define NAVIO 3

int main()
{
    char linha[TAM] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[TAM][TAM];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            tabuleiro[i][j] = AGUA;
        }
    }
    // 1️ Navio horizontal (linha 1, colunas A–C)
    for (int j = 0; j < 3; j++)
    {
        tabuleiro[1][j] = NAVIO;
    }

    // 2️ Navio vertical (coluna F, linhas 3–5)
    for (int i = 3; i < 6; i++)
    {
        tabuleiro[i][5] = NAVIO;
    }

    // 3️ Navio diagonal principal — tabuleiro[i][i]
    // Exemplo: A1, B2, C3
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[i][i] = NAVIO;
    }

    // 4️  Navio diagonal secundária — tabuleiro[i][9 - i]
    // Exemplo: A10, B9, C8
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[i][9 - i] = NAVIO;
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