#include <stdio.h> 

int main() {
    // Primeero se definen dos matrices de 3x3 para realisar la resta 
    int matriz1[3][3] = {
        {2, 3, 5},
        {7, 8, 6},
        {7, 8, 9}
    };

    int matriz2[3][3] = {
        {1, 2, 3},
        {4, 5, 2},
        {4, 2, 1}
    };

    // y se crea otra matriz para almacenar la resta esto se hace para que no se modifiquen las matrices originales cuando se reste  
    int resta[3][3];

    // Aqui se restara las matrices
    for (int i = 0; i < 3; ++i) { // un bucle para Las filas 
        for (int j = 0; j < 3; ++j) { // y un bule para las columnas 
            resta[i][j] = matriz1[i][j] - matriz2[i][j]; // y aqui se precede a resta las dos matrices 
        }
    }

    // aqui se imprime la resta de las dos matrices
    printf("\nResultado de la resta:\n"); //esta parte se mostrar en pantalla 
    for (int i = 0; i < 3; ++i) { // aqui un bucle para que recorra las filas de la resta de la matrices
        for (int j = 0; j < 3; ++j) { // y otro bucle para que recorra las columnas de las resta de la matrices 
            printf("%d ", resta[i][j]); //  y se imprime la resta de las matrices 
        }
        printf("\n");
    }

    return 0;
}