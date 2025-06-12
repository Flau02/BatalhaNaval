#include <stdio.h>

int main() {
    int matriz[10][10]; // Declaração da matriz 10x10
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {1,2,3,4,5,6,7,8,9,10};
    

    printf("Numerando linhas e colunas de uma matriz 10x10:\n\n");

    // Preenchendo e exibindo a matriz com a numeração
    for (int i = 0; i < 10; i++) { 
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = 0;

            matriz[1][2] = 3;
            matriz[1][3] = 3; // Navio horizontal
            matriz[1][4] = 3;

            matriz[6][7] = 3;
            matriz[7][7] = 3; // Navio vertical
            matriz[8][7] = 3;
           }

        printf("\n"); // Quebra de linha após cada linha da matriz
    }

    printf("   ");
    for (int i = 0; i < 10; i++){   //Imprime indicadores das colunas
    printf("%c ", coluna[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d  ", linha[i]);
        for (int j = 0; j < 10; j++) {
           
            printf("%d ", matriz[i][j]);    //Imprime o indicadores das linhas
        }
       
        printf("\n");
    }

    return 0;
}