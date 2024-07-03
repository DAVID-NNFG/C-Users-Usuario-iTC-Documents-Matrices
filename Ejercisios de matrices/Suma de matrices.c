#include <stdio.h> 

int main() {
    // Primeero se definen dos matrices de 3x3 para realisar la suma 
    int matriz1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matriz2[3][3] = {
        {1, 2, 3},
        {4, 5, 2},
        {4, 2, 1}
    };

    // y se crea otra matriz para almacenar la suma esto se hace para que no se modifiquen las matrices originales cuando se sume 
    int suma[3][3];

    // Aqui se sumara las matrices
    for (int i = 0; i < 3; ++i) { // un bucle para Las filas 
        for (int j = 0; j < 3; ++j) { // y un bule para las columnas 
            suma[i][j] = matriz1[i][j] + matriz2[i][j]; // y aqui se precede a sumar las dos matrices 
        }
    }

    // aqui se imprime la suma de las dos matrices
    printf("\nResultado de la suma:\n"); // esta parte se mostrar en pantalla 
    for (int i = 0; i < 3; ++i) { // aqui un bucle para que recorra las filas de la suma de las matrices
        for (int j = 0; j < 3; ++j) { // y otro bucle para que recorra las columnas de las suma de las matrices 
            printf("%d ", suma[i][j]); //  y se imprime la suma de las matrices 
        }
        printf("\n");
    }

    return 0;
}