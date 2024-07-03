#include <stdio.h>

int main() {
    // Primero se tiene que definr la matriz en este caso sera una de 3x3 y luego se utilisa una funcion para crear la matriz 
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    //luego de haber creado la matriz se van a imprimir los datos 

    // Aqui se imprimiran los elemntos de las esquinas utilisando varios prinft  
    printf("Elementos de las esquinas:\n");
    printf("%d ", matriz[0][2]); // Esquina superior izquierda
    printf("%d ", matriz[0][0]); // Esquina superior derecha
    printf("%d ", matriz[2][0]); // Esquina inferior izquierda
    printf("%d\n", matriz[2][2]); // Esquina inferior derecha

    return 0;
}
