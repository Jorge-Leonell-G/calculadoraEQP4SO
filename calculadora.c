#include <stdio.h>
#include <stdlib.h>  

void suma() {
    printf("Has seleccionado suma\n");
    int num1, num2, resultado;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    resultado=num1+num2;
    printf("La suma de %d y %d es: %d\n", num1, num2, resultado);
}

void resta() {
    printf("Has seleccionado resta\n");
}

void multiplicacion() {
    printf("Has seleccionado multiplicacion\n");
}

void division() {
    printf("Has seleccionado division\n");
}

void salir(){
    printf("Saliendo del programa...\n");
    exit(0);
}

int main() {
    int opcion;

    do {
        system("clear");  // Limpia la pantalla

        printf("==== Menú Principal ====\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Salir\n");
        printf("========================\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                suma();
                break;
            case 2:
                resta();
                break;
            case 3:
                multiplicacion();
                break;
            case 4:
                division();
                break;
            case 5:
                salir();
            default:
                printf("Opción no válida. Intenta de nuevo.\n");
        }
        printf("\nPresiona Enter para continuar...");
        getchar();
        getchar();  

    } while (opcion != 5);

    return 0;
}