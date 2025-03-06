#include <stdio.h>

//Declaración de funciones
float dividir(float a, float b);

int main() {

    float num1, num2, resultado;
    printf("Calculadora inicial\n");
    return 0;
}

float dividir(float a, float b) {
    if (b == 0){
        printf("Error: Division por cero no valida");
        return 0;
    }
    return a / b;
}
