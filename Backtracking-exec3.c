#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void backtracking(int x, int soma, int pos, int *moedas, int *vetAux)
{

    if (soma == x)
    {
        int i;

        for (i = 0; i < pos; i++)
        {
            printf("%d-", vetAux[i]);
        }
        printf("  SOMA:%d\n", soma);
        return;
    }
    if (soma > x)
    {
        return;
    }
    else
    {
        for (int i = 0; i < TAM; i++)
        {
            vetAux[pos] = moedas[i];
            backtracking(x, soma + moedas[i], pos + 1, moedas, vetAux);
        }
    }
}

int main()
{
    int x;
    int moedas[TAM] = {1, 5, 10, 25, 50};
    int pos = 0;
    int soma = 0;

    printf("Valor em centavos:");
    scanf("%d", &x);

    int *vetAux = (int *)malloc(x * sizeof(int));

    backtracking(x, soma, pos, moedas, vetAux);

    free(vetAux);

    return 0;
}