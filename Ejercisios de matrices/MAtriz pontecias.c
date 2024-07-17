#include <iostream>
#include <cstdio>

int main() {
    // primero emepsamos declaramos una matriz de 3x3 y ingresando los digitos previamente dentro de la matriz 
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Aqui colocamos las dimenciones de la matriz 
    int filas = 3;
    int columnas = 3;

    // Recorrer sobre cada elemento de la matriz para calcular su potencia 
    for (int i = 0; i < filas; ++i) { //aqui se recorreran la filas 
        for (int j = 0; j < columnas; ++j) { // aqui se recorreran las columnas 
            // Aqui se caculara la pontesia de la matriz 
            matriz[i][j] = matriz[i][j] * matriz[i][j];
        }
    }

    // y se imprimiran los elemtos de la matriz 
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // aqui es un salto para una nueva liena 
    }

    return 0;
}