#include <stdio.h>

int main() {
    // Primeramente se define la matriz que se va a invertir 
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // En la primera parte se imprime la  matriz original 
    printf("Matriz original:\n"); // mensaje de entrada para la matriz original 
    for (int i = 0; i < 3; ++i) { // se utilisa un bucle for para las filas 
        for (int j = 0; j < 3; ++j) { // y aqui tambien se utilisa unn bucle for para las columnas 
            printf("%d ", matriz[i][j]);  // y se imprime la matriz original 
        }
        printf("\n");
    }

    // En esta parte se lograra la matriz inverse pirmeramente imprimiendo la matriz 
    printf("Matriz inversa:\n"); // mensaje de entrada para la matriz inversa 
    for (int i = 2; i >= 0; --i) { // aqui se recorrera la matriz en un sentido inverso por las filas empesado desde la primera
        for (int j = 2; j >= 0; --j) { // aqui se recorrea la matriz en un sentido inverso por las columnas empesando desde la primera
            printf("%d ", matriz[i][j]);  // y luego se imprimira las matriz inversa 
        }
        printf("\n");
    }

    return 0;
}