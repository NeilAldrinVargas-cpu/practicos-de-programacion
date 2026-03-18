#include <stdio.h>

int main() {
    float peso, estatura, imc;

    printf("Ingrese su peso (kg): ");
    scanf("%f", &peso);
    printf("Ingrese su estatura (m): ");
    scanf("%f", &estatura);

    // Cálculo del IMC
    imc = peso / (estatura * estatura);
    printf("================================\n");
    printf("Su IMC es: %.2f\n", imc);
    printf("================================\n");


    // Clasificación mediante else if
    if (imc < 18.5) {
        printf("Clasificación: Bajo peso\n");
    }
    else if (imc >= 18.5 && imc <= 24.9) {
        printf("Clasificación: Peso normal\n");
    }
    else if (imc >= 25.0 && imc <= 29.9) {
        printf("Clasificación: Sobrepeso\n");
    }
    else {
        printf("Clasificación: Obesidad\n");
    }
    printf("================================\n");


    return 0;
}
