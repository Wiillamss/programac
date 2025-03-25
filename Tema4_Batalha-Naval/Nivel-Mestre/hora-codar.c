#include <stdio.h>

#define LINHA 8
#define COLUNA 20

//Busca condicional em uma matriz
int main() {
    int matriz[LINHA][COLUNA];
    int target = 94;
    int found = 0;
    int soma = 1;

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
 
    // Busca condicional do elemento alvo
    for (int i = 0; i < LINHA; i++) {      // Loop externo para as linhas
        for (int j = 0; j < COLUNA; j++) {  // Loop interno para as colunas
            if (matriz[i][j] == target) {
                printf("O valor %d foi encontrado no indice (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
 
    if (!found) {
        printf("Valor %d não foi encontrado no indice\n", target);
    }
 
    return 0;
}