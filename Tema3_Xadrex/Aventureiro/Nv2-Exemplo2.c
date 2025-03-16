#include <stdio.h>
int main()
{

// Exemplos praticos com uso de LOOPS ANINHADOS

    int segundos;

    for (segundos = 10; segundos >= 0; segundos--)
    {
        printf("%d\n", segundos);

        // Loop aninhado para simular um atraso
        for (int i = 0; i < 1000000000; i++)
        {
            // Apenas para simular um atraso
        }
    }

    printf("Fogos de artifício!\n");

    return 0;
}

/*
    int n = 15; // altura do triângulo

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    printf("(%d, %d)\n", i, j);
                }
            }
        }
        return 0;
    }
*/
// LOOPS Aninhados com uso de for
/*    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
*/
// LOOPS Aninhados com uso de While
/* #include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) {
        int j = 1;
        while (j <= 10) {
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/

// LOOPS Aninhados com uso de DO-While
/* #include <stdio.h>

int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            printf("%d\t", i * j);
            j++;
        } while (j <= 10);
        printf("\n");
        i++;
    } while (i <= 10);
    return 0;
}
*/