# include <stdio.h>


    void movimentoTorre (int casas) {
        if (casas > 0) {

            movimentoTorre (casas - 1);
            printf("%d - Direita \n", casas);
        }
    }

    int main (){
        
        int quantidade = 5;

        printf("*** Realizando o movimento da Torre\n");
        movimentoTorre(quantidade);

        return 0;
    }