#include <stdio.h>
#include <stdlib.h>
#define TAM 4

void backtracking(int *vet, int pos, int *vetAux)
{

    if (pos == TAM)
    {
        int cont = 0;
        int i;
        for(i = 0; i < TAM; i++){
            cont += vet[i];
        }
        if(cont % 2 == 0){
            for (i = 0; i < TAM; i++)
            {
                printf("%d-", vet[i]);
            }
        printf("   Soma:    %d\n", cont);
        }
        
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            vet[pos] = vetAux[i];
            backtracking(vet, pos + 1, vetAux);
        }
    }
}

int main()
{

    int vet[TAM] = {0};
    int vetAux[4] = {15, 31, 55, 44};
    int pos = 0;

    backtracking(vet, pos, vetAux);

    return 0;
}