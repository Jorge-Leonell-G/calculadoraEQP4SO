#include <stdio.h>

float suma(float a, float b) {
    return a + b;
}
int main() {
    printf("Calculadora inicial\n");
    float n1, n2, sum;
    printf("Ingrese el primer número: ");
    scanf("%f", &n1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &n2);
    sum = suma(n1, n2);
    printf("La suma de %.2f y %.2f es: %.2f\n", n1, n2, sum);
 return 0;
}
