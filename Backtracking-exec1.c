#include <stdio.h>
#include <stdlib.h>
#define TAM 6

void backtracking(char *vet, int pos, char *vetAux)
{

    if (pos == TAM)
    {
        int contEI = 0;
        int i;
        for(i = 0; i <TAM; i++){
            if((vet[i] == 'e') || (vet[i] == 'i'))
                contEI++;
        }
        if(contEI < (TAM/2)){
            for (i = 0; i <= TAM; i++)
            {
                printf("%c", vet[i]);
            }
        printf("\n");
        }
        
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            vet[pos] = vetAux[i];
            backtracking(vet, pos + 1, vetAux);
        }
    }
}

int main()
{

    char vet[TAM] = {0};
    char vetAux[3] = {'a', 'e', 'i'};
    int pos = 0;

    backtracking(vet, pos, vetAux);

    return 0;
}