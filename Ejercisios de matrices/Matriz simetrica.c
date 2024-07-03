#include <cstdio> 

int main() {
    // Definir una matriz origen de 3x3 
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // y otra matriz para almacenar la matriz simetrica 
    int simetrica[3][3];

    // aqui se crea la matriz simetrica 
    for (int i = 0; i < 3; ++i) { // Bucle para las filas de la matriz
        for (int j = 0; j < 3; ++j) { // Bucle para las columnas de la matriz 
            simetrica[i][j] = matriz[j][i];
        }
    }

    // Imprimir la matriz original
    printf("Matriz original:\n");
    for (int i = 0; i < 3; ++i) { // Bucle para las filas
        for (int j = 0; j < 3; ++j) { // Bucle para las columnas
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprimir la matriz simétrica
    printf("\nMatriz simétrica:\n");
    for (int i = 0; i < 3; ++i) { // Bucle para las filas
        for (int j = 0; j < 3; ++j) { // Bucle para las columnas
            printf("%d ", simetrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}