#include <stdio.h> 

int main() {
    // Primeero se definen dos matrices de 3x3 para realisar el producto
    int matriz1[3][3] = {
        {2, 3, 5},
        {2, 3, 6},
        {3, 8, 9}
    };

    int matriz2[3][3] = {
        {1, 2, 3},
        {4, 5, 2},
        {4, 2, 1}
    };

    // y se crea otra matriz para almacenar el producto esto se hace para que no se modifiquen las matrices originales cuando se realise el producto 
    int producto[3][3];

    // Aqui se realisara el producto de las matrices
    for (int i = 0; i < 3; ++i) { // un bucle para Las filas 
        for (int j = 0; j < 3; ++j) { // y un bule para las columnas 
            producto[i][j] = matriz1[i][j] * matriz2[i][j]; // y aqui se precede a realiar el producto de las dos matrices 
        }
    }

    // aqui se imprime el producto de las dos matrices
    printf("\nResultado de el producto es:\n"); //esta parte se mostrar en pantalla 
    for (int i = 0; i < 3; ++i) { // aqui un bucle para que recorra las filas de el producto de la matrices
        for (int j = 0; j < 3; ++j) { // y otro bucle para que recorra las columnas de el producto de la matrices 
            printf("%d ", producto[i][j]); //  y se imprime la producto de las matrices 
        }
        printf("\n");
    }

    return 0;
}