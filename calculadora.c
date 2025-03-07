
#include <stdio.h> 

//Declaracion inicial de las funciones
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
        default:
            printf("Opcion no valida. Ingrese una opcion del 1 al 5.\n");
    }

    if (opcion != 5) {
        printf("¿Desea salir del programa? (s/n): ");
        scanf(" %c", &continuar);
    }

} while (opcion != 5 && continuar == 's');

return 0;
}


//Definicion de las funciones
float suma(float a, float b) {
    printf("Has seleccionado suma\n");
    return a + b;
}

float resta(float a, float b){
	printf("Has seleccionado resta\n");
	return a - b;
}

float multiplicacion(float a, float b) {
    printf("Has seleccionado multiplicacion\n");
    return a * b;
}

float division(float a, float b) {
    printf("Has seleccionado division\n");
    if (b == 0){
        printf("Error: Division por cero no valida");
        return 0;
    }
    return a / b;
}

void salir(){
    printf("Saliendo del programa...\n");
    exit(0);
}
