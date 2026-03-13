#include <stdio.h>

int main() {
    // Definición de variables (según la tabla de objetos)
    float x;    // 'x' es el número real que leeremos
    int i = 1;  // 'i' es nuestro contador que inicia en 1

    // Condición de parada: Mientras i sea menor o igual a 3
    while (i <= 5) {

        // Cuerpo del bucle: Leer x
        printf("Ingrese un numero real: ");
        scanf("%f", &x);

        // Cuerpo del bucle: Escribir x
        printf("El numero ingresado es: %.2f\n", x);

        // Incremento: i <- i + 1
        i = i + 1;

    } // Aquí el programa vuelve al "rombo" para preguntar si i <= 3

    printf("Fin del programa.\n");

    return 0;
}
