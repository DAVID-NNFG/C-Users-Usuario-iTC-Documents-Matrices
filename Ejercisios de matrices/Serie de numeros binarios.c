#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función para comparar dos números binarios
int compare_binaries(const void *a, const void *b) {
    const char **binA = (const char **)a;
    const char **binB = (const char **)b;
    return strcmp(*binA, *binB);
}

int main() {
    int num_binaries;

    // Solicitar al usuario el número de números binarios
    printf("Ingrese el numero de numeros binarios a ordenar: ");
    scanf("%d", &num_binaries);

    if (num_binaries < 1) {
        printf("Numero invalido. Saliendo del programa.\n");
        return 1;
    }

    // Reservar memoria para los números binarios
    char **binaries = (char **)malloc(num_binaries * sizeof(char *));
    if (binaries == NULL) {
        printf("Error al reservar memoria. Saliendo del programa.\n");
        return 1;
    }

    // Solicitar al usuario ingresar cada número binario
    for (int i = 0; i < num_binaries; i++) {
        binaries[i] = (char *)malloc(33 * sizeof(char)); // Reservar memoria para hasta 32 bits + null terminator
        if (binaries[i] == NULL) {
            printf("Error al reservar memoria. Saliendo del programa.\n");
            return 1;
        }
        printf("Ingrese el numero binario %d: ", i + 1);
        scanf("%s", binaries[i]);
    }

    // Ordenar los números binarios usando qsort
    qsort(binaries, num_binaries, sizeof(char *), compare_binaries);

    // Imprimir los números binarios ordenados
    printf("Numeros binarios ordenados:\n");
    for (int i = 0; i < num_binaries; i++) {
        printf("%s\n", binaries[i]);
        free(binaries[i]); // Liberar memoria para cada número binario
    }

    // Liberar la memoria del arreglo de punteros
    free(binaries);

    return 0;
}