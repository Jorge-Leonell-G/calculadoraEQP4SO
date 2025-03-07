#include <stdio.h>
#include <stdlib.h> // Se incluye para usar exit()

// Declaración de funciones
float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);
void salir();

int main() {
    float num1, num2, resultado;
    int opcion;
    char continuar;

    do {
        // Mostrar el menú
        printf("\nCalculadora en consola\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            printf("Ingrese el primer numero: ");
            scanf("%f", &num1);
            printf("Ingrese el segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcion) {
            case 1:
                resultado = suma(num1, num2);
                printf("El resultado de la suma es: %.2f\n", resultado);
                break;
            case 2:
                resultado = resta(num1, num2);
                printf("El resultado de la resta es: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicacion(num1, num2);
                printf("El resultado de la multiplicacion es: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = division(num1, num2);
                    printf("El resultado de la division es: %.2f\n", resultado);
                } else {
                    printf("Error: Division entre cero no valida.\n");
                }
                break;
            case 5:
                salir();
                return 0;  // Se usa return para salir sin ejecutar el default
            default:
                printf("Opcion no valida. Ingrese una opcion del 1 al 5.\n");
        }

        if (opcion != 5) {
            do{
                printf("¿Desea continuar? (s/n): ");
                scanf(" %c", &continuar);
                while (getchar() != '\n');  // Limpia el buffer de entrada

                if (continuar != 's' && continuar != 'n'){
                    printf("Opcion no valida. Ingrese 's' para continuar o 'n' para salir\n");
                }
            } while (continuar != 's' && continuar != 'n');
            
        }

    } while (opcion != 5 && continuar == 's');

    return 0;
}

// Definición de funciones
float suma(float a, float b) {
    printf("Has seleccionado suma\n");
    return a + b;
}

float resta(float a, float b) {
    printf("Has seleccionado resta\n");
    return a - b;
}

float multiplicacion(float a, float b) {
    printf("Has seleccionado multiplicacion\n");
    return a * b;
}

float division(float a, float b) {
    printf("Has seleccionado division\n");
    return a / b;
}

void salir() {
    printf("Saliendo del programa...\n");
}
