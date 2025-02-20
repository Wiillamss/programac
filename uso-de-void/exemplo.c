#include <stdio.h>



void imprimir_saudacao(char nome[]) {

  printf("Olá, %s!\n", nome);

}



int main() {

  imprimir_saudacao("Aluno"); // Chamada da função sem esperar retorno

  return 0; 

}