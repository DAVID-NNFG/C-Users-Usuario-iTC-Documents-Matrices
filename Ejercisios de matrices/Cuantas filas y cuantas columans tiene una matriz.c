#include <stdio.h> 

int main() {
    // Primero definimos una matris de 3x3 pero puede ser de cualquier valor 
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Luego se imprime la matriz original 
    printf("Matriz original:\n"); // En esta parte se mostrara el mensaje para la matriz original 
    for (int i = 0; i < 3; ++i) { // se utilisa un bucle para las filas que son i 
        for (int j = 0; j < 3; ++j) { // y luego se uitilisa otro bucle para las columnas que son j 
            printf("%d ", matriz[i][j]); // aqui se imprimira la matriz original 
        }
        printf("\n");
    }

    // aqui se imprimira el numero de filas y columnas respectivamenta 
    int filas = 3; // en esta liena es el numero de filas
    int columnas = 3; // en esta linea es el nuemero de columnas 
    // y respectivamente se imprimen filas y columnas 
    printf("Número de filas: %d\n", filas);
    printf("Número de columnas: %d\n", columnas);

    return 0;
}