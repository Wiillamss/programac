#include <stdio.h>

int main (){

    int preco [2][2] = {{20,40}, {64,85}};
    int preco2 [2][2] = {{1,5}, {4,5}};
    int soma [2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            soma[i][j] = preco[i][j] + preco2[i][j];
            printf("O valor da soma é [%d][%d] = %d\n", i, j, soma[i][j]);
        }
        printf("\n");
    }
    



}