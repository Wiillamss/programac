#include <stdio.h>

int main (){
    
    // exemplo prático do uso de for

    int numero;
    int i;

    printf("Digite um número para calcular uma tábuada.....\n");
    scanf("%d", &numero);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d \n", i, numero, i * numero);
    }
    

/* Uso prático de uso do-while
    int numero;
    do
    {
        printf("Digite um número par para sair do código: \n");
        scanf("%d", &numero);
        
        if (numero % 2 == 0)
        {
            printf("%d é par!\n", numero);
        } else {
            printf("%d é impar!\n", numero);
        }
        
    } while (numero % 2 != 0);

    printf("Você digitou um número par, saindo do programa.....\n");
*/

    /* Exemplo de uso de While
    while (i <= 10)
    {
        if (i % 2 != 0)
        {
            printf("Os numeros impares são: %d \n", i);
        }
        i++;
    }
*/   



return 0;
}