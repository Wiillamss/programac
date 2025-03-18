# include <stdio.h>


    void movimentoTorre (int casas) {
        if (casas > 1) {

            movimentoTorre (casas - 1);
            
    
        }
        char direcao_Torre[20];
        printf("Digite a direção de movimentação da Torre (Cima ou Direita)\n");
        scanf(" %s", direcao_Torre);
        printf("%d para %s \n", casas, direcao_Torre);
        
    }

    int main (){
        
        int quantCasas_Torre;

        printf("Digite um número de 1 à 8, representando a quantidade de casas que a Torre vai percorrer: ");
        scanf("%d", &quantCasas_Torre);
        
        printf("*** Realizando o movimento da Torre\n");
        movimentoTorre(quantCasas_Torre);

        return 0;
    }