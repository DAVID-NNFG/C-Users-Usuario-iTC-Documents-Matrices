#include <stdio.h> 

int main() {
    // Definir la matriz de 3x3 la cual vamos a utilizar para imprimir los elementos pares 
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Luego se imprimiran los valores de la matriz 
    printf("Elementos pares de la matriz:\n");

    //aqui se utiliza la funcion un bucle for para el calculdo los valores impares el priemer bucle es para las filas que son las i y el segundo bucle es para las clumnas que son j

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matriz[i][j] % 2 == 0) { // Y una conducion para verificar si los numeros son pares 
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n"); // Despues de imprimir todos los elemntos pares de la matris se utilisa una nueva linea 

    return 0;
}