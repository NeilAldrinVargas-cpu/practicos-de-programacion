Algoritmo Clasificador_IMC
    Definir peso, estatura, imc Como Real
    
    Escribir "Ingrese su peso en kilogramos (kg):"
    Leer peso
    Escribir "Ingrese su estatura en metros (ej. 1.75):"
    Leer estatura
    
    // Cálculo del IMC
    imc <- peso / (estatura * estatura)
    
    Escribir "Su IMC es: ", imc
    
    // Clasificación
    Si imc < 18.5 Entonces
        Escribir "Clasificación: Bajo peso"
    Sino
        Si imc >= 18.5 Y imc <= 24.9 Entonces
            Escribir "Clasificación: Peso normal"
        Sino
            Si imc >= 25.0 Y imc <= 29.9 Entonces
                Escribir "Clasificación: Sobrepeso"
            Sino
                Escribir "Clasificación: Obesidad"
            Fin Si
        Fin Si
    Fin Si
FinAlgoritmo
