#include <stdio.h>
int main()
{

        // exemplo de loop com múltiplas variáveis!
        int i, j;
        for (i = 1, j = 20; i < j; i++, j--)
        {
                printf("i = %d, j= %d \n", i, j);
        }
        //-----------------------------------------------------------------------
        // exemplo de loops com condições múltiplas!
        printf("\n");
        for (int a = 0, b = 10; a < 5 && b > 5; a++, b--)
        {
                printf("a = %d, b = %d\n", a, b);
        }
        printf("\n");
        //------------------------------------------------------------------------
        // exemplo de loops com atualizações complexas!
        for (int c = 0; c < 100; c += (c % 2 == 0) ? 1 : 2)
        {
                printf("%d \n", c);
        }
        printf("\n");
        //-------------------------------------------------------------------------
        /*
        Os comandos continue e break são úteis para evitar certas condições
        ou para terminar o loop com base em critérios específicos. Veja!
        */
        for (int g = 0; g < 10; g++)
        {
                if (g == 7)
                        continue; // Pula a iteração quando i é 5
                if (g == 8)
                        break; // Sai do loop quando i é 8
                printf("%d ", g);
        }
        return 0;
}