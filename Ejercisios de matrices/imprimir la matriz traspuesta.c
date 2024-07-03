#include <stdio.h>

int main() {
    // Se define la matriz de 3x3 para la matriz traspuesta 
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Aqui se imprimira la matriz original para la matriz traspuesta 
    printf("Matriz original:\n");  // mensaje de salida para la matriz original 
    for (int i = 0; i < 3; ++i) { // Se utilisara un bucle for para las filas de la matriz 
        for (int j = 0; j < 3; ++j) { // y aqui se utilisara otro bucle for para las columnas de la matriz 
            printf("%d ", matriz[i][j]); // y luego se imprime la matriz original 
        }
        printf("\n");
    }

    // en esta parte se imprimira la matriz traspuesta 
    printf("Matriz traspuesta:\n"); // mensaje de salida para la mtriz traspuesta 
    for (int i = 0; i < 3; ++i) { // aqui se utilisan un bucle for para las filas de las matriz traspuesta inicia en i es igual a cero y termina cuando el valor de i alcansa 2 
        for (int j = 0; j < 3; ++j) { // aqui tambein se utilisa un bucle for para las columnas de la matriz traspuesta inicia en j es igual a cero y termina cuando el valor de j alcansa 2 
            printf("%d ", matriz[j][i]); // toma cada elemento de las matriz original en el orden de la matriz traspuesta 
        }
        printf("\n");
    }

    return 0;
}
