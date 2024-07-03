#include <cstdio> 

int main() {
    // Definir las dos matrices de 3x3 para realisar la divicion 
    int matriz1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matriz2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Matriz para almacenar el resultado de la división y este no afecte a las primeras matrices 
    float cociente[3][3];

    // Dividir las matrices elemento por elemento
    for (int i = 0; i < 3; ++i) { // Bucle para las filas
        for (int j = 0; j < 3; ++j) { // Bucle para las columnas
            if (matriz2[i][j] != 0) {
                cociente[i][j] = static_cast<float>(matriz1[i][j]) / matriz2[i][j];
            } else {
                printf("Error: División por cero en la posición (%d, %d)\n", i, j);
                return 1; // este prinft es para que el usuario ingrese numeros validos 
            }
        }
    }

    // aqui se imprime las matrices del cociente 
    printf("\nMatriz cociente:\n");
    for (int i = 0; i < 3; ++i) { // un bucle para las filas de el resultado de la divicion 
        for (int j = 0; j < 3; ++j) { // un bucle para las columnas de el resultado de la divicion 
            printf("%.2f ", cociente[i][j]);
        }
        printf("\n");
    }

    return 0;
}
