#include <stdio.h>

int main() {
    // Primero se tiene que definr la matriz en este caso sera una de 3x3 y luego se utilisa una funcion para crear la matriz 
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    //luego de haber creado la matriz se van a imprimir los elemntos que no esten en las esquinas 

    // Aqui se imprimiran los elemntos que esten en las esquinas utilisando varios prinft  
    printf("Elementos de las esquinas:\n");
    printf("%d ", matriz[0][1]); 
    printf("%d ", matriz[1][0]); 
    printf("%d ", matriz[1][1]);
    printf("%d ", matriz[2][1]);
    printf("%d\n", matriz[1][2]); 

    return 0;
}
