#include <stdio.h>

// Funcion que busca de manera lineal
int buscarLineal(int arreglo[], int tam, int valor) {
    for (int i = 0; i < tam; i++) {
        if (arreglo[i] == valor) {
            return i; // Retorna la posicion si encuentra el valor
        }
    }
    return -1; // Retorna -1 si no encuentra el valor
}

// Funcion que busca de manera binaria
int buscarBinaria(int arreglo[], int tam, int valor) {
    int inicio = 0;
    int fin = tam - 1;
    
    while (inicio <= fin) {
        int medio = (inicio + fin) / 2;
        
        if (arreglo[medio] == valor) {
            return medio; // Retorna la posicion si encuentra el valor
        } else if (arreglo[medio] < valor) {
            inicio = medio + 1; // Buscar en la mitad derecha
        } else {
            fin = medio - 1; // Buscar en la mitad izquierda
        }
    }
    
    return -1; // Retorna -1 si no encuentra el valor
}

// Funcion que busca de manera binaria pero usando recursividad
int buscarBinariaRecursiva(int arreglo[], int inicio, int fin, int valor) {
    if (inicio > fin) {
        return -1; // Retorna -1 si no encuentra el valor
    }
    
    int medio = (inicio + fin) / 2;
    
    if (arreglo[medio] == valor) {
        return medio; // Retorna la posicion si encuentra el valor
    } else if (arreglo[medio] < valor) {
        return buscarBinariaRecursiva(arreglo, medio + 1, fin, valor); // Buscar en la mitad derecha
    } else {
        return buscarBinariaRecursiva(arreglo, inicio, medio - 1, valor); // Buscar en la mitad izquierda
    }
}


int main() {
    // Declarar el arreglo ordenado
    int arreglo[] = {2, 4, 6, 23, 56, 79};

    // Declarar valor entero del usuario
    int valor;

    // Calcular y almacenar el tamano del arreglo
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);

    // Pedir al usuario que ingrese un valor entero
    printf("Por favor, ingrese un valor entero: ");
    scanf("%d", &valor);

    // Imprimir el valor ingresado
    printf("El valor ingresado es: %d\n", valor);

    // Realizar la busqueda lineal
    int posicion = buscarLineal(arreglo, tam, valor);

    // Imprimir el resultado de la busqueda
    if (posicion != -1) {
        printf("El valor %d se encuentra en la posicion %d del arreglo (busqueda lineal).\n", valor, posicion);
    } else {
        printf("El valor %d no se encontro en el arreglo (busqueda lineal).\n", valor);
    }


    // Realizar la busqueda binaria
    int posicionBinaria = buscarBinaria(arreglo, tam, valor);

    // Imprimir el resultado de la busqueda binaria
    if (posicionBinaria != -1) {
        printf("El valor %d se encuentra en la posicion %d del arreglo (busqueda binaria).\n", valor, posicionBinaria);
    } else {
        printf("El valor %d no se encontro en el arreglo (busqueda binaria).\n", valor);
    }

    // Realizar la busqueda binaria recursiva
    int posicionBinariaRecursiva = buscarBinariaRecursiva(arreglo, 0, tam - 1, valor);

    // Imprimir el resultado de la busqueda binaria recursiva
    if (posicionBinariaRecursiva != -1) {
        printf("El valor %d se encuentra en la posicion %d del arreglo (busqueda binaria recursiva).\n", valor, posicionBinariaRecursiva);
    } else {
        printf("El valor %d no se encontro en el arreglo (busqueda binaria recursiva).\n", valor);
    }

    return 0;
}
