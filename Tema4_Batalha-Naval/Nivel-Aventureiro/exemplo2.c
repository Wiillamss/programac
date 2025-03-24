// Vetores com estruturas de repetição
/*
#include <stdio.h>
 
int main() {
    int vetor[5]; // Declaração de um vetor de 5 inteiros
 
    // Inicialização do vetor usando uma estrutura de repetição for
    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 2; // Atribuindo valores ao vetor
    }
 
    // Exibindo os elementos do vetor usando uma estrutura de repetição for
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
 
    return 0;
}
*/

/*
    Matrizes com estruturas de repetição

#include <stdio.h>
 
int main() {
    int matriz[3][3]; // Declaração de uma matriz 3x3 de inteiros
 
    // Inicialização da matriz usando estruturas de repetição for aninhadas
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i + j; // Atribuindo valores à matriz
        }
    }
 
    // Exibindo os elementos da matriz usando estruturas de repetição for aninhadas
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }
 
    return 0;
}
*/

/*
Operações combinadas:

Podemos realizar operações mais complexas com vetores e matrizes usando estruturas de repetição.
Por exemplo, podemos somar duas matrizes ou calcular a soma dos elementos de um vetor.

#include <stdio.h>
 
int main() {
    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {{5, 6}, {7, 8}};
    int matrizSoma[2][2];
 
    // Somando as duas matrizes
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
 
    // Exibindo a matriz resultante
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matrizSoma[%d][%d] = %d\n", i, j, matrizSoma[i][j]);
        }
    }
 
    return 0;
}
*/

// Soma dos elementos de um vetor

#include <stdio.h>
 
int main() {
    int vetor[5] = {5, 2, 3, 4, 7};
    int soma = 0;
 
    // Calculando a soma dos elementos do vetor
    for (int i = 0; i < 5; i++) {
        soma += vetor[i];
    }
 
    printf("A soma dos elementos do vetor é: %d\n", soma);
 
    return 0;
}