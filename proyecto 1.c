#include <stdio.h>

int main() {

//Declaracion de variable
float numero1, numero2, numero3, numero4, numero5, suma, promedio;

 // Entrada de datos
printf ("Ingrese el primer numero: ");
scanf("%f",&numero1);

// Entrada de datos
printf ("Ingrese el segundo numero: ");
scanf("%f",&numero2);

// Entrada de datos
printf ("Ingrese el tercer numero: ");
scanf("%f",&numero3);

// Entrada de datos
printf ("Ingrese el cuarto numero: ");
scanf("%f",&numero4);

// Entrada de datos
printf ("Ingrese el quinto numero: ");
scanf("%f",&numero5);

// Proceso
suma= numero1 + numero2 + numero3 + numero4 + numero5;
promedio= suma/5;


// Salida
printf("La suma es: %.3f\n", suma);
printf("El promedio es: %.3f\n", promedio);

printf("\nPresiona Enter para finalizar...");
getchar(); // Limpia el buffer
getchar(); // Espera el nuevo Enter

return 0;


}
