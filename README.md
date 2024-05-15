# Laboratorio #4: Programación Bajo Plataformas Abiertas

## Descripción General
Este repositorio contiene los códigos fuente desarrollados para el Laboratorio #4 del curso IE-0117. Este laboratorio se enfoca en la utilización de arreglos y técnicas de programación con punteros en C, incluyendo la implementación de búsquedas lineales, binarias usando recursividad y manejo de punteros para manipular valores dentro de funciones.

## Estructura del Repositorio
El repositorio está organizado en directorios que corresponden a cada uno de los ejercicios asignados en el laboratorio, como se muestra a continuación:

### 1. `ejercicio1`
Contiene el código fuente y el ejecutable para realizar búsquedas dentro de un arreglo ordenado.
- `ej1.c`: Código fuente que implementa búsquedas lineales y binarias (tanto iterativas como recursivas).
- `ej1`: Ejecutable compilado del código fuente.

### 2. `ejercicio2`
Incluye los archivos necesarios para trabajar con un arreglo desordenado, realizando operaciones para encontrar los valores mínimo y máximo.
- `ej2.c`: Código fuente que incluye funciones para encontrar el valor mínimo y máximo dentro de un arreglo y otra función que usa punteros para almacenar estos valores directamente desde el arreglo sin retorno.
- `ej2`: Ejecutable compilado del código fuente.

## Compilación
Para compilar cualquiera de los programas incluidos en este repositorio, puede utilizarse el siguiente comando en un entorno Unix/Linux:
```bash
gcc -Wall <nombre_del_archivo>.c -o <nombre_del_ejecutable>
