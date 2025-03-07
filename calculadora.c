#include <stdio.h> 

void suma() {
    printf("Has seleccionado suma\n");
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

//Declaración de funciones
float dividir(float a, float b);

int main() {
<<<<<<< HEAD

    float num1, num2, resultado;
    int opcion;
    printf("Calculadora inicial\n");

=======

    do {
        system("clear");  // Limpia la pantalla

        printf("==== Menu Principal ====\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Salir\n");
        printf("========================\n");
        printf("Selecciona una opcion: ");
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
                printf("Opcion no valida. Intenta de nuevo.\n");
        }
        printf("\nPresiona Enter para continuar...");
        getchar();
        getchar();  

    } while (opcion != 5);

    return 0;
}

//Definicion de funciones

float division(float a, float b) {
    if (b == 0){
        printf("Error: Division por cero no valida");
        return 0;
    }
    return a / b;
}
>>>>>>> e37e3109b32bc03173d3e8960678bff93f06e64a
