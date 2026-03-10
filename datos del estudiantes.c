#include <stdio.h>

int main() {
    // Definición de variables
    char nombre[100];
    char carrera[100];
    int edad;
    int semestre;

    printf("--- Registro de Datos del Estudiante ---\n");

    // Leer nombre (permite espacios hasta encontrar un salto de línea)
    printf("Ingrese el nombre del estudiante: ");
    scanf(" %[^\n]s", nombre);

    // Leer edad
    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    // Leer carrera (permite espacios)
    printf("Ingrese la carrera: ");
    scanf(" %[^\n]s", carrera);

    // Leer semestre
    printf("Ingrese el semestre actual: ");
    scanf("%d", &semestre);

    // Mostrar los resultados
    printf("\n--- Información Registrada ---\n");
    printf("Nombre:   %s\n", nombre);
    printf("Edad:     %d años\n", edad);
    printf("Carrera:  %s\n", carrera);
    printf("Semestre: %d\n", semestre);

    return 0;
}
