#include <stdio.h>

// Funcion para encontrar el valor minimo en un arreglo
int encontrarMinimo(int arreglo[], int tam) {
    if (tam == 0) return -1; // Retornar -1 si el arreglo esta vacio

    int minimo = arreglo[0]; // Asumir que el primer elemento es el minimo inicialmente
    for (int i = 1; i < tam; i++) {
        if (arreglo[i] < minimo) {
            minimo = arreglo[i]; // Actualizar minimo si se encuentra un valor menor
        }
    }
    return minimo; // Retornar el valor minimo encontrado
}

// Funcion para encontrar el valor maximo en un arreglo
int encontrarMaximo(int arreglo[], int tam) {
    if (tam == 0) return -1; // Retornar -1 si el arreglo esta vacio

    int maximo = arreglo[0]; // Asumir que el primer elemento es el maximo inicialmente
    for (int i = 1; i < tam; i++) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i]; // Actualizar maximo si se encuentra un valor mayor
        }
    }
    return maximo; // Retornar el valor maximo encontrado
}

// Funcion para encontrar los valores minimo y maximo utilizando punteros
void encontrarMinMax(int *arreglo, int *minimo, int *maximo, int longitud) {
    if (longitud == 0) return; // No hacer nada si el arreglo esta vacio

    *minimo = *arreglo; // Inicializar minimo con el primer elemento del arreglo
    *maximo = *arreglo; // Inicializar maximo con el primer elemento del arreglo

    for (int i = 1; i < longitud; i++) {
        if (*(arreglo + i) < *minimo) {
            *minimo = *(arreglo + i); // Actualizar minimo
        }
        if (*(arreglo + i) > *maximo) {
            *maximo = *(arreglo + i); // Actualizar maximo
        }
    }
}

int main() {
    int arreglo[] = {21, 24, 65, 3, 56, 12, 35, 15}; // Arreglo desordenado
    int tam = sizeof(arreglo) / sizeof(arreglo[0]); // Calcular el tamano del arreglo

    printf("El arreglo a inspeccionar es: [ ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arreglo[i]); // Imprimir cada elemento del arreglo
    }
    printf("]\n");

    // Llamar a las funciones individuales para encontrar minimo y maximo
    int minimoFunc = encontrarMinimo(arreglo, tam);
    int maximoFunc = encontrarMaximo(arreglo, tam);
    printf("\n");
    printf("El valor minimo en el arreglo es: %d (encontrado con funcion)\n", minimoFunc); // Imprimir el valor minimo
    printf("El valor maximo en el arreglo es: %d (encontrado con funcion)\n", maximoFunc); // Imprimir el valor maximo

    // Llamar a la funcion que encuentra min y max con punteros
    int minimoPuntero, maximoPuntero;
    encontrarMinMax(arreglo, &minimoPuntero, &maximoPuntero, tam);
    printf("\n");
    printf("El valor minimo en el arreglo es: %d (encontrado con punteros)\n", minimoPuntero); // Imprimir el valor minimo
    printf("El valor maximo en el arreglo es: %d (encontrado con punteros)\n", maximoPuntero); // Imprimir el valor maximo

    return 0;
}
