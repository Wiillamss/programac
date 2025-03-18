# include <stdio.h>

// Exemplo de Recursividade

    void recursivo (int numero) {
        if (numero > 0) {
            printf("%d \n", numero);

            recursivo (numero - 1);
        }
    }

    int main (){
        
        int quantidade = 10;

        printf("Contagem regressiva.....\n");
        recursivo(quantidade);

        return 0;
    }

    /*
    #include <stdio.h>
 
// Função recursiva para imprimir números de n até 1
void recursiveLoop(int n) {
    if (n > 0) {
        printf("%d ", n);  // Imprime o valor atual de n
        recursiveLoop(n - 1);  // Chama a si mesma com n - 1
    }
}
 
int main() {
    int numero = 5;
    printf("Contagem regressiva: ");
    recursiveLoop(numero);
    return 0;
}


Definição da função                                

A função recursiveLoop é definida para aceitar um único argumento.
Essa função imprime o valor de n e depois chama a si mesma com n - 1.


Caso-base

A recursividade é controlada por uma condição base if (n > 0).
Quando chega a 0, a função para de chamar a si mesma, evitando um loop infinito.
Se n for maior que 0, a função imprime o valor atual de e faz uma chamada recursiva com n - 1.


Chamada recursiva 

Cada chamada de recursiveLoop reduz o valor de em 1. Isso cria uma série de chamadas que eventualmente atingem o caso-base.

Quando recursiveLoop(5) é chamado, a sequência de execuções é:

 

recursiveLoop(5) imprime 5 e chama recursiveLoop(4).
recursiveLoop(4) imprime 4 e chama recursiveLoop(3).
recursiveLoop(3) imprime 3 e chama recursiveLoop(2).
recursiveLoop(2) imprime 2 e chama recursiveLoop(1).
recursiveLoop(1) imprime 1 e chama recursiveLoop(0).
recursiveLoop(0) não entra no if e a execução termina.
 

Essa série de chamadas imprime 5 4 3 2 1 na tela.

 

Recursividade é uma técnica essencial para resolver problemas que podem ser divididos em subproblemas menores.
Nesse exemplo, mostramos como usar recursividade para simular um loop que imprime números em contagem regressiva.
    */