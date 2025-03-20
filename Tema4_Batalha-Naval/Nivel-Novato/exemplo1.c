#include <stdio.h>
int main()
{

    // Exemplos de uso de Vetores
    
    int numeros[5] = {10, 20, 30, 40, 50};
    char *nomes[] = {"Bruna", "Maya", "Joelma", "Rosa", "Willams"};

    for (int i = 1; i >= 0; i--)
    {
        printf(" A idade é: %d\n - Nome: %s\n", numeros[i], nomes[i]);
    }
}
/*
Acessando com printf
#include <stdio.h>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};  // Inicialização do array com valores

    // Acessando e imprimindo elementos específicos do array
    printf("O primeiro elemento é %d\n", numeros[0]);
    printf("O terceiro elemento é %d\n", numeros[2]);
    printf("O quinto elemento é %d\n", numeros[4]);

    return 0;
}
*/
// ---------------------------------------------------------------------------------
/*
#include <stdio.h>

int main() {
    float notas[3] = {85.5, 90.0, 78.0};  // Array de notas de 3 alunos

    printf("Nota do primeiro aluno: %.1f\n", notas[0]);
    printf("Nota do segundo aluno: %.1f\n", notas[1]);
    printf("Nota do terceiro aluno: %.1f\n", notas[2]);

    return 0;
}
*/
//-----------------------------------------------------------------------------------
/*
Armazenamento de caracteres
#include <stdio.h>

int main() {
    char letras[4] = {'A', 'B', 'C', 'D'};  // Array de caracteres

    printf("Primeira letra: %c\n", letras[0]);
    printf("Segunda letra: %c\n", letras[1]);
    printf("Terceira letra: %c\n", letras[2]);
    printf("Quarta letra: %c\n", letras[3]);

    return 0;
}
*/