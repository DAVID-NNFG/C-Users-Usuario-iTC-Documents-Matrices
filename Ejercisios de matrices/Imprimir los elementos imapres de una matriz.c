#include <stdio.h> 

int main() {
    // primeramente definir la matriz de 3x3 para el calculo de los valores impares 
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // aqui se imprimira los valos impares  
    printf("Elementos impares de la matriz:\n");
    // se utilisa un bucle for para i y otro para j estos realisaran los calulos 
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matriz[i][j] % 2 != 0) { // aqui se verificara si el elemento es impar con el operador de la desigualdad 
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n"); //Despues de imprimir todos los elemntos impares de la matris se utilisa una nueva linea 

    return 0;
}